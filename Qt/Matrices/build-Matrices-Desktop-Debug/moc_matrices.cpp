/****************************************************************************
** Meta object code from reading C++ file 'matrices.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Matrices/matrices.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'matrices.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Matrices_t {
    QByteArrayData data[13];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Matrices_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Matrices_t qt_meta_stringdata_Matrices = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Matrices"
QT_MOC_LITERAL(1, 9, 25), // "on_Mat_Btt_gToIni_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 26), // "on_Mat_Btt_IntMatr_clicked"
QT_MOC_LITERAL(4, 63, 25), // "on_Mat_Btt_SumMat_clicked"
QT_MOC_LITERAL(5, 89, 30), // "on_NFilasSpinBoxA_valueChanged"
QT_MOC_LITERAL(6, 120, 4), // "arg1"
QT_MOC_LITERAL(7, 125, 33), // "on_NColumnasSpinBoxA_valueCha..."
QT_MOC_LITERAL(8, 159, 32), // "on_NFilasSpinBoxB_2_valueChanged"
QT_MOC_LITERAL(9, 192, 30), // "on_NFilasSpinBoxB_valueChanged"
QT_MOC_LITERAL(10, 223, 27), // "on_Mat_Btt_SumMat_2_clicked"
QT_MOC_LITERAL(11, 251, 33), // "on_NFilasSpinBoxA_editingFini..."
QT_MOC_LITERAL(12, 285, 27) // "on_Mat_Btt_gToIni_2_clicked"

    },
    "Matrices\0on_Mat_Btt_gToIni_clicked\0\0"
    "on_Mat_Btt_IntMatr_clicked\0"
    "on_Mat_Btt_SumMat_clicked\0"
    "on_NFilasSpinBoxA_valueChanged\0arg1\0"
    "on_NColumnasSpinBoxA_valueChanged\0"
    "on_NFilasSpinBoxB_2_valueChanged\0"
    "on_NFilasSpinBoxB_valueChanged\0"
    "on_Mat_Btt_SumMat_2_clicked\0"
    "on_NFilasSpinBoxA_editingFinished\0"
    "on_Mat_Btt_gToIni_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Matrices[] = {

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
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       7,    1,   70,    2, 0x08 /* Private */,
       8,    1,   73,    2, 0x08 /* Private */,
       9,    1,   76,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Matrices::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Matrices *_t = static_cast<Matrices *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Mat_Btt_gToIni_clicked(); break;
        case 1: _t->on_Mat_Btt_IntMatr_clicked(); break;
        case 2: _t->on_Mat_Btt_SumMat_clicked(); break;
        case 3: _t->on_NFilasSpinBoxA_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_NColumnasSpinBoxA_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_NFilasSpinBoxB_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_NFilasSpinBoxB_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_Mat_Btt_SumMat_2_clicked(); break;
        case 8: _t->on_NFilasSpinBoxA_editingFinished(); break;
        case 9: _t->on_Mat_Btt_gToIni_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Matrices::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Matrices.data,
      qt_meta_data_Matrices,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Matrices::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Matrices::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Matrices.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Matrices::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
