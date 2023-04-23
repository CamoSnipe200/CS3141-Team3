#include "mainwindow.h"
#include <QStackedWidget>
#include <QFile>
#include <QTextStream>
#include <QApplication>
#include <QPrinter>
#include <QTextDocument>
#include <QFileDialog>
#include "ingredientwidget.h"
#include "./ui_mainwindow.h"
#include "./storageInterface.cpp"
#include <vector>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->stackedWidget);
    ui->stackedWidget->setCurrentIndex(0); // Setup the stacked widget
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    currentFile.clear();
}

// Deprecated. Not used
void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(fileName);
    currentFile = fileName;
    if(!file.open(QIODevice::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning", "Cannot open file : " + file.errorString());
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    file.close();
}

// Setup add window scroll area and change index
void MainWindow::on_MS_AddButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

    QWidget *container = new QWidget;
    ui->AS_ScrollArea->setWidget(container);
    QVBoxLayout *lay = new QVBoxLayout(container); // You really need a layout
    IngredientWidget* newIngredient = new IngredientWidget(this);
    lay->addWidget(newIngredient);

    ui->AS_RecipeNameLE->setPlaceholderText("Enter Recipe Name");
}


void MainWindow::on_AS_MainMenuButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_AS_MainMenuButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_MS_ViewButton_clicked()
{
    // Read and format recipe contents from file as a string
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open File", "", "Recipe files (*.recipe)");
    Recipe recipe = readRecipeFromFile(filePath.toStdString());
    std::string formattedRecipeContents = recipeToString(recipe);
    cout << formattedRecipeContents << std::endl;

    // Convert string to QString for use in RecipeTextEdit viewing window
    QString fileContents = QString::fromStdString(formattedRecipeContents);

    ui->stackedWidget->setCurrentIndex(2);
    ui->AS_RecipeTextEdit->setPlainText(fileContents);
    ui->AS_RecipeTextEdit->setReadOnly(true);
    ui->AS_RecipeTextEdit->show();
}


void MainWindow::on_VS_MainMenuButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_SS_MainMenuButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_AS_AddIngredientButton_clicked()
{
    // Add an ingredient to the scroll area
    IngredientWidget* newIngredient = new IngredientWidget(this);
    ui->AS_ScrollArea->widget()->layout()->addWidget(newIngredient);
}

void MainWindow::on_AS_SubmitButton_clicked()
{
    Recipe recipe;

    // Get the recipe name and instructions from the UI
    QString recipeName = ui->AS_RecipeNameLE->text();
    QString instructions = ui->AS_InstructionsTE->toPlainText();

    // Convert QString to standard cpp string
    recipe.name = recipeName.toStdString();
    recipe.cookTime;
    recipe.ingredients;
    std:string instructionsStd = instructions.toStdString();
    recipe.instructions.push_back({instructionsStd});

    // Write the ingredient data to the file
    for (int i = 0; i < ui->AS_ScrollArea->widget()->layout()->count(); i++) {
        IngredientWidget* ingredientWidget = qobject_cast<IngredientWidget*>(ui->AS_ScrollArea->widget()->layout()->itemAt(i)->widget());
        if (ingredientWidget != nullptr) {
            QString ingredientName = ingredientWidget->m_ingredientNameLineEdit->text();
            double ingredientAmount = ingredientWidget->m_quantitySpinBox->value();
            QString ingredientUnit = ingredientWidget->m_measurementTypeComboBox->currentText();

            // Convert QString and double to strings for Recipe struct
            std::string ingredientNameStd = ingredientName.toStdString();
            std::string ingredientAmountStd = std::to_string(ingredientAmount);
            recipe.ingredients.push_back({ingredientNameStd, ingredientAmountStd});
        }
    }

    writeRecipeToFile(recipe);
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_AS_OpenRecipeButton_clicked()
{

    // Open a file dialog to select a recipe file
    QString filePath = QFileDialog::getOpenFileName(this, tr("Open Recipe File"), "", tr("Text Files (*.txt);;All Files (*)"));
    if (filePath.isEmpty()) {
        return;  // User cancelled the file dialog
    }

    // Read the contents of the selected file
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, tr("Error"), tr("Could not open file %1 for reading.").arg(filePath));
        return;
    }

    // Open flie to read
    QTextStream in(&file);
    QString fileContents = in.readAll();
    file.close();

    // Display the file contents in a QPlainTextEdit widget
    ui->AS_RecipeTextEdit->setPlainText(fileContents);
    ui->AS_RecipeTextEdit->setReadOnly(true);
    ui->AS_RecipeTextEdit->show();
}


