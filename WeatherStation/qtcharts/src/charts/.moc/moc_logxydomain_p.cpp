/****************************************************************************
** Meta object code from reading C++ file 'logxydomain_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../domain/logxydomain_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logxydomain_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__LogXYDomain_t {
    QByteArrayData data[4];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__LogXYDomain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__LogXYDomain_t qt_meta_stringdata_QtCharts__LogXYDomain = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QtCharts::LogXYDomain"
QT_MOC_LITERAL(1, 22, 31), // "handleHorizontalAxisBaseChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 5) // "baseX"

    },
    "QtCharts::LogXYDomain\0"
    "handleHorizontalAxisBaseChanged\0\0baseX"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__LogXYDomain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,

       0        // eod
};

void QtCharts::LogXYDomain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogXYDomain *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleHorizontalAxisBaseChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtCharts::LogXYDomain::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractDomain::staticMetaObject>(),
    qt_meta_stringdata_QtCharts__LogXYDomain.data,
    qt_meta_data_QtCharts__LogXYDomain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtCharts::LogXYDomain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::LogXYDomain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__LogXYDomain.stringdata0))
        return static_cast<void*>(this);
    return AbstractDomain::qt_metacast(_clname);
}

int QtCharts::LogXYDomain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractDomain::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
