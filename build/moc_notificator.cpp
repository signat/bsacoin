/****************************************************************************
** Meta object code from reading C++ file 'notificator.h'
**
** Created: Thu Mar 13 10:20:35 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/notificator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notificator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Notificator[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   13,   12,   12, 0x0a,
     107,   87,   12,   12, 0x2a,
     158,  143,   12,   12, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_Notificator[] = {
    "Notificator\0\0cls,title,text,icon,millisTimeout\0"
    "notify(Class,QString,QString,QIcon,int)\0"
    "cls,title,text,icon\0"
    "notify(Class,QString,QString,QIcon)\0"
    "cls,title,text\0notify(Class,QString,QString)\0"
};

const QMetaObject Notificator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Notificator,
      qt_meta_data_Notificator, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Notificator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Notificator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Notificator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Notificator))
        return static_cast<void*>(const_cast< Notificator*>(this));
    return QObject::qt_metacast(_clname);
}

int Notificator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: notify((*reinterpret_cast< Class(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QIcon(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 1: notify((*reinterpret_cast< Class(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QIcon(*)>(_a[4]))); break;
        case 2: notify((*reinterpret_cast< Class(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
