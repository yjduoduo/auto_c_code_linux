/********************************************************************************
** Form generated from reading UI file 'autoccode.ui'
**
** Created: Thu Jun 5 18:00:59 2014
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOCCODE_H
#define UI_AUTOCCODE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_autoCCode
{
public:
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *get_listlabel;
    QLineEdit *lineEdit_search;
    QPushButton *pushButton_clean;
    QComboBox *comboBox_vartype;
    QPushButton *choseCodeDB_btn;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QListWidget *listWidget_codeview;
    QListWidget *listWidget_note;
    QTextEdit *codeshow_textEdit;
    QVBoxLayout *verticalLayout_3;
    QPushButton *indb_btn;
    QPushButton *outdb_btn;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_updatedb;
    QPushButton *rightclear_btn;
    QPushButton *delete_btn;
    QSpacerItem *verticalSpacer_3;
    QPushButton *about_btn;
    QPushButton *close_btn;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *save_btn;
    QPushButton *gencode_btn;
    QTextEdit *genshow_textEdit;

    void setupUi(QWidget *autoCCode)
    {
        if (autoCCode->objectName().isEmpty())
            autoCCode->setObjectName(QString::fromUtf8("autoCCode"));
        autoCCode->resize(936, 438);
        horizontalLayout_4 = new QHBoxLayout(autoCCode);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        get_listlabel = new QLabel(autoCCode);
        get_listlabel->setObjectName(QString::fromUtf8("get_listlabel"));
        get_listlabel->setEnabled(true);

        horizontalLayout_2->addWidget(get_listlabel);

        lineEdit_search = new QLineEdit(autoCCode);
        lineEdit_search->setObjectName(QString::fromUtf8("lineEdit_search"));

        horizontalLayout_2->addWidget(lineEdit_search);

        pushButton_clean = new QPushButton(autoCCode);
        pushButton_clean->setObjectName(QString::fromUtf8("pushButton_clean"));

        horizontalLayout_2->addWidget(pushButton_clean);

        comboBox_vartype = new QComboBox(autoCCode);
        comboBox_vartype->setObjectName(QString::fromUtf8("comboBox_vartype"));

        horizontalLayout_2->addWidget(comboBox_vartype);

        choseCodeDB_btn = new QPushButton(autoCCode);
        choseCodeDB_btn->setObjectName(QString::fromUtf8("choseCodeDB_btn"));

        horizontalLayout_2->addWidget(choseCodeDB_btn);


        verticalLayout->addLayout(horizontalLayout_2);

        splitter_2 = new QSplitter(autoCCode);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        listWidget_codeview = new QListWidget(splitter);
        listWidget_codeview->setObjectName(QString::fromUtf8("listWidget_codeview"));
        splitter->addWidget(listWidget_codeview);
        listWidget_note = new QListWidget(splitter);
        listWidget_note->setObjectName(QString::fromUtf8("listWidget_note"));
        splitter->addWidget(listWidget_note);
        splitter_2->addWidget(splitter);
        codeshow_textEdit = new QTextEdit(splitter_2);
        codeshow_textEdit->setObjectName(QString::fromUtf8("codeshow_textEdit"));
        splitter_2->addWidget(codeshow_textEdit);

        verticalLayout->addWidget(splitter_2);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        indb_btn = new QPushButton(autoCCode);
        indb_btn->setObjectName(QString::fromUtf8("indb_btn"));

        verticalLayout_3->addWidget(indb_btn);

        outdb_btn = new QPushButton(autoCCode);
        outdb_btn->setObjectName(QString::fromUtf8("outdb_btn"));

        verticalLayout_3->addWidget(outdb_btn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        pushButton_updatedb = new QPushButton(autoCCode);
        pushButton_updatedb->setObjectName(QString::fromUtf8("pushButton_updatedb"));

        verticalLayout_3->addWidget(pushButton_updatedb);

        rightclear_btn = new QPushButton(autoCCode);
        rightclear_btn->setObjectName(QString::fromUtf8("rightclear_btn"));

        verticalLayout_3->addWidget(rightclear_btn);

        delete_btn = new QPushButton(autoCCode);
        delete_btn->setObjectName(QString::fromUtf8("delete_btn"));

        verticalLayout_3->addWidget(delete_btn);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        about_btn = new QPushButton(autoCCode);
        about_btn->setObjectName(QString::fromUtf8("about_btn"));

        verticalLayout_3->addWidget(about_btn);

        close_btn = new QPushButton(autoCCode);
        close_btn->setObjectName(QString::fromUtf8("close_btn"));

        verticalLayout_3->addWidget(close_btn);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        save_btn = new QPushButton(autoCCode);
        save_btn->setObjectName(QString::fromUtf8("save_btn"));
        save_btn->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(save_btn);

        gencode_btn = new QPushButton(autoCCode);
        gencode_btn->setObjectName(QString::fromUtf8("gencode_btn"));
        gencode_btn->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(gencode_btn);


        verticalLayout_2->addLayout(horizontalLayout);

        genshow_textEdit = new QTextEdit(autoCCode);
        genshow_textEdit->setObjectName(QString::fromUtf8("genshow_textEdit"));

        verticalLayout_2->addWidget(genshow_textEdit);


        horizontalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        retranslateUi(autoCCode);

        QMetaObject::connectSlotsByName(autoCCode);
    } // setupUi

    void retranslateUi(QWidget *autoCCode)
    {
        autoCCode->setWindowTitle(QApplication::translate("autoCCode", "autoCCode", 0, QApplication::UnicodeUTF8));
        get_listlabel->setText(QApplication::translate("autoCCode", "GetList", 0, QApplication::UnicodeUTF8));
        pushButton_clean->setText(QApplication::translate("autoCCode", "search clean", 0, QApplication::UnicodeUTF8));
        choseCodeDB_btn->setText(QApplication::translate("autoCCode", "\351\200\211\346\213\251\344\273\243\347\240\201\345\272\223", 0, QApplication::UnicodeUTF8));
        indb_btn->setText(QApplication::translate("autoCCode", "\345\205\245\345\272\223", 0, QApplication::UnicodeUTF8));
        outdb_btn->setText(QApplication::translate("autoCCode", "\345\207\272\345\272\223", 0, QApplication::UnicodeUTF8));
        pushButton_updatedb->setText(QApplication::translate("autoCCode", "\346\233\264\346\226\260\345\272\223", 0, QApplication::UnicodeUTF8));
        rightclear_btn->setText(QApplication::translate("autoCCode", "\345\217\263\346\270\205\347\251\272", 0, QApplication::UnicodeUTF8));
        delete_btn->setText(QApplication::translate("autoCCode", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        about_btn->setText(QApplication::translate("autoCCode", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
        close_btn->setText(QApplication::translate("autoCCode", "close", 0, QApplication::UnicodeUTF8));
        save_btn->setText(QApplication::translate("autoCCode", "save", 0, QApplication::UnicodeUTF8));
        gencode_btn->setText(QApplication::translate("autoCCode", "\347\224\237\346\210\220\344\273\243\347\240\201\345\272\223", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class autoCCode: public Ui_autoCCode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOCCODE_H
