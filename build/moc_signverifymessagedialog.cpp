/****************************************************************************
** Meta object code from reading C++ file 'signverifymessagedialog.h'
**
** Created: Thu Mar 13 09:49:31 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/signverifymessagedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signverifymessagedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SignVerifyMessageDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      59,   24,   24,   24, 0x08,
      87,   24,   24,   24, 0x08,
     121,   24,   24,   24, 0x08,
     157,   24,   24,   24, 0x08,
     185,   24,   24,   24, 0x08,
     219,   24,   24,   24, 0x08,
     255,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SignVerifyMessageDialog[] = {
    "SignVerifyMessageDialog\0\0"
    "on_addressBookButton_SM_clicked()\0"
    "on_pasteButton_SM_clicked()\0"
    "on_signMessageButton_SM_clicked()\0"
    "on_copySignatureButton_SM_clicked()\0"
    "on_clearButton_SM_clicked()\0"
    "on_addressBookButton_VM_clicked()\0"
    "on_verifyMessageButton_VM_clicked()\0"
    "on_clearButton_VM_clicked()\0"
};

const QMetaObject SignVerifyMessageDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SignVerifyMessageDialog,
      qt_meta_data_SignVerifyMessageDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SignVerifyMessageDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SignVerifyMessageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SignVerifyMessageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SignVerifyMessageDialog))
        return static_cast<void*>(const_cast< SignVerifyMessageDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SignVerifyMessageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_addressBookButton_SM_clicked(); break;
        case 1: on_pasteButton_SM_clicked(); break;
        case 2: on_signMessageButton_SM_clicked(); break;
        case 3: on_copySignatureButton_SM_clicked(); break;
        case 4: on_clearButton_SM_clicked(); break;
        case 5: on_addressBookButton_VM_clicked(); break;
        case 6: on_verifyMessageButton_VM_clicked(); break;
        case 7: on_clearButton_VM_clicked(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
