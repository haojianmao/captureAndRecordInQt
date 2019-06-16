/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *b_screenshot;
    QPushButton *b_timer;
    QPushButton *b_setting;
    QPushButton *b_exit;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(161, 32);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	font-family : Tahoma;\n"
"    min-height: 20px;\n"
"}\n"
"QWidget#widget{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border : 1px solid gray;\n"
"}\n"
"#b_exit, #b_screenshot, #b_setting, #b_timer {\n"
"    border: none;\n"
"}\n"
"#b_exit:hover, #b_screenshot:hover, #b_setting:hover, #b_timer:hover {\n"
"    background-color: #eeeeee;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 1, 1, 1);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(22, 20));
        label->setMaximumSize(QSize(16777215, 16777215));
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setStyleSheet(QString::fromUtf8(":hover {\n"
"	image: url(:/new/icon/resource/handle.png);\n"
"    background-color: #eeeeee;\n"
"}"));
        label->setPixmap(QPixmap(QString::fromUtf8("resource/handle.png")));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        b_screenshot = new QPushButton(widget);
        b_screenshot->setObjectName(QString::fromUtf8("b_screenshot"));
        sizePolicy.setHeightForWidth(b_screenshot->sizePolicy().hasHeightForWidth());
        b_screenshot->setSizePolicy(sizePolicy);
        b_screenshot->setMinimumSize(QSize(0, 20));
        b_screenshot->setMaximumSize(QSize(16777215, 16777215));
        b_screenshot->setStyleSheet(QString::fromUtf8("image: url(:/new/icon/resource/camera.png);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("resource/camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_screenshot->setIcon(icon);
        b_screenshot->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(b_screenshot);

        b_timer = new QPushButton(widget);
        b_timer->setObjectName(QString::fromUtf8("b_timer"));
        sizePolicy.setHeightForWidth(b_timer->sizePolicy().hasHeightForWidth());
        b_timer->setSizePolicy(sizePolicy);
        b_timer->setMinimumSize(QSize(0, 20));
        b_timer->setMaximumSize(QSize(16777215, 16777215));
        b_timer->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/new/icon/resource/timer.png);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("resource/timer.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_timer->setIcon(icon1);
        b_timer->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(b_timer);

        b_setting = new QPushButton(widget);
        b_setting->setObjectName(QString::fromUtf8("b_setting"));
        sizePolicy.setHeightForWidth(b_setting->sizePolicy().hasHeightForWidth());
        b_setting->setSizePolicy(sizePolicy);
        b_setting->setMinimumSize(QSize(0, 20));
        b_setting->setMaximumSize(QSize(16777215, 16777215));
        b_setting->setStyleSheet(QString::fromUtf8("image: url(:/new/icon/resource/settings.png);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("resource/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_setting->setIcon(icon2);

        horizontalLayout->addWidget(b_setting);

        b_exit = new QPushButton(widget);
        b_exit->setObjectName(QString::fromUtf8("b_exit"));
        sizePolicy.setHeightForWidth(b_exit->sizePolicy().hasHeightForWidth());
        b_exit->setSizePolicy(sizePolicy);
        b_exit->setMinimumSize(QSize(0, 20));
        b_exit->setMaximumSize(QSize(16777215, 16777215));
        b_exit->setStyleSheet(QString::fromUtf8("image: url(:/new/icon/resource/door_out.png);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("resource/door_out.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_exit->setIcon(icon3);

        horizontalLayout->addWidget(b_exit);

        horizontalSpacer_2 = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);

        horizontalLayout_2->addWidget(widget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QCodScreenShot", nullptr));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("MainWindow", "Drag to move window", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QString());
        b_screenshot->setText(QString());
        b_timer->setText(QString());
        b_setting->setText(QString());
        b_exit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
