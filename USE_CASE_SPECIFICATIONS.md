# Inventory Management System - Technical Use Case Specifications (Validated vs code)

## Overview
These specifications are derived from the current Qt/C++ implementation and SQLite schema:
`PurchaseDialog`, `SalesDialog`, `ItemCodeDialog`, `VendorCodeDialog`, `ReportsDialog`, and
`records/sqlite.sql`. The database schema does **not** declare foreign keys, but the UI logic
uses the following **logical FK dependencies**:

- `items.unit` -> `units.id`
- `purchase_invoice.vendor_code` -> `vendors.vendor_code`
- `purchase_invoice.item_code` -> `items.item_code`
- `sales_invoice.vendor_code` -> `vendors.vendor_code`
- `sales_invoice.item_code` -> `items.item_code`

## Schema Summary (from sqlite.sql)
- `vendors(vendor_code PK, name, address)`
- `units(id PK, unit)`
- `items(item_code PK, item_description, quantity, unit)`
- `purchase_invoice(invoice_no PK, date, vendor_code, item_code, quantity, rate_per_unit, amount_paid)`
- `sales_invoice(invoice_no PK, date, vendor_code, item_code, quantity, rate_per_unit, amount_paid)`

---

## UC1: Connect Database

**Actors:** Manager, System  
**Preconditions:** Application starts.  
**Main Flow:**
1. System sets SQLite driver and checks `appDir/records/data.db`.
2. If the file is missing, the user is asked to select a database file.
3. System opens the selected database and updates the UI status.

**Postconditions:** Database is connected, or the application exits if the user declines.  
**Data Tables Affected:** None (database file open).  
**Calculations:** None.  
**Error Handling:** If the DB cannot be opened, status shows "Database not connected".

---

## UC2: Load Units Reference

**Actors:** Manager, System  
**Preconditions:** DB is connected; `units` table exists.  
**Main Flow:**
1. System queries `SELECT id, unit FROM units`.
2. Results are loaded into the units combo box in ItemCodeDialog.

**Postconditions:** Units list is populated for selection.  
**Data Tables Affected:** `units` (SELECT).  
**Calculations:** None.  
**Error Handling:** Query failure triggers a critical error dialog.

---

## UC3: Register Item

**Actors:** Manager, System  
**Preconditions:** DB is connected; units list loaded.  
**Main Flow:**
1. Manager enters `item_code`, description, quantity, and selects a unit.
2. System validates non-empty fields.
3. Manager confirms the action.
4. System inserts a new row into `items`.

**Postconditions:** New item record exists in `items`.  
**Data Tables Affected:** `items` (INSERT).  
**Calculations:** None.  
**Validation Rules:** All fields must be non-empty.  
**FK Dependencies:** `items.unit` should reference `units.id`.  
**Error Handling:** Validation failure shows a warning; insert failure shows a critical error.

---

## UC4: Register Vendor

**Actors:** Manager, System  
**Preconditions:** DB is connected.  
**Main Flow:**
1. Manager enters `vendor_code`, name, and address.
2. System validates non-empty fields.
3. Manager confirms the action.
4. System inserts a new row into `vendors`.

**Postconditions:** New vendor record exists in `vendors`.  
**Data Tables Affected:** `vendors` (INSERT).  
**Calculations:** None.  
**Validation Rules:** All fields must be non-empty.  
**Error Handling:** Validation failure shows a warning; insert failure shows a critical error.

---

## UC5: Auto-complete Vendor/Buyer Names

**Actors:** System  
**Preconditions:** DB is connected; `vendors` table exists.  
**Main Flow:**
1. System runs `SELECT name FROM vendors`.
2. Results are loaded into a QCompleter for vendor/customer name fields.

**Postconditions:** Auto-complete suggestions are available.  
**Data Tables Affected:** `vendors` (SELECT).  
**Calculations:** None.  
**Error Handling:** No explicit error handling; failures result in empty suggestions.

---

## UC6: Lookup Vendor/Buyer by Name

**Actors:** Manager, System  
**Preconditions:** DB is connected; name entered in the field.  
**Main Flow:**
1. System queries `SELECT vendor_code, name, address FROM vendors WHERE name=?`.
2. If found, the field is marked green and `vendor_code` is stored.
3. If not found, the field is marked red and focus is returned to the field.

