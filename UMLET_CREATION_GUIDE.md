# UMLet Manual Creation Guide - Inventory System Technical Use Cases

## Step-by-Step Instructions

### Step 1: Setup Diagram
1. Open UMLet
2. Create new diagram: **File → New**
3. Select diagram type: **Use Case Diagram**
4. Save as: `Inventory_UseCase_Diagram.uxf`

---

### Step 2: Create Actors (Left Side)
Add 5 actor boxes on the left side of the diagram:

**Positions (approximate):**
- Top: (30, 80)
- Below: (30, 220)
- Middle: (30, 360)
- Below: (30, 500)
- Bottom: (30, 740)

**Actors to add:**
1. Manager
2. Vendor
3. Customer
4. System
5. Reporting Engine

**Steps for each actor:**
- Drag "Actor" element from left panel
- Position on left side
- Double-click to edit name
- Click "Save"

---

### Step 3: Create System Boundary
1. Drag "Package" element from panel (represents system boundary)
2. Resize large rectangle in center/right of diagram
3. Label it: "Inventory Management System"
4. All use cases will go INSIDE this boundary

---

### Step 4: Create Use Cases (Inside System Boundary)

**Setup & Master Data (Left column inside boundary):**
- UC1: Connect Database
- UC2: Load Units Reference
- UC3: Register Item
- UC4: Register Vendor

**Lookup & Validation (Middle column, upper area):**
- UC5: Auto-complete Vendor/Customer Names
- UC6: Lookup Vendor/Customer by Name
- UC7: Lookup Item by Code

**Purchase Flow (Middle column, lower area):**
- UC8: Load Next Purchase Invoice No
- UC9: Validate Purchase Invoice No Unique
- UC10: Create Purchase Invoice
- UC11: Update Stock After Purchase
- UC12: Calculate Purchase Total

**Sales Flow (Right column, lower area):**
- UC13: Load Next Sales Invoice No
- UC14: Enforce Stock Limit
- UC15: Create Sales Invoice
- UC16: Update Stock After Sale
- UC17: Calculate Sales Total

**Reporting (Bottom-right area):**
- UC18: Generate Purchase Report (Datewise)
- UC19: Generate Sales Report (Datewise)

**Steps for each use case:**
- Drag "Use Case" element (oval) into system boundary
- Double-click to edit name
- Position in appropriate group area
- Click "Save"

---

### Step 5: Create Actor-Use Case Relationships

**Manager connects to:**
- UC1, UC3, UC4 (setup/master data)
- UC10, UC15 (main transactions)
- UC18, UC19 (reports)

**Vendor connects to:**
- UC10 (purchase invoice)

**Customer connects to:**
- UC15 (sales invoice)

**System connects to:**
- UC2, UC5, UC6, UC7 (lookups/validation)
- UC8–UC17 (invoice numbers, stock updates, totals)

**Reporting Engine connects to:**
- UC18, UC19

**Steps for connections:**
1. Select "Association" connector from left panel
2. Click on actor → drag to use case
3. Release to connect
4. Repeat for all actor-use case pairs

---

### Step 6: Create Include Relationships (Dependencies)

**Setup & Master Data:**
- UC3 includes UC2

**Purchase flow includes:**
- UC10 includes UC5, UC6, UC7 (lookups)
- UC10 includes UC8, UC9 (invoice number/validation)
- UC10 includes UC11, UC12 (stock update, totals)

**Sales flow includes:**
- UC15 includes UC5, UC6, UC7 (lookups)
- UC15 includes UC13, UC14 (invoice number/stock limit)
- UC15 includes UC16, UC17 (stock update, totals)

**Steps:**
1. Select "Use Case Include" connector (shows as <<include>>)
2. Draw from main use case → to included use case
3. Repeat for all include relationships

---

### Step 7: Organize Layout

**Suggested Layout:**

```
LEFT SIDE (Actors):
    Manager
    Vendor
    Customer
    System
    Reporting Engine

SYSTEM BOUNDARY (Inside):
    [Left Column]   UC1–UC4
    [Middle Column] UC5–UC12
    [Right Column]  UC13–UC17
    [Bottom Right]  UC18–UC19
```

---

### Step 8: Add Documentation Text (Optional)

In UMLet, you can add text boxes to document:
- Data flow information
- Database tables affected
- Key validation rules

**Steps:**
1. Drag "Comment" or "Text" element
2. Add key information
3. Position near relevant use cases

Example comments:
- Near UC10: "Validates vendor_code, item_code FKs"
- Near UC11: "Updates items.quantity"
- Near UC15: "Enforces stock limit, updates inventory"

---

### Step 9: Final Review

Before finalizing, verify:
- ✓ All 5 actors present on left
- ✓ System boundary rectangle contains all 19 use cases
- ✓ Relationships drawn between actors and use cases
- ✓ Include relationships for UC3, UC10, UC15
- ✓ Clear, readable labels on all elements
- ✓ No overlapping or out-of-frame elements

---

## Quick Reference: Relationship Legend

| Relationship | Meaning | Example |
|---|---|---|
| Association | Actor uses use case | Manager → UC10 |
| Include (<<include>>) | Mandatory sub-flow | UC10 includes UC9 |

---

## Summary Counts

- **Actors:** 5
- **Use Cases:** 19 (UC1–UC19)
- **Include Relationships:** 15
- **Logical Groups:** 5 (Setup/Master, Lookup, Purchase, Sales, Reporting)

---

## Tips for UMLet

1. **Alignment:** Use View → Grid to snap elements
2. **Color coding:** Select elements → right-click → properties to color-code groups
3. **Zoom:** Use Ctrl+Scroll to zoom in/out for better visibility
4. **Save:** File → Save regularly
5. **Export:** File → Export as PNG/PDF for documentation
