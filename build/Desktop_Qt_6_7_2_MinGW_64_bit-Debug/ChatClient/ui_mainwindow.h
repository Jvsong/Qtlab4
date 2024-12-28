/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *titleLabel;
    QStackedWidget *stackedWidget;
    QWidget *chatPage;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *roomTextEdit;
    QListWidget *userListWidget;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *sayLineEdit;
    QGridLayout *gridLayout_6;
    QPushButton *logoutButton;
    QPushButton *sayButton;
    QWidget *loginPage;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *serverEdit;
    QLabel *label_3;
    QLineEdit *usernameEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(610, 504);
        MainWindow->setStyleSheet(QString::fromUtf8("/* \344\270\273\347\252\227\345\217\243\350\203\214\346\231\257\346\240\267\345\274\217 */\n"
"QMainWindow {\n"
"    background-color: #f4f4f4;\n"
"}\n"
"\n"
"/* \346\240\207\351\242\230\346\240\267\345\274\217 */\n"
"QLabel#titleLabel {\n"
"    color: #4a90e2;\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"    border: 1px solid #d6d6d6;\n"
"    border-radius: 5px;\n"
"    background-color: #ffffff;\n"
"    text-align: center;\n"
"}\n"
"\n"
"/* \350\276\223\345\205\245\346\241\206\346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    font-size: 16px;\n"
"    padding: 5px;\n"
"    border: 1px solid #d6d6d6;\n"
"    border-radius: 5px;\n"
"    background-color: #ffffff;\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton#loginButton {\n"
"    font-size: 16px;\n"
"    color: #ffffff;\n"
"    background-color: #4a90e2;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 10px 20px;\n"
"}\n"
"QPushButton#loginButton:hover {\n"
"    backgro"
                        "und-color: #357abd;\n"
"}\n"
"QPushButton#loginButton:pressed {\n"
"    background-color: #2c5c94;\n"
"}\n"
"\n"
"/* QFrame \346\240\267\345\274\217 */\n"
"QFrame {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #d6d6d6;\n"
"    border-radius: 10px;\n"
"    padding: 20px;\n"
"}\n"
"\n"
"/* QStackedWidget \346\240\267\345\274\217 */\n"
"QStackedWidget {\n"
"    border: none;\n"
"    background-color: transparent;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(titleLabel, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        chatPage = new QWidget();
        chatPage->setObjectName("chatPage");
        gridLayout_7 = new QGridLayout(chatPage);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setHorizontalSpacing(0);
        gridLayout_7->setVerticalSpacing(6);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        roomTextEdit = new QTextEdit(chatPage);
        roomTextEdit->setObjectName("roomTextEdit");

        horizontalLayout_4->addWidget(roomTextEdit);

        userListWidget = new QListWidget(chatPage);
        userListWidget->setObjectName("userListWidget");
        userListWidget->setMinimumSize(QSize(0, 0));
        userListWidget->setMaximumSize(QSize(100, 10000));

        horizontalLayout_4->addWidget(userListWidget);


        gridLayout_7->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        sayLineEdit = new QLineEdit(chatPage);
        sayLineEdit->setObjectName("sayLineEdit");

        horizontalLayout_3->addWidget(sayLineEdit);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName("gridLayout_6");
        logoutButton = new QPushButton(chatPage);
        logoutButton->setObjectName("logoutButton");

        gridLayout_6->addWidget(logoutButton, 0, 1, 1, 1);

        sayButton = new QPushButton(chatPage);
        sayButton->setObjectName("sayButton");

        gridLayout_6->addWidget(sayButton, 0, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_6);


        gridLayout_7->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        stackedWidget->addWidget(chatPage);
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        gridLayout_4 = new QGridLayout(loginPage);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalSpacer_2 = new QSpacerItem(94, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        frame = new QFrame(loginPage);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(20, 20, 20, 20);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        serverEdit = new QLineEdit(frame);
        serverEdit->setObjectName("serverEdit");

        gridLayout_2->addWidget(serverEdit, 0, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        usernameEdit = new QLineEdit(frame);
        usernameEdit->setObjectName("usernameEdit");

        gridLayout_2->addWidget(usernameEdit, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        loginButton = new QPushButton(frame);
        loginButton->setObjectName("loginButton");

        gridLayout_3->addWidget(loginButton, 2, 0, 1, 1);


        gridLayout_4->addWidget(frame, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(94, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 54, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 54, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 2, 1, 1, 1);

        stackedWidget->addWidget(loginPage);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "\345\256\213\344\275\263\344\274\237\347\232\204\350\201\212\345\244\251\345\256\244", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        sayButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", nullptr));
        serverEdit->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\230\265\347\247\260", nullptr));
        usernameEdit->setText(QCoreApplication::translate("MainWindow", "song", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225\350\201\212\345\244\251\345\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