**Postconditions:** `vendor_code` is available for invoice insertions.  
**Data Tables Affected:** `vendors` (SELECT).  
**Calculations:** None.  
**Validation Rules:** Name must exist in `vendors`.  
**Error Handling:** Query failure shows a critical error dialog.

---

## UC7: Lookup Item by Code

**Actors:** Manager, System  
**Preconditions:** DB is connected; `item_code` entered.  
**Main Flow:**
1. System queries `SELECT item_code, item_description FROM items WHERE item_code=?` (Purchase) or `SELECT item_code, item_description, quantity FROM items WHERE item_code=?` (Sales).
2. If found, the field is marked green and description is loaded (Sales also reads stock quantity).
3. If not found, the field is marked red and focus is returned.

**Postconditions:** Item description is loaded for display; Sales has stock quantity for UC14.  
**Data Tables Affected:** `items` (SELECT).  
**Calculations:** None.  
**Validation Rules:** Item code must exist in `items`.  
**Error Handling:** Query failure shows a critical error dialog.

---

## UC8: Load Next Purchase Invoice Number

**Actors:** System  
**Preconditions:** DB is connected.  
**Main Flow:**
1. System runs `SELECT MAX(invoice_no) FROM purchase_invoice`.
2. Invoice number is set to max + 1.

**Postconditions:** Purchase invoice number is pre-filled.  
**Data Tables Affected:** `purchase_invoice` (SELECT).  
**Calculations:** `next_invoice = max(invoice_no) + 1`.  
**Error Handling:** On query failure, invoice number defaults to 1 and a critical error dialog is shown.

---

## UC9: Validate Purchase Invoice Number Unique

**Actors:** Manager, System  
**Preconditions:** DB is connected; invoice number entered or edited.  
**Main Flow:**
1. System queries `SELECT invoice_no FROM purchase_invoice WHERE invoice_no=?`.
2. If a match exists, the field is marked red and focus returns to it.
3. If no match exists, the field is marked green.

**Postconditions:** Invoice number is visually validated.  
**Data Tables Affected:** `purchase_invoice` (SELECT).  
**Calculations:** None.  
**Validation Rules:** Invoice number must not already exist.  
**Error Handling:** Query failure shows a critical error dialog.

---

## UC10: Create Purchase Invoice

**Actors:** Manager, Vendor, System  
**Preconditions:** Required fields are filled; vendor and item are valid.  
**Main Flow:**
1. Manager clicks the Purchase action.
2. System validates that all fields are non-empty.
3. Manager confirms the action.
4. System begins a transaction and inserts into `purchase_invoice`.

**Postconditions:** Purchase invoice row exists.  
**Data Tables Affected:** `purchase_invoice` (INSERT).  
**Calculations:** Date is formatted as `yyyy-MM-dd`; amount paid is user-entered.  
**Validation Rules:** Non-empty fields; vendor/item codes must exist.  
**FK Dependencies:** `vendor_code` -> `vendors.vendor_code`, `item_code` -> `items.item_code`.  
**Error Handling:** Insert failure shows a critical error dialog and triggers rollback.

---

## UC11: Update Stock After Purchase

**Actors:** System  
**Preconditions:** UC10 insert succeeded; item exists.  
**Main Flow:**
1. System runs `UPDATE items SET quantity = quantity + ? WHERE item_code=?`.
2. System commits the transaction.

**Postconditions:** Item stock is increased.  
**Data Tables Affected:** `items` (UPDATE).  
**Calculations:** `new_quantity = old_quantity + purchased_quantity`.  
**Error Handling:** Update failure triggers a critical error dialog and rollback.

---

## UC12: Calculate Purchase Total

**Actors:** System  
**Preconditions:** Quantity or rate per unit is changed.  
**Main Flow:**
1. System computes `total = quantity * rate_per_unit`.
2. System sets `totalamounttobepaid` in the UI.

**Postconditions:** Total amount to be paid is displayed.  
**Data Tables Affected:** None.  
**Calculations:** `total = quantity * rate_per_unit`.  
**Error Handling:** None (UI-level calculation).

