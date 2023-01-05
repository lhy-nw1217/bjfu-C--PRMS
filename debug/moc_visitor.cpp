/****************************************************************************
** Meta object code from reading C++ file 'visitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../visitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_visitor_t {
    QByteArrayData data[13];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_visitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_visitor_t qt_meta_stringdata_visitor = {
    {
QT_MOC_LITERAL(0, 0, 7), // "visitor"
QT_MOC_LITERAL(1, 8, 11), // "openRefMess"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "saveRefMess"
QT_MOC_LITERAL(4, 33, 9), // "AddRefBox"
QT_MOC_LITERAL(5, 43, 9), // "delRefFun"
QT_MOC_LITERAL(6, 53, 11), // "findRefMess"
QT_MOC_LITERAL(7, 65, 13), // "changeRefMess"
QT_MOC_LITERAL(8, 79, 3), // "row"
QT_MOC_LITERAL(9, 83, 12), // "changeRefBox"
QT_MOC_LITERAL(10, 96, 10), // "flushTable"
QT_MOC_LITERAL(11, 107, 15), // "flushListWidget"
QT_MOC_LITERAL(12, 123, 8) // "ExitMess"

    },
    "visitor\0openRefMess\0\0saveRefMess\0"
    "AddRefBox\0delRefFun\0findRefMess\0"
    "changeRefMess\0row\0changeRefBox\0"
    "flushTable\0flushListWidget\0ExitMess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_visitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    1,   69,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x0a /* Public */,
      11,    1,   74,    2, 0x0a /* Public */,
      12,    0,   77,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void visitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        visitor *_t = static_cast<visitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openRefMess(); break;
        case 1: _t->saveRefMess(); break;
        case 2: _t->AddRefBox(); break;
        case 3: _t->delRefFun(); break;
        case 4: _t->findRefMess(); break;
        case 5: _t->changeRefMess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->changeRefBox(); break;
        case 7: _t->flushTable(); break;
        case 8: _t->flushListWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->ExitMess(); break;
        default: ;
        }
    }
}

const QMetaObject visitor::staticMetaObject = {
    { &user::staticMetaObject, qt_meta_stringdata_visitor.data,
      qt_meta_data_visitor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *visitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *visitor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_visitor.stringdata0))
        return static_cast<void*>(this);
    return user::qt_metacast(_clname);
}

int visitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = user::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
