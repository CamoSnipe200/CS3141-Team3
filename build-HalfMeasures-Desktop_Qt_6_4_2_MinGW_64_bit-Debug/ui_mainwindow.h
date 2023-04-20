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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
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
    QPushButton *MS_EditButton;
    QWidget *AddScreen;
    QGridLayout *gridLayout_2;
    QVBoxLayout *AS_VerticalLayout;
    QHBoxLayout *AS_HeaderHL;
    QLabel *AS_LabelTitle;
    QSpacerItem *AS_hs;
    QPushButton *AS_MainMenuButton;
    QVBoxLayout *AS_RecipeNameVL;
    QLineEdit *AS_RecipeNameLE;
    QScrollArea *AS_ScrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *AS_DescriptionVL;
    QLabel *AS_InstructionsLabel;
    QTextEdit *AS_InstructionsTE;
    QHBoxLayout *AS_IngredientsHL;
    QPushButton *AS_AddIngredientButton;
    QPushButton *AS_SubmitButton;
    QWidget *ViewScreen;
    QGridLayout *gridLayout_3;
    QVBoxLayout *VS_vl;
    QHBoxLayout *VS_HeaderHL;
    QLabel *VS_LabelTitle;
    QSpacerItem *VS_hs;
    QPushButton *VS_MainMenuButton;
    QVBoxLayout *AS_ViewportVL;
    QTextEdit *AS_RecipeTextEdit;
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
    QPushButton *ES_MainMenuButton;
    QVBoxLayout *ES_DescriptionVL;
    QVBoxLayout *ES_RecipeNameVL;
    QLineEdit *ES_RecipeNameLE;
    QScrollArea *ES_ScrollArea;
    QWidget *ES_ScrollAreaWidgetContents;
    QLabel *ES_InstructionsLabel;
    QTextEdit *ES_InstructionsTE;
    QHBoxLayout *ES_IngredientsHL;
    QPushButton *ES_AddIngredientButton;
    QPushButton *ES_SubmitButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(810, 590);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 500));
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 0, 700, 300));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setMinimumSize(QSize(700, 300));
        MainScreen = new QWidget();
        MainScreen->setObjectName("MainScreen");
        gridLayout = new QGridLayout(MainScreen);
        gridLayout->setObjectName("gridLayout");
        MS_VerticalLayout = new QVBoxLayout();
        MS_VerticalLayout->setObjectName("MS_VerticalLayout");
        MS_LabelTitle = new QLabel(MainScreen);
        MS_LabelTitle->setObjectName("MS_LabelTitle");
        QFont font1;
        font1.setPointSize(28);
        MS_LabelTitle->setFont(font1);

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
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(MS_AddButton->sizePolicy().hasHeightForWidth());
        MS_AddButton->setSizePolicy(sizePolicy2);
        MS_AddButton->setMinimumSize(QSize(0, 150));
        MS_AddButton->setMaximumSize(QSize(16777215, 150));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        MS_AddButton->setFont(font2);
        MS_AddButton->setCursor(QCursor(Qt::PointingHandCursor));

        MS_HorizontalLayout->addWidget(MS_AddButton);

        MS_ViewButton = new QPushButton(MainScreen);
        MS_ViewButton->setObjectName("MS_ViewButton");
        MS_ViewButton->setMinimumSize(QSize(0, 150));
        MS_ViewButton->setMaximumSize(QSize(16777215, 150));
        MS_ViewButton->setFont(font2);
        MS_ViewButton->setCursor(QCursor(Qt::PointingHandCursor));

        MS_HorizontalLayout->addWidget(MS_ViewButton);

        MS_EditButton = new QPushButton(MainScreen);
        MS_EditButton->setObjectName("MS_EditButton");
        MS_EditButton->setMinimumSize(QSize(0, 150));
        MS_EditButton->setMaximumSize(QSize(16777215, 150));
        MS_EditButton->setFont(font2);
        MS_EditButton->setCursor(QCursor(Qt::PointingHandCursor));

        MS_HorizontalLayout->addWidget(MS_EditButton);


        MS_VerticalLayout->addLayout(MS_HorizontalLayout);


        gridLayout->addLayout(MS_VerticalLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(MainScreen);
        AddScreen = new QWidget();
        AddScreen->setObjectName("AddScreen");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(AddScreen->sizePolicy().hasHeightForWidth());
        AddScreen->setSizePolicy(sizePolicy3);
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
        AS_LabelTitle->setFont(font1);

        AS_HeaderHL->addWidget(AS_LabelTitle);

        AS_hs = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        AS_HeaderHL->addItem(AS_hs);

        AS_MainMenuButton = new QPushButton(AddScreen);
        AS_MainMenuButton->setObjectName("AS_MainMenuButton");
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(AS_MainMenuButton->sizePolicy().hasHeightForWidth());
        AS_MainMenuButton->setSizePolicy(sizePolicy4);
        AS_MainMenuButton->setMinimumSize(QSize(150, 40));
        AS_MainMenuButton->setMaximumSize(QSize(200, 16777215));
        AS_MainMenuButton->setCursor(QCursor(Qt::PointingHandCursor));

        AS_HeaderHL->addWidget(AS_MainMenuButton);


        AS_VerticalLayout->addLayout(AS_HeaderHL);

        AS_RecipeNameVL = new QVBoxLayout();
        AS_RecipeNameVL->setObjectName("AS_RecipeNameVL");
        AS_RecipeNameLE = new QLineEdit(AddScreen);
        AS_RecipeNameLE->setObjectName("AS_RecipeNameLE");
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(AS_RecipeNameLE->sizePolicy().hasHeightForWidth());
        AS_RecipeNameLE->setSizePolicy(sizePolicy5);
        AS_RecipeNameLE->setMinimumSize(QSize(600, 50));
        QFont font3;
        font3.setPointSize(16);
        AS_RecipeNameLE->setFont(font3);

        AS_RecipeNameVL->addWidget(AS_RecipeNameLE);


        AS_VerticalLayout->addLayout(AS_RecipeNameVL);

        AS_ScrollArea = new QScrollArea(AddScreen);
        AS_ScrollArea->setObjectName("AS_ScrollArea");
        AS_ScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 678, 16));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_2->setSizePolicy(sizePolicy);
        AS_ScrollArea->setWidget(scrollAreaWidgetContents_2);

        AS_VerticalLayout->addWidget(AS_ScrollArea);

        AS_DescriptionVL = new QVBoxLayout();
        AS_DescriptionVL->setObjectName("AS_DescriptionVL");
        AS_InstructionsLabel = new QLabel(AddScreen);
        AS_InstructionsLabel->setObjectName("AS_InstructionsLabel");

        AS_DescriptionVL->addWidget(AS_InstructionsLabel);

        AS_InstructionsTE = new QTextEdit(AddScreen);
        AS_InstructionsTE->setObjectName("AS_InstructionsTE");
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(AS_InstructionsTE->sizePolicy().hasHeightForWidth());
        AS_InstructionsTE->setSizePolicy(sizePolicy6);
        AS_InstructionsTE->setMinimumSize(QSize(0, 100));
        AS_InstructionsTE->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));

        AS_DescriptionVL->addWidget(AS_InstructionsTE);


        AS_VerticalLayout->addLayout(AS_DescriptionVL);

        AS_IngredientsHL = new QHBoxLayout();
        AS_IngredientsHL->setObjectName("AS_IngredientsHL");
        AS_AddIngredientButton = new QPushButton(AddScreen);
        AS_AddIngredientButton->setObjectName("AS_AddIngredientButton");
        sizePolicy4.setHeightForWidth(AS_AddIngredientButton->sizePolicy().hasHeightForWidth());
        AS_AddIngredientButton->setSizePolicy(sizePolicy4);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 127));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush6(QColor(240, 240, 240, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        QBrush brush7(QColor(227, 227, 227, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        QBrush brush8(QColor(160, 160, 160, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        QBrush brush9(QColor(105, 105, 105, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush9);
        QBrush brush10(QColor(245, 245, 245, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        AS_AddIngredientButton->setPalette(palette);
        AS_AddIngredientButton->setCursor(QCursor(Qt::PointingHandCursor));

        AS_IngredientsHL->addWidget(AS_AddIngredientButton);

        AS_SubmitButton = new QPushButton(AddScreen);
        AS_SubmitButton->setObjectName("AS_SubmitButton");
        AS_SubmitButton->setCursor(QCursor(Qt::PointingHandCursor));

        AS_IngredientsHL->addWidget(AS_SubmitButton);


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
        VS_LabelTitle->setFont(font1);

        VS_HeaderHL->addWidget(VS_LabelTitle);

        VS_hs = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        VS_HeaderHL->addItem(VS_hs);

        VS_MainMenuButton = new QPushButton(ViewScreen);
        VS_MainMenuButton->setObjectName("VS_MainMenuButton");
        sizePolicy4.setHeightForWidth(VS_MainMenuButton->sizePolicy().hasHeightForWidth());
        VS_MainMenuButton->setSizePolicy(sizePolicy4);
        VS_MainMenuButton->setMinimumSize(QSize(150, 40));
        VS_MainMenuButton->setMaximumSize(QSize(200, 16777215));
        VS_MainMenuButton->setCursor(QCursor(Qt::PointingHandCursor));

        VS_HeaderHL->addWidget(VS_MainMenuButton);


        VS_vl->addLayout(VS_HeaderHL);

        AS_ViewportVL = new QVBoxLayout();
        AS_ViewportVL->setObjectName("AS_ViewportVL");
        AS_RecipeTextEdit = new QTextEdit(ViewScreen);
        AS_RecipeTextEdit->setObjectName("AS_RecipeTextEdit");

        AS_ViewportVL->addWidget(AS_RecipeTextEdit);


        VS_vl->addLayout(AS_ViewportVL);


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
        SS_LabelTitle->setFont(font1);

        SS_HeaderHL->addWidget(SS_LabelTitle);

        SS_hs = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        SS_HeaderHL->addItem(SS_hs);

        SS_MainMenuButton = new QPushButton(ShareScreen);
        SS_MainMenuButton->setObjectName("SS_MainMenuButton");
        sizePolicy4.setHeightForWidth(SS_MainMenuButton->sizePolicy().hasHeightForWidth());
        SS_MainMenuButton->setSizePolicy(sizePolicy4);
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
        ES_LabelTitle->setFont(font1);

        ES_HeaderHL->addWidget(ES_LabelTitle);

        ES_hs = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ES_HeaderHL->addItem(ES_hs);

        ES_MainMenuButton = new QPushButton(EditScreen);
        ES_MainMenuButton->setObjectName("ES_MainMenuButton");
        sizePolicy4.setHeightForWidth(ES_MainMenuButton->sizePolicy().hasHeightForWidth());
        ES_MainMenuButton->setSizePolicy(sizePolicy4);
        ES_MainMenuButton->setMinimumSize(QSize(150, 40));
        ES_MainMenuButton->setMaximumSize(QSize(200, 16777215));
        ES_MainMenuButton->setCursor(QCursor(Qt::PointingHandCursor));

        ES_HeaderHL->addWidget(ES_MainMenuButton);


        ES_vl->addLayout(ES_HeaderHL);

        ES_DescriptionVL = new QVBoxLayout();
        ES_DescriptionVL->setObjectName("ES_DescriptionVL");
        ES_RecipeNameVL = new QVBoxLayout();
        ES_RecipeNameVL->setObjectName("ES_RecipeNameVL");
        ES_RecipeNameLE = new QLineEdit(EditScreen);
        ES_RecipeNameLE->setObjectName("ES_RecipeNameLE");
        sizePolicy5.setHeightForWidth(ES_RecipeNameLE->sizePolicy().hasHeightForWidth());
        ES_RecipeNameLE->setSizePolicy(sizePolicy5);
        ES_RecipeNameLE->setMinimumSize(QSize(600, 50));
        ES_RecipeNameLE->setFont(font3);

        ES_RecipeNameVL->addWidget(ES_RecipeNameLE);

        ES_ScrollArea = new QScrollArea(EditScreen);
        ES_ScrollArea->setObjectName("ES_ScrollArea");
        ES_ScrollArea->setWidgetResizable(true);
        ES_ScrollAreaWidgetContents = new QWidget();
        ES_ScrollAreaWidgetContents->setObjectName("ES_ScrollAreaWidgetContents");
        ES_ScrollAreaWidgetContents->setGeometry(QRect(0, 0, 98, 16));
        sizePolicy.setHeightForWidth(ES_ScrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        ES_ScrollAreaWidgetContents->setSizePolicy(sizePolicy);
        ES_ScrollArea->setWidget(ES_ScrollAreaWidgetContents);

        ES_RecipeNameVL->addWidget(ES_ScrollArea);


        ES_DescriptionVL->addLayout(ES_RecipeNameVL);

        ES_InstructionsLabel = new QLabel(EditScreen);
        ES_InstructionsLabel->setObjectName("ES_InstructionsLabel");

        ES_DescriptionVL->addWidget(ES_InstructionsLabel);

        ES_InstructionsTE = new QTextEdit(EditScreen);
        ES_InstructionsTE->setObjectName("ES_InstructionsTE");
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(ES_InstructionsTE->sizePolicy().hasHeightForWidth());
        ES_InstructionsTE->setSizePolicy(sizePolicy7);
        ES_InstructionsTE->setMinimumSize(QSize(0, 100));
        ES_InstructionsTE->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));

        ES_DescriptionVL->addWidget(ES_InstructionsTE);

        ES_IngredientsHL = new QHBoxLayout();
        ES_IngredientsHL->setObjectName("ES_IngredientsHL");
        ES_AddIngredientButton = new QPushButton(EditScreen);
        ES_AddIngredientButton->setObjectName("ES_AddIngredientButton");
        sizePolicy4.setHeightForWidth(ES_AddIngredientButton->sizePolicy().hasHeightForWidth());
        ES_AddIngredientButton->setSizePolicy(sizePolicy4);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        ES_AddIngredientButton->setPalette(palette1);
        ES_AddIngredientButton->setCursor(QCursor(Qt::PointingHandCursor));

        ES_IngredientsHL->addWidget(ES_AddIngredientButton);

        ES_SubmitButton = new QPushButton(EditScreen);
        ES_SubmitButton->setObjectName("ES_SubmitButton");
        ES_SubmitButton->setCursor(QCursor(Qt::PointingHandCursor));

        ES_IngredientsHL->addWidget(ES_SubmitButton);


        ES_DescriptionVL->addLayout(ES_IngredientsHL);


        ES_vl->addLayout(ES_DescriptionVL);


        gridLayout_4->addLayout(ES_vl, 0, 0, 1, 1);

        stackedWidget->addWidget(EditScreen);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 810, 27));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addSeparator();

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MS_LabelTitle->setText(QCoreApplication::translate("MainWindow", "Half Measures - Recipe Keeper", nullptr));
        MS_AddButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        MS_ViewButton->setText(QCoreApplication::translate("MainWindow", "View", nullptr));
        MS_EditButton->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        AS_LabelTitle->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        AS_MainMenuButton->setText(QCoreApplication::translate("MainWindow", "Back to Main Menu", nullptr));
        AS_InstructionsLabel->setText(QCoreApplication::translate("MainWindow", "Instructions", nullptr));
        AS_AddIngredientButton->setText(QCoreApplication::translate("MainWindow", "Add Ingredient", nullptr));
        AS_SubmitButton->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        VS_LabelTitle->setText(QCoreApplication::translate("MainWindow", "View", nullptr));
        VS_MainMenuButton->setText(QCoreApplication::translate("MainWindow", "Back to Main Menu", nullptr));
        SS_LabelTitle->setText(QCoreApplication::translate("MainWindow", "Share", nullptr));
        SS_MainMenuButton->setText(QCoreApplication::translate("MainWindow", "Back to Main Menu", nullptr));
        SS_EditButton->setText(QCoreApplication::translate("MainWindow", "Push Button", nullptr));
        ES_LabelTitle->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        ES_MainMenuButton->setText(QCoreApplication::translate("MainWindow", "Main Menu", nullptr));
        ES_InstructionsLabel->setText(QCoreApplication::translate("MainWindow", "Instructions", nullptr));
        ES_AddIngredientButton->setText(QCoreApplication::translate("MainWindow", "Add Ingredient", nullptr));
        ES_SubmitButton->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