---

## UC13: Load Next Sales Invoice Number

**Actors:** System  
**Preconditions:** DB is connected.  
**Main Flow:**
1. System runs `SELECT MAX(invoice_no) FROM sales_invoice`.
2. Invoice number is set to max + 1.

**Postconditions:** Sales invoice number is pre-filled.  
**Data Tables Affected:** `sales_invoice` (SELECT).  
**Calculations:** `next_invoice = max(invoice_no) + 1`.  
**Error Handling:** On query failure, invoice number defaults to 1 and a critical error dialog is shown.

---

## UC14: Enforce Stock Limit

**Actors:** System  
**Preconditions:** Item lookup succeeds in Sales dialog.  
**Main Flow:**
1. System reads `quantity` from the `items` query result.
2. System sets the maximum allowed sale quantity to the available stock.

**Postconditions:** User cannot enter a quantity greater than stock.  
**Data Tables Affected:** `items` (SELECT from UC7).  
**Calculations:** `max_sale_quantity = items.quantity`.  
**Error Handling:** Inherits UC7 error handling.

---

## UC15: Create Sales Invoice

**Actors:** Manager, Customer, System  
**Preconditions:** Required fields are filled; customer and item are valid.  
**Main Flow:**
1. Manager clicks the Sell action.
2. System validates that all fields are non-empty.
3. Manager confirms the action.
4. System begins a transaction and inserts into `sales_invoice`.

**Postconditions:** Sales invoice row exists.  
**Data Tables Affected:** `sales_invoice` (INSERT).  
**Calculations:** Date is formatted as `yyyy-MM-dd`; amount paid is user-entered.  
**Validation Rules:** Non-empty fields; customer/item codes must exist.  
**FK Dependencies:** `vendor_code` -> `vendors.vendor_code`, `item_code` -> `items.item_code`.  
**Error Handling:** Insert failure shows a critical error dialog and triggers rollback.

---

## UC16: Update Stock After Sale

**Actors:** System  
**Preconditions:** UC15 insert succeeded; item exists.  
**Main Flow:**
1. System runs `UPDATE items SET quantity = quantity - ? WHERE item_code=?`.
2. System commits the transaction.

**Postconditions:** Item stock is reduced.  
**Data Tables Affected:** `items` (UPDATE).  
**Calculations:** `new_quantity = old_quantity - sold_quantity`.  
**Error Handling:** Update failure triggers a critical error dialog and rollback.

---

## UC17: Calculate Sales Total

**Actors:** System  
**Preconditions:** Quantity or rate per unit is changed.  
**Main Flow:**
1. System computes `total = quantity * rate_per_unit`.
2. System sets `totalamounttobepaid` in the UI.

**Postconditions:** Total amount to be paid is displayed.  
**Data Tables Affected:** None.  
**Calculations:** `total = quantity * rate_per_unit`.  
**Error Handling:** None (UI-level calculation).

---

## UC18: Generate Purchase Report (Datewise)

**Actors:** Manager, Reporting Engine  
**Preconditions:** DB is connected; report dialog is opened.  
**Main Flow:**
1. System sets default date range (current date minus one month to current date).
2. Reporting Engine runs `SELECT * FROM purchase_invoice WHERE date>? AND date<?` using `yyyy-mm-dd` format.
3. Results are bound to the report table view.

**Postconditions:** Datewise purchase report is displayed.  
**Data Tables Affected:** `purchase_invoice` (SELECT).  
**Calculations:** None.  
**Error Handling:** Query failure shows a warning dialog.

---

## UC19: Generate Sales Report (Datewise)

**Actors:** Manager, Reporting Engine  
**Preconditions:** DB is connected; report dialog is opened.  
**Main Flow:**
1. System sets default date range (current date minus one month to current date).
2. Reporting Engine runs `SELECT * FROM sales_invoice WHERE date>? AND date<?` using `yyyy-mm-dd` format.
3. Results are bound to the report table view.

**Postconditions:** Datewise sales report is displayed.  
**Data Tables Affected:** `sales_invoice` (SELECT).  
**Calculations:** None.  
**Error Handling:** Query failure shows a warning dialog.
