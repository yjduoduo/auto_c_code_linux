#ifndef AUTOCCODE_H
#define AUTOCCODE_H

#include <QtGui>
#include <QWidget>
#include "prefix_string.h"
#include <QDialog>
#include <QListWidgetItem>
#include "gencodedatabase.h"

namespace Ui {
class autoCCode;
class Dialog;
class Dialog_select_database;
}




class autoCCode : public QWidget,public GenCodeDatabase
{
    Q_OBJECT

public:

    explicit autoCCode(QWidget *parent = 0);
    ~autoCCode();

public:
    QDialog *InDb_Dialog;
    QDialog *dialog_selectdb;

    GenCodeDatabase b;


private slots:
    void on_save_btn_clicked();

    void db_comboBox_activated(const QString &arg1);

    void on_choseCodeDB_btn_clicked(void);

    void on_gencode_btn_clicked(void);

    void on_indb_btn_clicked(void);

//    void on_outdb_btn_clicked(void);

    void aboutVersion(void);

    void comboBox_selectdb_currentIndexChanged(const QString &arg1);

//    void add_to_gen_code_textedit(QListWidgetItem* item);
    void add_to_gen_code_textedit_by_keyword(QListWidgetItem* item);

    void add_to_gen_code_textedit_by_note(QListWidgetItem* item);


    void rightClear_textedit(void);

    void ui_comboBox_vartype_currentIndexChanged(const QString &str);

    void comboBox_aspect_currentIndexChanged(const QString &str);

    void add_aspect_totable(void);

    void addstr_aspect_comboBox(void);

    void listWidget_note_scroll_sync(QListWidgetItem *item);

    void listWidget_codeview_scroll_sync(QListWidgetItem* item);

    void delete_btn_clicked_selfdefine(void);

    void SearchText(const QString &searchStr);

    void cleanLineTextEditSearch(void);


    void add_column_lowercase_keywords_content(void);

    void set_index_text();

    void setCliptext();

    void setCliptext_content();

    void note_clear();

    void content_clear();

    void set_search_text();

    void minSize_ui_dialog();

    void widthSize_ui_dialog();

    void maxSize_ui_dialog();

    void setDesktop_center(QDialog *dialog);
public slots:

    void ok_btn_dia_clicked_self(void);

    void cancel_btn_dia_clicked_self(void);


private:
    void pushButtonSet(void);
    void textEditSet(void);
    void addstr_comboBox(void);

    void hide_inBtn(void);
    void hide_OutBtn(void);
    void show_OutBtn(void);
    void show_InBtn(void);

    LanguageType getLanguageType(QString &type);
//    QString getTablename(QString &type);
    QString GetVersion(void);

    void comboBoxSet(void);
    void listWidgetSet(void);

    void select_db_by_vartype(QString &select_exp);

    void clr_selectresult(SelectResult &result);

    void update_show_after_insert(void);

    void lineTextEditSet(void);

    void save_before_ops(void);

    void restore_before_ops(void);

    void clear_listWidget_beforecall(void);

    void judge_color_index(void);

    void listWidget_scrollToBottom(void);

    void dragDropSet(void);

    void checkboxSet();
private:

    Ui::autoCCode *ui;
    Ui::Dialog *ui_dialog;
    Ui::Dialog_select_database *ui_dia_selectdb;


private:
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);
    void readTextFile(const QString &fileName);

protected:
    QString GenCode_str;
private://QString
    QString selected_langtype;

    SelectResult selectresult;

    SelectResult selectresult_tmp;
    unsigned int index_key_color_tmp;
    unsigned int index_note_color_tmp;


    codestructSets* sets;

    int index_key_color;//��¼�ϴε����λ�ã���ע���ٴε��ʱȡ��
    int index_note_color;

    int flag_selectLeft;

    QTextCodec *codec;
};


#endif // AUTOCCODE_H
