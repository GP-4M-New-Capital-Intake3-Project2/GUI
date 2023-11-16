/****************************************************************************
** Meta object code from reading C++ file 'fota.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../FOTA_ver1/fota.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fota.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_fota_t {
    QByteArrayData data[12];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fota_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fota_t qt_meta_stringdata_fota = {
    {
QT_MOC_LITERAL(0, 0, 4), // "fota"
QT_MOC_LITERAL(1, 5, 28), // "on_Server_pushButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 59, 21), // "on_LED_Button_clicked"
QT_MOC_LITERAL(5, 81, 28), // "on_ShowFolderContent_clicked"
QT_MOC_LITERAL(6, 110, 29), // "on_GetFeatures_button_clicked"
QT_MOC_LITERAL(7, 140, 17), // "on_NULL_2_clicked"
QT_MOC_LITERAL(8, 158, 29), // "on_FingerPrint_Button_clicked"
QT_MOC_LITERAL(9, 188, 31), // "on_Access_Finger_button_clicked"
QT_MOC_LITERAL(10, 220, 25), // "on_Connect_Button_clicked"
QT_MOC_LITERAL(11, 246, 28) // "on_ConnectWin_Button_clicked"

    },
    "fota\0on_Server_pushButton_clicked\0\0"
    "on_pushButton_2_clicked\0on_LED_Button_clicked\0"
    "on_ShowFolderContent_clicked\0"
    "on_GetFeatures_button_clicked\0"
    "on_NULL_2_clicked\0on_FingerPrint_Button_clicked\0"
    "on_Access_Finger_button_clicked\0"
    "on_Connect_Button_clicked\0"
    "on_ConnectWin_Button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fota[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void fota::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<fota *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Server_pushButton_clicked(); break;
        //case 1: _t->on_pushButton_2_clicked(); break;
        //case 2: _t->on_LED_Button_clicked(); break;
       // case 3: _t->on_ShowFolderContent_clicked(); break;
        case 4: _t->on_GetFeatures_button_clicked(); break;
       // case 5: _t->on_NULL_2_clicked(); break;
        case 6: _t->on_FingerPrint_Button_clicked(); break;
        case 7: _t->on_Access_Finger_button_clicked(); break;
       // case 8: _t->on_Connect_Button_clicked(); break;
        case 9: _t->on_ConnectWin_Button_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject fota::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_fota.data,
    qt_meta_data_fota,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *fota::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fota::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_fota.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int fota::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
