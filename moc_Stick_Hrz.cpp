/****************************************************************************
** Meta object code from reading C++ file 'Stick_Hrz.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "GameScene/RandomItems/Stick_Hrz.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Stick_Hrz.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Stick_Hrz_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Stick_Hrz_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Stick_Hrz_t qt_meta_stringdata_Stick_Hrz = {
    {
QT_MOC_LITERAL(0, 0, 9) // "Stick_Hrz"

    },
    "Stick_Hrz"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Stick_Hrz[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Stick_Hrz::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Stick_Hrz::staticMetaObject = {
    { &GameItem::staticMetaObject, qt_meta_stringdata_Stick_Hrz.data,
      qt_meta_data_Stick_Hrz,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Stick_Hrz::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Stick_Hrz::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Stick_Hrz.stringdata0))
        return static_cast<void*>(const_cast< Stick_Hrz*>(this));
    return GameItem::qt_metacast(_clname);
}

int Stick_Hrz::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GameItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE