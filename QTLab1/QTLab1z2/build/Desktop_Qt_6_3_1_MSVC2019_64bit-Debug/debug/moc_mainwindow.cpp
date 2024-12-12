/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[46];
    char stringdata0[385];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 19), // "on_pb_prawy_clicked"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 18), // "on_pb_lewy_clicked"
QT_MOC_LITERAL(51, 15), // "aktywujPrzycisk"
QT_MOC_LITERAL(67, 12), // "QPushButton*"
QT_MOC_LITERAL(80, 8), // "przycisk"
QT_MOC_LITERAL(89, 14), // "aktualizujDate"
QT_MOC_LITERAL(104, 4), // "data"
QT_MOC_LITERAL(109, 22), // "aktualizacjaStatusBara"
QT_MOC_LITERAL(132, 23), // "on_dateEdit_dateChanged"
QT_MOC_LITERAL(156, 5), // "data_"
QT_MOC_LITERAL(162, 25), // "on_calendarWidget_clicked"
QT_MOC_LITERAL(188, 29), // "on_doubleSpinBox_valueChanged"
QT_MOC_LITERAL(218, 4), // "arg1"
QT_MOC_LITERAL(223, 5), // "Kolor"
QT_MOC_LITERAL(229, 23), // "on_sliderR_valueChanged"
QT_MOC_LITERAL(253, 5), // "value"
QT_MOC_LITERAL(259, 23), // "on_sliderG_valueChanged"
QT_MOC_LITERAL(283, 23), // "on_sliderB_valueChanged"
QT_MOC_LITERAL(307, 25), // "on_spinBox_R_valueChanged"
QT_MOC_LITERAL(333, 25), // "on_spinBox_G_valueChanged"
QT_MOC_LITERAL(359, 25) // "on_spinBox_B_valueChanged"

    },
    "MainWindow\0on_pb_prawy_clicked\0\0"
    "on_pb_lewy_clicked\0aktywujPrzycisk\0"
    "QPushButton*\0przycisk\0aktualizujDate\0"
    "data\0aktualizacjaStatusBara\0"
    "on_dateEdit_dateChanged\0data_\0"
    "on_calendarWidget_clicked\0"
    "on_doubleSpinBox_valueChanged\0arg1\0"
    "Kolor\0on_sliderR_valueChanged\0value\0"
    "on_sliderG_valueChanged\0on_sliderB_valueChanged\0"
    "on_spinBox_R_valueChanged\0"
    "on_spinBox_G_valueChanged\0"
    "on_spinBox_B_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x08,    1 /* Private */,
       3,    0,  105,    2, 0x08,    2 /* Private */,
       4,    1,  106,    2, 0x08,    3 /* Private */,
       7,    1,  109,    2, 0x08,    5 /* Private */,
       9,    0,  112,    2, 0x08,    7 /* Private */,
      10,    1,  113,    2, 0x08,    8 /* Private */,
      12,    1,  116,    2, 0x08,   10 /* Private */,
      13,    1,  119,    2, 0x08,   12 /* Private */,
      15,    0,  122,    2, 0x08,   14 /* Private */,
      16,    1,  123,    2, 0x08,   15 /* Private */,
      18,    1,  126,    2, 0x08,   17 /* Private */,
      19,    1,  129,    2, 0x08,   19 /* Private */,
      20,    1,  132,    2, 0x08,   21 /* Private */,
      21,    1,  135,    2, 0x08,   23 /* Private */,
      22,    1,  138,    2, 0x08,   25 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QDate,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   11,
    QMetaType::Void, QMetaType::QDate,   11,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pb_prawy_clicked(); break;
        case 1: _t->on_pb_lewy_clicked(); break;
        case 2: _t->aktywujPrzycisk((*reinterpret_cast< std::add_pointer_t<QPushButton*>>(_a[1]))); break;
        case 3: _t->aktualizujDate((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 4: _t->aktualizacjaStatusBara(); break;
        case 5: _t->on_dateEdit_dateChanged((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 6: _t->on_calendarWidget_clicked((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 7: _t->on_doubleSpinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 8: _t->Kolor(); break;
        case 9: _t->on_sliderR_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_sliderG_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_sliderB_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_spinBox_R_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_spinBox_G_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_spinBox_B_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPushButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
