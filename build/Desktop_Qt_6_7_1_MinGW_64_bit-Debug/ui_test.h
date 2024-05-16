/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *image;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Test)
    {
        if (Test->objectName().isEmpty())
            Test->setObjectName("Test");
        Test->resize(800, 600);
        centralwidget = new QWidget(Test);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Poppins")});
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        image = new QLabel(centralwidget);
        image->setObjectName("image");
        image->setStyleSheet(QString::fromUtf8(""));
        image->setScaledContents(false);
        image->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(image);


        verticalLayout_2->addLayout(verticalLayout);

        Test->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Test);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Test->setMenuBar(menubar);
        statusbar = new QStatusBar(Test);
        statusbar->setObjectName("statusbar");
        Test->setStatusBar(statusbar);

        retranslateUi(Test);

        QMetaObject::connectSlotsByName(Test);
    } // setupUi

    void retranslateUi(QMainWindow *Test)
    {
        Test->setWindowTitle(QCoreApplication::translate("Test", "Test", nullptr));
        label->setText(QCoreApplication::translate("Test", "Hello, I am Jesreal", nullptr));
        image->setText(QCoreApplication::translate("Test", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test: public Ui_Test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
