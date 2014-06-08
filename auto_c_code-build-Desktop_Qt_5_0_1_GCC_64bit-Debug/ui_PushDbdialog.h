/********************************************************************************
** Form generated from reading UI file 'PushDbdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUSHDBDIALOG_H
#define UI_PUSHDBDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *content_textEdit_dia;
    QVBoxLayout *verticalLayout;
    QComboBox *langtype_comboBox;
    QLabel *label_5;
    QComboBox *comboBox_vartype;
    QLabel *label_6;
    QComboBox *comboBox_aspect;
    QSpacerItem *verticalSpacer_2;
    QTextEdit *index_textEdit_dia;
    QTextEdit *note_textEdit_dia;
    QPushButton *ok_btn_dia;
    QPushButton *cancel_btn_dia;
    QPushButton *pushButton_add;
    QLineEdit *lineEdit_add_aspect;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(764, 309);
        horizontalLayoutWidget = new QWidget(Dialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, -10, 691, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        horizontalLayoutWidget_2 = new QWidget(Dialog);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 40, 701, 221));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        content_textEdit_dia = new QTextEdit(horizontalLayoutWidget_2);
        content_textEdit_dia->setObjectName(QStringLiteral("content_textEdit_dia"));

        horizontalLayout_2->addWidget(content_textEdit_dia);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        langtype_comboBox = new QComboBox(horizontalLayoutWidget_2);
        langtype_comboBox->setObjectName(QStringLiteral("langtype_comboBox"));

        verticalLayout->addWidget(langtype_comboBox);

        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        comboBox_vartype = new QComboBox(horizontalLayoutWidget_2);
        comboBox_vartype->setObjectName(QStringLiteral("comboBox_vartype"));

        verticalLayout->addWidget(comboBox_vartype);

        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        comboBox_aspect = new QComboBox(horizontalLayoutWidget_2);
        comboBox_aspect->setObjectName(QStringLiteral("comboBox_aspect"));

        verticalLayout->addWidget(comboBox_aspect);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);

        index_textEdit_dia = new QTextEdit(horizontalLayoutWidget_2);
        index_textEdit_dia->setObjectName(QStringLiteral("index_textEdit_dia"));

        horizontalLayout_2->addWidget(index_textEdit_dia);

        note_textEdit_dia = new QTextEdit(horizontalLayoutWidget_2);
        note_textEdit_dia->setObjectName(QStringLiteral("note_textEdit_dia"));

        horizontalLayout_2->addWidget(note_textEdit_dia);

        ok_btn_dia = new QPushButton(Dialog);
        ok_btn_dia->setObjectName(QStringLiteral("ok_btn_dia"));
        ok_btn_dia->setGeometry(QRect(500, 260, 91, 41));
        cancel_btn_dia = new QPushButton(Dialog);
        cancel_btn_dia->setObjectName(QStringLiteral("cancel_btn_dia"));
        cancel_btn_dia->setGeometry(QRect(620, 260, 91, 41));
        pushButton_add = new QPushButton(Dialog);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(170, 270, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        pushButton_add->setFont(font);
        lineEdit_add_aspect = new QLineEdit(Dialog);
        lineEdit_add_aspect->setObjectName(QStringLiteral("lineEdit_add_aspect"));
        lineEdit_add_aspect->setGeometry(QRect(20, 270, 121, 31));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", "\345\206\205\345\256\271", 0));
        label_2->setText(QApplication::translate("Dialog", "\350\257\255\350\250\200\347\261\273\345\236\213", 0));
        label_3->setText(QApplication::translate("Dialog", "\346\243\200\347\264\242", 0));
        label_4->setText(QApplication::translate("Dialog", "\345\244\207\346\263\250", 0));
        label_5->setText(QApplication::translate("Dialog", "\345\217\230\351\207\217\347\261\273\345\236\213", 0));
        label_6->setText(QApplication::translate("Dialog", "\350\214\203\347\225\264", 0));
        ok_btn_dia->setText(QApplication::translate("Dialog", "\347\241\256\345\256\232", 0));
        cancel_btn_dia->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", 0));
        pushButton_add->setText(QApplication::translate("Dialog", "\346\267\273\345\212\240", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUSHDBDIALOG_H
