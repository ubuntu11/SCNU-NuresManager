/****************************************************************************
** Meta object code from reading C++ file 'controltreewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../maincontent/controltreewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controltreewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControlTreeWidget_t {
    QByteArrayData data[6];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControlTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControlTreeWidget_t qt_meta_stringdata_ControlTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ControlTreeWidget"
QT_MOC_LITERAL(1, 18, 13), // "sendShowIndex"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "WidgetTabType"
QT_MOC_LITERAL(4, 47, 25), // "on_treeWidgetMenu_clicked"
QT_MOC_LITERAL(5, 73, 5) // "index"

    },
    "ControlTreeWidget\0sendShowIndex\0\0"
    "WidgetTabType\0on_treeWidgetMenu_clicked\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControlTreeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    5,

       0        // eod
};

void ControlTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ControlTreeWidget *_t = static_cast<ControlTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendShowIndex((*reinterpret_cast< WidgetTabType(*)>(_a[1]))); break;
        case 1: _t->on_treeWidgetMenu_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ControlTreeWidget::*_t)(WidgetTabType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlTreeWidget::sendShowIndex)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ControlTreeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ControlTreeWidget.data,
      qt_meta_data_ControlTreeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ControlTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControlTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ControlTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ControlTreeWidget::sendShowIndex(WidgetTabType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
