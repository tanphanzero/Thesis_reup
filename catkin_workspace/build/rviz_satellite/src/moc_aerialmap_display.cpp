/****************************************************************************
** Meta object code from reading C++ file 'aerialmap_display.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/rviz_satellite-master/src/aerialmap_display.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aerialmap_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz__AerialMapDisplay_t {
    QByteArrayData data[15];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz__AerialMapDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz__AerialMapDisplay_t qt_meta_stringdata_rviz__AerialMapDisplay = {
    {
QT_MOC_LITERAL(0, 0, 22), // "rviz::AerialMapDisplay"
QT_MOC_LITERAL(1, 23, 11), // "updateAlpha"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "updateTopic"
QT_MOC_LITERAL(4, 48, 15), // "updateDrawUnder"
QT_MOC_LITERAL(5, 64, 13), // "updateTileUrl"
QT_MOC_LITERAL(6, 78, 10), // "updateZoom"
QT_MOC_LITERAL(7, 89, 12), // "updateBlocks"
QT_MOC_LITERAL(8, 102, 22), // "updateMapTransformType"
QT_MOC_LITERAL(9, 125, 14), // "updateMapFrame"
QT_MOC_LITERAL(10, 140, 14), // "updateUtmFrame"
QT_MOC_LITERAL(11, 155, 13), // "updateUtmZone"
QT_MOC_LITERAL(12, 169, 17), // "updateXYReference"
QT_MOC_LITERAL(13, 187, 16), // "updateZReference"
QT_MOC_LITERAL(14, 204, 13) // "updateZOffset"

    },
    "rviz::AerialMapDisplay\0updateAlpha\0\0"
    "updateTopic\0updateDrawUnder\0updateTileUrl\0"
    "updateZoom\0updateBlocks\0updateMapTransformType\0"
    "updateMapFrame\0updateUtmFrame\0"
    "updateUtmZone\0updateXYReference\0"
    "updateZReference\0updateZOffset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz__AerialMapDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x09 /* Protected */,
       3,    0,   80,    2, 0x09 /* Protected */,
       4,    0,   81,    2, 0x09 /* Protected */,
       5,    0,   82,    2, 0x09 /* Protected */,
       6,    0,   83,    2, 0x09 /* Protected */,
       7,    0,   84,    2, 0x09 /* Protected */,
       8,    0,   85,    2, 0x09 /* Protected */,
       9,    0,   86,    2, 0x09 /* Protected */,
      10,    0,   87,    2, 0x09 /* Protected */,
      11,    0,   88,    2, 0x09 /* Protected */,
      12,    0,   89,    2, 0x09 /* Protected */,
      13,    0,   90,    2, 0x09 /* Protected */,
      14,    0,   91,    2, 0x09 /* Protected */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rviz::AerialMapDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AerialMapDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateAlpha(); break;
        case 1: _t->updateTopic(); break;
        case 2: _t->updateDrawUnder(); break;
        case 3: _t->updateTileUrl(); break;
        case 4: _t->updateZoom(); break;
        case 5: _t->updateBlocks(); break;
        case 6: _t->updateMapTransformType(); break;
        case 7: _t->updateMapFrame(); break;
        case 8: _t->updateUtmFrame(); break;
        case 9: _t->updateUtmZone(); break;
        case 10: _t->updateXYReference(); break;
        case 11: _t->updateZReference(); break;
        case 12: _t->updateZOffset(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject rviz::AerialMapDisplay::staticMetaObject = { {
    &Display::staticMetaObject,
    qt_meta_stringdata_rviz__AerialMapDisplay.data,
    qt_meta_data_rviz__AerialMapDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz::AerialMapDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz::AerialMapDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz__AerialMapDisplay.stringdata0))
        return static_cast<void*>(this);
    return Display::qt_metacast(_clname);
}

int rviz::AerialMapDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Display::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
