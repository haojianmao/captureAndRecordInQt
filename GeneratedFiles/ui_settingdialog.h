/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *l_filename_6;
    QSpinBox *sb_quality;
    QCheckBox *cb_overwriteConfirm;
    QLineEdit *le_filename;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_finish;
    QPushButton *b_cancel;
    QCheckBox *cb_stayOnTop;
    QLabel *l_filename_5;
    QLabel *l_filename_2;
    QLabel *l_filename;
    QLabel *l_path;
    QPushButton *b_folder;
    QComboBox *cb_language;
    QComboBox *cb_filetype;
    QLabel *l_folder;
    QLabel *lb_filenameSample;
    QLabel *l_filename_3;
    QCheckBox *cb_openDialog;
    QLabel *l_filename_4;
    QSpinBox *sb_delaySecs;
    QGroupBox *gb_png_setting;
    QVBoxLayout *verticalLayout;
    QCheckBox *cb_forcePngAlpha;
    QCheckBox *cb_aggressivePngCompress;
    QCheckBox *cb_drawArrow;

    void setupUi(QDialog *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName(QString::fromUtf8("SettingDialog"));
        SettingDialog->resize(438, 491);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SettingDialog->sizePolicy().hasHeightForWidth());
        SettingDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(SettingDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(6);
        l_filename_6 = new QLabel(SettingDialog);
        l_filename_6->setObjectName(QString::fromUtf8("l_filename_6"));
        l_filename_6->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        gridLayout->addWidget(l_filename_6, 3, 0, 1, 1);

        sb_quality = new QSpinBox(SettingDialog);
        sb_quality->setObjectName(QString::fromUtf8("sb_quality"));
        sb_quality->setMinimum(0);
        sb_quality->setMaximum(100);
        sb_quality->setValue(100);

        gridLayout->addWidget(sb_quality, 3, 1, 1, 2);

        cb_overwriteConfirm = new QCheckBox(SettingDialog);
        cb_overwriteConfirm->setObjectName(QString::fromUtf8("cb_overwriteConfirm"));

        gridLayout->addWidget(cb_overwriteConfirm, 12, 1, 1, 2);

        le_filename = new QLineEdit(SettingDialog);
        le_filename->setObjectName(QString::fromUtf8("le_filename"));

        gridLayout->addWidget(le_filename, 1, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        b_finish = new QPushButton(SettingDialog);
        b_finish->setObjectName(QString::fromUtf8("b_finish"));
        b_finish->setMinimumSize(QSize(0, 30));
        b_finish->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(b_finish);

        b_cancel = new QPushButton(SettingDialog);
        b_cancel->setObjectName(QString::fromUtf8("b_cancel"));
        b_cancel->setMinimumSize(QSize(0, 30));
        b_cancel->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(b_cancel);

        horizontalLayout->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout, 14, 0, 1, 3);

        cb_stayOnTop = new QCheckBox(SettingDialog);
        cb_stayOnTop->setObjectName(QString::fromUtf8("cb_stayOnTop"));

        gridLayout->addWidget(cb_stayOnTop, 13, 1, 1, 2);

        l_filename_5 = new QLabel(SettingDialog);
        l_filename_5->setObjectName(QString::fromUtf8("l_filename_5"));
        l_filename_5->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        gridLayout->addWidget(l_filename_5, 6, 0, 1, 1);

        l_filename_2 = new QLabel(SettingDialog);
        l_filename_2->setObjectName(QString::fromUtf8("l_filename_2"));
        l_filename_2->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        gridLayout->addWidget(l_filename_2, 4, 0, 1, 1);

        l_filename = new QLabel(SettingDialog);
        l_filename->setObjectName(QString::fromUtf8("l_filename"));
        l_filename->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        gridLayout->addWidget(l_filename, 1, 0, 1, 1);

        l_path = new QLabel(SettingDialog);
        l_path->setObjectName(QString::fromUtf8("l_path"));
        l_path->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(l_path, 0, 1, 1, 1);

        b_folder = new QPushButton(SettingDialog);
        b_folder->setObjectName(QString::fromUtf8("b_folder"));
        b_folder->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(b_folder, 0, 2, 1, 1);

        cb_language = new QComboBox(SettingDialog);
        cb_language->addItem(QString());
        cb_language->setObjectName(QString::fromUtf8("cb_language"));
        cb_language->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(cb_language, 6, 1, 1, 2);

        cb_filetype = new QComboBox(SettingDialog);
        cb_filetype->addItem(QString());
        cb_filetype->addItem(QString());
        cb_filetype->addItem(QString());
        cb_filetype->setObjectName(QString::fromUtf8("cb_filetype"));
        cb_filetype->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(cb_filetype, 7, 1, 1, 1);

        l_folder = new QLabel(SettingDialog);
        l_folder->setObjectName(QString::fromUtf8("l_folder"));
        l_folder->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        gridLayout->addWidget(l_folder, 0, 0, 1, 1);

        lb_filenameSample = new QLabel(SettingDialog);
        lb_filenameSample->setObjectName(QString::fromUtf8("lb_filenameSample"));

        gridLayout->addWidget(lb_filenameSample, 2, 1, 1, 2);

        l_filename_3 = new QLabel(SettingDialog);
        l_filename_3->setObjectName(QString::fromUtf8("l_filename_3"));
        l_filename_3->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        gridLayout->addWidget(l_filename_3, 7, 0, 1, 1);

        cb_openDialog = new QCheckBox(SettingDialog);
        cb_openDialog->setObjectName(QString::fromUtf8("cb_openDialog"));

        gridLayout->addWidget(cb_openDialog, 10, 1, 1, 2);

        l_filename_4 = new QLabel(SettingDialog);
        l_filename_4->setObjectName(QString::fromUtf8("l_filename_4"));
        l_filename_4->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        gridLayout->addWidget(l_filename_4, 10, 0, 1, 1);

        sb_delaySecs = new QSpinBox(SettingDialog);
        sb_delaySecs->setObjectName(QString::fromUtf8("sb_delaySecs"));
        sb_delaySecs->setMinimum(1);
        sb_delaySecs->setMaximum(20);
        sb_delaySecs->setValue(3);

        gridLayout->addWidget(sb_delaySecs, 4, 1, 1, 2);

        gb_png_setting = new QGroupBox(SettingDialog);
        gb_png_setting->setObjectName(QString::fromUtf8("gb_png_setting"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gb_png_setting->sizePolicy().hasHeightForWidth());
        gb_png_setting->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(gb_png_setting);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cb_forcePngAlpha = new QCheckBox(gb_png_setting);
        cb_forcePngAlpha->setObjectName(QString::fromUtf8("cb_forcePngAlpha"));

        verticalLayout->addWidget(cb_forcePngAlpha);

        cb_aggressivePngCompress = new QCheckBox(gb_png_setting);
        cb_aggressivePngCompress->setObjectName(QString::fromUtf8("cb_aggressivePngCompress"));

        verticalLayout->addWidget(cb_aggressivePngCompress);


        gridLayout->addWidget(gb_png_setting, 8, 1, 2, 2);

        cb_drawArrow = new QCheckBox(SettingDialog);
        cb_drawArrow->setObjectName(QString::fromUtf8("cb_drawArrow"));

        gridLayout->addWidget(cb_drawArrow, 11, 1, 1, 2);


        retranslateUi(SettingDialog);

        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingDialog)
    {
        SettingDialog->setWindowTitle(QApplication::translate("SettingDialog", "Settings", nullptr));
        l_filename_6->setText(QApplication::translate("SettingDialog", "Quality", nullptr));
        cb_overwriteConfirm->setText(QApplication::translate("SettingDialog", "Confirm when overwrite existing file", nullptr));
        b_finish->setText(QApplication::translate("SettingDialog", "OK", nullptr));
        b_cancel->setText(QApplication::translate("SettingDialog", "Cancel", nullptr));
        cb_stayOnTop->setText(QApplication::translate("SettingDialog", "Always stay on top", nullptr));
        l_filename_5->setText(QApplication::translate("SettingDialog", "Language\n"
"(needs restart)", nullptr));
        l_filename_2->setText(QApplication::translate("SettingDialog", "Delayed time(sec)", nullptr));
        l_filename->setText(QApplication::translate("SettingDialog", "File name format", nullptr));
        l_path->setText(QApplication::translate("SettingDialog", "path", nullptr));
        b_folder->setText(QApplication::translate("SettingDialog", "Select", nullptr));
        cb_language->setItemText(0, QApplication::translate("SettingDialog", "English", nullptr));

        cb_filetype->setItemText(0, QApplication::translate("SettingDialog", "png", nullptr));
        cb_filetype->setItemText(1, QApplication::translate("SettingDialog", "jpg", nullptr));
        cb_filetype->setItemText(2, QApplication::translate("SettingDialog", "bmp", nullptr));

        l_folder->setText(QApplication::translate("SettingDialog", "Folder", nullptr));
        lb_filenameSample->setText(QString());
        l_filename_3->setText(QApplication::translate("SettingDialog", "File format", nullptr));
        cb_openDialog->setText(QApplication::translate("SettingDialog", "Open folder after saving screen shot", nullptr));
        l_filename_4->setText(QApplication::translate("SettingDialog", "Other", nullptr));
        gb_png_setting->setTitle(QApplication::translate("SettingDialog", "Setting for png", nullptr));
        cb_forcePngAlpha->setText(QApplication::translate("SettingDialog", "Clear image for Twitter", nullptr));
        cb_aggressivePngCompress->setText(QApplication::translate("SettingDialog", "Compress with PngQuant(need pngquant.exe)", nullptr));
        cb_drawArrow->setText(QApplication::translate("SettingDialog", "Draw arrow image on screen shot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingDialog: public Ui_SettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
