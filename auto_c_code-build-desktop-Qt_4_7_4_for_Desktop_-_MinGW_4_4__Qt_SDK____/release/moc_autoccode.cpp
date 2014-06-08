/****************************************************************************
** Meta object code from reading C++ file 'autoccode.h'
**
** Created: Sun Jun 8 13:01:47 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../auto_c_code/autoccode.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autoccode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_autoCCode[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      38,   33,   10,   10, 0x08,
      69,   10,   10,   10, 0x08,
      98,   10,   10,   10, 0x08,
     123,   10,   10,   10, 0x08,
     145,   10,   10,   10, 0x08,
     168,   10,   10,   10, 0x08,
     183,   33,   10,   10, 0x08,
     235,  230,   10,   10, 0x08,
     289,  230,   10,   10, 0x08,
     340,   10,   10,   10, 0x08,
     366,  362,   10,   10, 0x08,
     415,  362,   10,   10, 0x08,
     460,   10,   10,   10, 0x08,
     481,   10,   10,   10, 0x08,
     506,  230,   10,   10, 0x08,
     552,  230,   10,   10, 0x08,
     602,   10,   10,   10, 0x08,
     644,  634,   10,   10, 0x08,
     664,   10,   10,   10, 0x08,
     690,   10,   10,   10, 0x08,
     730,   10,   10,   10, 0x0a,
     756,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_autoCCode[] = {
    "autoCCode\0\0on_save_btn_clicked()\0arg1\0"
    "db_comboBox_activated(QString)\0"
    "on_choseCodeDB_btn_clicked()\0"
    "on_gencode_btn_clicked()\0on_indb_btn_clicked()\0"
    "on_outdb_btn_clicked()\0aboutVersion()\0"
    "comboBox_selectdb_currentIndexChanged(QString)\0"
    "item\0add_to_gen_code_textedit_by_keyword(QListWidgetItem*)\0"
    "add_to_gen_code_textedit_by_note(QListWidgetItem*)\0"
    "rightClear_textedit()\0str\0"
    "ui_comboBox_vartype_currentIndexChanged(QString)\0"
    "comboBox_aspect_currentIndexChanged(QString)\0"
    "add_aspect_totable()\0addstr_aspect_comboBox()\0"
    "listWidget_note_scroll_sync(QListWidgetItem*)\0"
    "listWidget_codeview_scroll_sync(QListWidgetItem*)\0"
    "delete_btn_clicked_selfdefine()\0"
    "searchStr\0SearchText(QString)\0"
    "cleanLineTextEditSearch()\0"
    "add_column_lowercase_keywords_content()\0"
    "ok_btn_dia_clicked_self()\0"
    "cancel_btn_dia_clicked_self()\0"
};

const QMetaObject autoCCode::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_autoCCode,
      qt_meta_data_autoCCode, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &autoCCode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *autoCCode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *autoCCode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_autoCCode))
        return static_cast<void*>(const_cast< autoCCode*>(this));
    if (!strcmp(_clname, "GenCodeDatabase"))
        return static_cast< GenCodeDatabase*>(const_cast< autoCCode*>(this));
    return QWidget::qt_metacast(_clname);
}

int autoCCode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_save_btn_clicked(); break;
        case 1: db_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: on_choseCodeDB_btn_clicked(); break;
        case 3: on_gencode_btn_clicked(); break;
        case 4: on_indb_btn_clicked(); break;
        case 5: on_outdb_btn_clicked(); break;
        case 6: aboutVersion(); break;
        case 7: comboBox_selectdb_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: add_to_gen_code_textedit_by_keyword((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: add_to_gen_code_textedit_by_note((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: rightClear_textedit(); break;
        case 11: ui_comboBox_vartype_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: comboBox_aspect_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: add_aspect_totable(); break;
        case 14: addstr_aspect_comboBox(); break;
        case 15: listWidget_note_scroll_sync((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 16: listWidget_codeview_scroll_sync((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 17: delete_btn_clicked_selfdefine(); break;
        case 18: SearchText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: cleanLineTextEditSearch(); break;
        case 20: add_column_lowercase_keywords_content(); break;
        case 21: ok_btn_dia_clicked_self(); break;
        case 22: cancel_btn_dia_clicked_self(); break;
        default: ;
        }
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