void MainWindow::on_ES_SubmitButton_clicked()
{
    Recipe recipe;

    // Get the recipe name and instructions from the UI
    QString recipeName = ui->ES_RecipeNameLE->text();
    QString instructions = ui->ES_InstructionsTE->toPlainText();

    // Convert QString to standard cpp string
    recipe.name = recipeName.toStdString();
    recipe.cookTime;
    recipe.ingredients;
    std::string instructionsStd = instructions.toStdString();
    recipe.instructions.push_back({instructionsStd});

    // Write the ingredient data to the file
    for (int i = 0; i < ui->ES_ScrollArea->widget()->layout()->count(); i++) {
        IngredientWidget* ingredientWidget = qobject_cast<IngredientWidget*>(ui->ES_ScrollArea->widget()->layout()->itemAt(i)->widget());
        if (ingredientWidget != nullptr) {
            QString ingredientName = ingredientWidget->m_ingredientNameLineEdit->text();
            double ingredientAmount = ingredientWidget->m_quantitySpinBox->value();
            QString ingredientUnit = ingredientWidget->m_measurementTypeComboBox->currentText();

            // Convert QString and double to strings for Recipe struct
            std::string ingredientNameStd = ingredientName.toStdString();
            std::string ingredientAmountStd = std::to_string(ingredientAmount);
            recipe.ingredients.push_back({ingredientNameStd, ingredientAmountStd});
        }
    }

    writeRecipeToFile(recipe);
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_ES_AddIngredientButton_clicked()
{
    IngredientWidget* newIngredient = new IngredientWidget(this);
    ui->ES_ScrollArea->widget()->layout()->addWidget(newIngredient);
}


void MainWindow::on_MS_EditButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open File", "", "Recipe files (*.recipe)");
    Recipe recipe = readRecipeFromFile(filePath.toStdString());

    // Set the current index of the stacked widget to the recipe editor page
    ui->stackedWidget->setCurrentIndex(4);

    // Create a new widget to contain the list of ingredients
    QWidget *container = new QWidget;
    ui->ES_ScrollArea->setWidget(container);
    QVBoxLayout *lay = new QVBoxLayout(container);

    // Set the placeholder text for the recipe name line edit
    ui->ES_RecipeNameLE->setPlaceholderText("Enter Recipe Name");

    // Create a list of available measurement types
    QStringList measurementTypes = {"-", "teaspoon", "tablespoon", "fluid ounce", "cup", "pint", "quart", "gallon", "ounce", "pound", "can"};

    // If the line starts with "Recipe Name:", set the text of the recipe name line edit to the name of the recipe
    ui->ES_RecipeNameLE->setText(QString::fromStdString(recipe.name));

    // If the line starts with "Instructions:", read the instructions until the next section starts
    for (int i = 0; i<recipe.instructions.size(); i++)
    {
        ui->ES_InstructionsTE->setPlainText(QString::fromStdString(recipe.instructions[i]));
    }

    // If the line starts with "Ingredients:", read each ingredient and create a new ingredient widget
    for (int i = 0; i<recipe.ingredients.size(); i++)
    {
        IngredientWidget* newIngredient = new IngredientWidget(this);
        newIngredient->m_ingredientNameLineEdit->setText(QString::fromStdString(recipe.ingredients[i].first));
        newIngredient->m_quantitySpinBox->setValue(stod(recipe.ingredients[i].second));

        // Set the measurement type combo box to the index of the measurement type in the list
        int index = 1;
        if (index >= 0) {
            newIngredient->m_measurementTypeComboBox->setCurrentIndex(index);
        }

        // Add the new ingredient widget to the ingredient container layout
        lay->addWidget(newIngredient);

        // Read the next line to see if there are more ingredients to add
        lay->addWidget(newIngredient);
    }

    // set the widget as the scroll area's widget
    ui->ES_ScrollArea->setWidget(container);
}

void MainWindow::on_ES_MainMenuButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_MS_ShareButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open File", "", "Recipe files (*.recipe)");
    Recipe recipe = readRecipeFromFile(filePath.toStdString());
    QString formattedRecipeContents = QString::fromStdString(recipeToString(recipe));

    saveFormattedStringAsPdf(filePath, formattedRecipeContents);
}

void MainWindow::on_VS_EditButton_clicked()
{

}

void MainWindow::on_ES_BackToViewButton_clicked()
{

}

void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_AddScreen_customContextMenuRequested(const QPoint &pos)
{

}

