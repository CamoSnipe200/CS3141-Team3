/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *MainScreen;
    QGridLayout *gridLayout;
    QVBoxLayout *MS_VerticalLayout;
    QLabel *MS_LabelTitle;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *MS_HorizontalLayout;
    QPushButton *MS_AddButton;
    QPushButton *MS_ViewButton;
    QPushButton *MS_ShareButton;
    QWidget *AddScreen;
    QGridLayout *gridLayout_2;
    QVBoxLayout *AS_VerticalLayout;
    QHBoxLayout *AS_HeaderHL;
    QLabel *AS_LabelTitle;
    QSpacerItem *AS_hs;
    QPushButton *AS_MainMenuButton;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *AS_IngredientsHL;
    QPushButton *pushButton;
    QWidget *ViewScreen;
    QGridLayout *gridLayout_3;
    QVBoxLayout *VS_vl;
    QHBoxLayout *VS_HeaderHL;
    QLabel *VS_LabelTitle;
    QSpacerItem *VS_hs;
    QPushButton *VS_MainMenuButton;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *VS_Random;
    QPushButton *VS_EditButton;
    QWidget *ShareScreen;
    QGridLayout *gridLayout_5;
    QVBoxLayout *SS_vl;
    QHBoxLayout *SS_HeaderHL;
    QLabel *SS_LabelTitle;
    QSpacerItem *SS_hs;
    QPushButton *SS_MainMenuButton;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *SS_Random;
    QPushButton *SS_EditButton;
    QWidget *EditScreen;
    QGridLayout *gridLayout_4;
    QVBoxLayout *ES_vl;
    QHBoxLayout *ES_HeaderHL;
    QLabel *ES_LabelTitle;
    QSpacerItem *ES_hs;
    QPushButton *ES_BackToViewButton;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *ES_Random_2;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(810, 590);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 0, 700, 300));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(700, 300));
        MainScreen = new QWidget();
        MainScreen->setObjectName("MainScreen");
        gridLayout = new QGridLayout(MainScreen);
        gridLayout->setObjectName("gridLayout");
        MS_VerticalLayout = new QVBoxLayout();
        MS_VerticalLayout->setObjectName("MS_VerticalLayout");
        MS_LabelTitle = new QLabel(MainScreen);
        MS_LabelTitle->setObjectName("MS_LabelTitle");
        QFont font;
        font.setPointSize(28);
        MS_LabelTitle->setFont(font);

        MS_VerticalLayout->addWidget(MS_LabelTitle);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        MS_VerticalLayout->addItem(verticalSpacer);

        MS_HorizontalLayout = new QHBoxLayout();
        MS_HorizontalLayout->setSpacing(20);
        MS_HorizontalLayout->setObjectName("MS_HorizontalLayout");
        MS_HorizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        MS_HorizontalLayout->setContentsMargins(20, -1, 20, -1);
        MS_AddButton = new QPushButton(MainScreen);
        MS_AddButton->setObjectName("MS_AddButton");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(MS_AddButton->sizePolicy().hasHeightForWidth());
        MS_AddButton->setSizePolicy(sizePolicy1);
        MS_AddButton->setMinimumSize(QSize(0, 150));
        MS_AddButton->setMaximumSize(QSize(16777215, 150));
        QFont font1;
        font1.setBold(true);
        MS_AddButton->setFont(font1);

        MS_HorizontalLayout->addWidget(MS_AddButton);

        MS_ViewButton = new QPushButton(MainScreen);
        MS_ViewButton->setObjectName("MS_ViewButton");
        MS_ViewButton->setMinimumSize(QSize(0, 150));
        MS_ViewButton->setMaximumSize(QSize(16777215, 150));
        MS_ViewButton->setFont(font1);

        MS_HorizontalLayout->addWidget(MS_ViewButton);

        MS_ShareButton = new QPushButton(MainScreen);
        MS_ShareButton->setObjectName("MS_ShareButton");
        MS_ShareButton->setMinimumSize(QSize(0, 150));
        MS_ShareButton->setMaximumSize(QSize(16777215, 150));
        MS_ShareButton->setFont(font1);

        MS_HorizontalLayout->addWidget(MS_ShareButton);


        MS_VerticalLayout->addLayout(MS_HorizontalLayout);


        gridLayout->addLayout(MS_VerticalLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(MainScreen);
        AddScreen = new QWidget();
        AddScreen->setObjectName("AddScreen");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(AddScreen->sizePolicy().hasHeightForWidth());
        AddScreen->setSizePolicy(sizePolicy2);
        AddScreen->setMinimumSize(QSize(0, 0));
        AddScreen->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_2 = new QGridLayout(AddScreen);
        gridLayout_2->setObjectName("gridLayout_2");
        AS_VerticalLayout = new QVBoxLayout();
        AS_VerticalLayout->setObjectName("AS_VerticalLayout");
        AS_HeaderHL = new QHBoxLayout();
        AS_HeaderHL->setObjectName("AS_HeaderHL");
        AS_LabelTitle = new QLabel(AddScreen);
        AS_LabelTitle->setObjectName("AS_LabelTitle");
        AS_LabelTitle->setFont(font);

        AS_HeaderHL->addWidget(AS_LabelTitle);

        AS_hs = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        AS_HeaderHL->addItem(AS_hs);

        AS_MainMenuButton = new QPushButton(AddScreen);
        AS_MainMenuButton->setObjectName("AS_MainMenuButton");
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(AS_MainMenuButton->sizePolicy().hasHeightForWidth());
        AS_MainMenuButton->setSizePolicy(sizePolicy3);
        AS_MainMenuButton->setMinimumSize(QSize(150, 40));
        AS_MainMenuButton->setMaximumSize(QSize(200, 16777215));

        AS_HeaderHL->addWidget(AS_MainMenuButton);


        AS_VerticalLayout->addLayout(AS_HeaderHL);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        AS_VerticalLayout->addItem(verticalSpacer_2);

        AS_IngredientsHL = new QHBoxLayout();
        AS_IngredientsHL->setObjectName("AS_IngredientsHL");
        pushButton = new QPushButton(AddScreen);
        pushButton->setObjectName("pushButton");

        AS_IngredientsHL->addWidget(pushButton);


        AS_VerticalLayout->addLayout(AS_IngredientsHL);


        gridLayout_2->addLayout(AS_VerticalLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(AddScreen);
        ViewScreen = new QWidget();
        ViewScreen->setObjectName("ViewScreen");
        ViewScreen->setAutoFillBackground(false);
        gridLayout_3 = new QGridLayout(ViewScreen);
        gridLayout_3->setObjectName("gridLayout_3");
        VS_vl = new QVBoxLayout();
        VS_vl->setObjectName("VS_vl");
        VS_HeaderHL = new QHBoxLayout();
        VS_HeaderHL->setObjectName("VS_HeaderHL");
        VS_LabelTitle = new QLabel(ViewScreen);
        VS_LabelTitle->setObjectName("VS_LabelTitle");
        VS_LabelTitle->setFont(font);

        VS_HeaderHL->addWidget(VS_LabelTitle);

        VS_hs = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        VS_HeaderHL->addItem(VS_hs);

        VS_MainMenuButton = new QPushButton(ViewScreen);
        VS_MainMenuButton->setObjectName("VS_MainMenuButton");
        sizePolicy3.setHeightForWidth(VS_MainMenuButton->sizePolicy().hasHeightForWidth());
        VS_MainMenuButton->setSizePolicy(sizePolicy3);
        VS_MainMenuButton->setMinimumSize(QSize(150, 40));
        VS_MainMenuButton->setMaximumSize(QSize(200, 16777215));

        VS_HeaderHL->addWidget(VS_MainMenuButton);


        VS_vl->addLayout(VS_HeaderHL);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        VS_vl->addItem(verticalSpacer_7);

        VS_Random = new QHBoxLayout();
        VS_Random->setObjectName("VS_Random");
        VS_EditButton = new QPushButton(ViewScreen);
        VS_EditButton->setObjectName("VS_EditButton");

        VS_Random->addWidget(VS_EditButton);


        VS_vl->addLayout(VS_Random);


        gridLayout_3->addLayout(VS_vl, 0, 0, 1, 1);

        stackedWidget->addWidget(ViewScreen);
        ShareScreen = new QWidget();
        ShareScreen->setObjectName("ShareScreen");
        gridLayout_5 = new QGridLayout(ShareScreen);
        gridLayout_5->setObjectName("gridLayout_5");
        SS_vl = new QVBoxLayout();
        SS_vl->setObjectName("SS_vl");
        SS_HeaderHL = new QHBoxLayout();
        SS_HeaderHL->setObjectName("SS_HeaderHL");
        SS_LabelTitle = new QLabel(ShareScreen);
        SS_LabelTitle->setObjectName("SS_LabelTitle");
        SS_LabelTitle->setFont(font);

        SS_HeaderHL->addWidget(SS_LabelTitle);

        SS_hs = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        SS_HeaderHL->addItem(SS_hs);

        SS_MainMenuButton = new QPushButton(ShareScreen);
        SS_MainMenuButton->setObjectName("SS_MainMenuButton");
        sizePolicy3.setHeightForWidth(SS_MainMenuButton->sizePolicy().hasHeightForWidth());
        SS_MainMenuButton->setSizePolicy(sizePolicy3);
        SS_MainMenuButton->setMinimumSize(QSize(150, 40));
        SS_MainMenuButton->setMaximumSize(QSize(200, 16777215));

        SS_HeaderHL->addWidget(SS_MainMenuButton);


        SS_vl->addLayout(SS_HeaderHL);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        SS_vl->addItem(verticalSpacer_10);

        SS_Random = new QHBoxLayout();
        SS_Random->setObjectName("SS_Random");
        SS_EditButton = new QPushButton(ShareScreen);
        SS_EditButton->setObjectName("SS_EditButton");

        SS_Random->addWidget(SS_EditButton);


        SS_vl->addLayout(SS_Random);


        gridLayout_5->addLayout(SS_vl, 0, 0, 1, 1);

        stackedWidget->addWidget(ShareScreen);
        EditScreen = new QWidget();
        EditScreen->setObjectName("EditScreen");
        gridLayout_4 = new QGridLayout(EditScreen);
        gridLayout_4->setObjectName("gridLayout_4");
        ES_vl = new QVBoxLayout();
        ES_vl->setObjectName("ES_vl");
        ES_HeaderHL = new QHBoxLayout();
        ES_HeaderHL->setObjectName("ES_HeaderHL");
        ES_LabelTitle = new QLabel(EditScreen);
        ES_LabelTitle->setObjectName("ES_LabelTitle");
        ES_LabelTitle->setFont(font);

        ES_HeaderHL->addWidget(ES_LabelTitle);

        ES_hs = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ES_HeaderHL->addItem(ES_hs);

        ES_BackToViewButton = new QPushButton(EditScreen);
        ES_BackToViewButton->setObjectName("ES_BackToViewButton");
        sizePolicy3.setHeightForWidth(ES_BackToViewButton->sizePolicy().hasHeightForWidth());
        ES_BackToViewButton->setSizePolicy(sizePolicy3);
        ES_BackToViewButton->setMinimumSize(QSize(150, 40));
        ES_BackToViewButton->setMaximumSize(QSize(200, 16777215));

        ES_HeaderHL->addWidget(ES_BackToViewButton);


        ES_vl->addLayout(ES_HeaderHL);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        ES_vl->addItem(verticalSpacer_8);

        ES_Random_2 = new QHBoxLayout();
        ES_Random_2->setObjectName("ES_Random_2");
        pushButton_5 = new QPushButton(EditScreen);
        pushButton_5->setObjectName("pushButton_5");

        ES_Random_2->addWidget(pushButton_5);


        ES_vl->addLayout(ES_Random_2);


        gridLayout_4->addLayout(ES_vl, 0, 0, 1, 1);

        stackedWidget->addWidget(EditScreen);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 810, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        MS_LabelTitle->setText(QCoreApplication::translate("MainWindow", "Half Measures - Recipe Keeper", nullptr));
        MS_AddButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        MS_ViewButton->setText(QCoreApplication::translate("MainWindow", "View", nullptr));
        MS_ShareButton->setText(QCoreApplication::translate("MainWindow", "Share", nullptr));
        AS_LabelTitle->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        AS_MainMenuButton->setText(QCoreApplication::translate("MainWindow", "Back to Main Menu", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        VS_LabelTitle->setText(QCoreApplication::translate("MainWindow", "View", nullptr));
        VS_MainMenuButton->setText(QCoreApplication::translate("MainWindow", "Back to Main Menu", nullptr));
        VS_EditButton->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        SS_LabelTitle->setText(QCoreApplication::translate("MainWindow", "Share", nullptr));
        SS_MainMenuButton->setText(QCoreApplication::translate("MainWindow", "Back to Main Menu", nullptr));
        SS_EditButton->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        ES_LabelTitle->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        ES_BackToViewButton->setText(QCoreApplication::translate("MainWindow", "Back to View", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
