/****************************************************************************
** Meta object code from reading C++ file 'monitoreddatamapper.h'
**
** Created: Thu Mar 13 13:43:59 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/monitoreddatamapper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'monitoreddatamapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MonitoredDataMapper[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_MonitoredDataMapper[] = {
    "MonitoredDataMapper\0\0viewModified()\0"
};

const QMetaObject MonitoredDataMapper::staticMetaObject = {
    { &QDataWidgetMapper::staticMetaObject, qt_meta_stringdata_MonitoredDataMapper,
      qt_meta_data_MonitoredDataMapper, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MonitoredDataMapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MonitoredDataMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MonitoredDataMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MonitoredDataMapper))
        return static_cast<void*>(const_cast< MonitoredDataMapper*>(this));
    return QDataWidgetMapper::qt_metacast(_clname);
}

int MonitoredDataMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDataWidgetMapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: viewModified(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MonitoredDataMapper::viewModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
