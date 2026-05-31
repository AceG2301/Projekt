/****************************************************************************
** Meta object code from reading C++ file 'salesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../salesdialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'salesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN11SalesDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto SalesDialog::qt_create_metaobjectdata<qt_meta_tag_ZN11SalesDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SalesDialog",
        "on_itemcode_spinBox_editingFinished",
        "",
        "on_quantity_doubleSpinBox_valueChanged",
        "arg1",
        "on_rateperunit_doubleSpinBox_valueChanged",
        "on_sell_pushButton_clicked",
        "on_buyername_lineEdit_editingFinished"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_itemcode_spinBox_editingFinished'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_quantity_doubleSpinBox_valueChanged'
        QtMocHelpers::SlotData<void(double)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 4 },
        }}),
        // Slot 'on_rateperunit_doubleSpinBox_valueChanged'
        QtMocHelpers::SlotData<void(double)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 4 },
        }}),
        // Slot 'on_sell_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buyername_lineEdit_editingFinished'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SalesDialog, qt_meta_tag_ZN11SalesDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SalesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11SalesDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11SalesDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11SalesDialogE_t>.metaTypes,
    nullptr
} };

void SalesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SalesDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_itemcode_spinBox_editingFinished(); break;
        case 1: _t->on_quantity_doubleSpinBox_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->on_rateperunit_doubleSpinBox_valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->on_sell_pushButton_clicked(); break;
        case 4: _t->on_buyername_lineEdit_editingFinished(); break;
        default: ;
        }
    }
}

const QMetaObject *SalesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SalesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11SalesDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SalesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
