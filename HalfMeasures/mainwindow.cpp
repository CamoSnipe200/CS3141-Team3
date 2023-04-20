#include "mainwindow.h"
#include <QStackedWidget>
#include <QFile>
#include <QTextStream>
#include "ingredientwidget.h"
#include "./ui_mainwindow.h"

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
    ui->stackedWidget->setCurrentIndex(2);
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

    // Open file to read
    QTextStream in(&file);
    QString fileContents = in.readAll();
    file.close();

    // Display the file contents in a QPlainTextEdit widget
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

    // Get the recipe name and instructions from the UI
    QString recipeName = ui->AS_RecipeNameLE->text();
    QString instructions = ui->AS_InstructionsTE->toPlainText();

    // Create a QFile object to write the recipe data to a file
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), QDir::currentPath() + "/recipe.txt", tr("Text Files (*.txt)"));
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            // Write the recipe name and instructions to the file
            out << "Recipe Name: " << recipeName << "\n\n";
            out << "Instructions:\n" << instructions << "\n\n";
            out << "Ingredients:\n";

            // Write the ingredient data to the file
            for (int i = 0; i < ui->AS_ScrollArea->widget()->layout()->count(); i++) {
                IngredientWidget* ingredientWidget = qobject_cast<IngredientWidget*>(ui->AS_ScrollArea->widget()->layout()->itemAt(i)->widget());
                if (ingredientWidget != nullptr) {
                    QString ingredientName = ingredientWidget->m_ingredientNameLineEdit->text();
                    double ingredientAmount = ingredientWidget->m_quantitySpinBox->value();
                    QString ingredientUnit = ingredientWidget->m_measurementTypeComboBox->currentText();

                    out << ingredientName << ": " << ingredientAmount << " " << ingredientUnit << "\n";
                }
            }
            file.close();
        }
    }
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
    // Get the recipe name and instructions from the UI
    QString recipeName = ui->ES_RecipeNameLE->text();
    QString instructions = ui->ES_InstructionsTE->toPlainText();

    // Create a QFile object to write the recipe data to a file
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), QDir::currentPath() + "/recipe.txt", tr("Text Files (*.txt)"));
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            // Write the recipe name and instructions to the file
            out << "Recipe Name: " << recipeName << "\n\n";
            out << "Instructions:\n" << instructions << "\n\n";
            out << "Ingredients:\n";

            // Write the ingredient data to the file
            for (int i = 0; i < ui->ES_ScrollArea->widget()->layout()->count(); i++) {
                IngredientWidget* ingredientWidget = qobject_cast<IngredientWidget*>(ui->ES_ScrollArea->widget()->layout()->itemAt(i)->widget());
                if (ingredientWidget != nullptr) {
                    QString ingredientName = ingredientWidget->m_ingredientNameLineEdit->text();
                    double ingredientAmount = ingredientWidget->m_quantitySpinBox->value();
                    QString ingredientUnit = ingredientWidget->m_measurementTypeComboBox->currentText();

                    out << ingredientName << ": " << ingredientAmount << " " << ingredientUnit << "\n";
                }
            }
            file.close();
        }
    }
}


void MainWindow::on_ES_AddIngredientButton_clicked()
{
    IngredientWidget* newIngredient = new IngredientWidget(this);
    ui->ES_ScrollArea->widget()->layout()->addWidget(newIngredient);
}


void MainWindow::on_MS_EditButton_clicked()
{
    // Set the current index of the stacked widget to the recipe editor page
    ui->stackedWidget->setCurrentIndex(4);

    // Create a new widget to contain the list of ingredients
    QWidget *container = new QWidget;
    ui->ES_ScrollArea->setWidget(container);
    QVBoxLayout *lay = new QVBoxLayout(container);

    // Set the placeholder text for the recipe name line edit
    ui->ES_RecipeNameLE->setPlaceholderText("Enter Recipe Name");

    // Create a list of available measurement types
    QStringList measurementTypes = {"teaspoon", "tablespoon", "fluid ounce", "cup", "pint", "quart", "gallon", "ounce", "pound", "can"};

    // Prompt the user to select a recipe file
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Recipe File"), QString(), tr("Text Files (*.txt);;All Files (*)"));

    // If the user canceled the dialog, return
    if (fileName.isEmpty()) {
        return;
    }

    // Open the selected recipe file
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        // Error opening file
        return;
    }

    // Read the recipe file line by line
    QTextStream in(&file);
    QString line = in.readLine();
    while (!line.isNull())
    {
        // If the line starts with "Recipe Name:", set the text of the recipe name line edit to the name of the recipe
        if (line.startsWith("Recipe Name:"))
        {
            QString recipeName = line.mid(line.indexOf(":") + 1).trimmed();
            ui->ES_RecipeNameLE->setText(recipeName);
            line = in.readLine();
        }
        // If the line starts with "Instructions:", read the instructions until the next section starts
        else if (line.startsWith("Instructions:"))
        {
            QString instructions;
            line = in.readLine(); // read next line after "Instructions:"
            while (!line.startsWith("Ingredient"))
            {
                instructions += line + "\n";
                line = in.readLine();
            }
            ui->ES_InstructionsTE->setPlainText(instructions);
        }
        // If the line starts with "Ingredients:", read each ingredient and create a new ingredient widget
        else if (line.startsWith("Ingredients:"))
        {
            line = in.readLine();
            while(!line.isNull())
            {
                // Read the name, amount, and unit of the ingredient
                QString ingredientLine = line.trimmed(); // remove any leading/trailing whitespaces
                QString ingredientName = ingredientLine.left(ingredientLine.indexOf(":")).trimmed();
                double ingredientAmount = line.mid(line.indexOf(":") + 1).trimmed().split(' ').at(0).toDouble();
                QString ingredientUnit = line.mid(line.indexOf(":") + 1).trimmed().split(' ').mid(1).join(' ');

                // Create a new ingredient widget and set its properties based on the ingredient data
                IngredientWidget* newIngredient = new IngredientWidget(this);
                newIngredient->m_ingredientNameLineEdit->setText(ingredientName);
                newIngredient->m_quantitySpinBox->setValue(ingredientAmount);

                // Set the measurement type combo box to the index of the measurement type in the list
                int index = measurementTypes.indexOf(ingredientUnit);
                if (index >= 0) {
                    newIngredient->m_measurementTypeComboBox->setCurrentIndex(index);
                }

                // Add the new ingredient widget to the ingredient container layout
                lay->addWidget(newIngredient);

                // Read the next line to see if there are more ingredients to add
                lay->addWidget(newIngredient);

                // read next line after the ingredient widget
                line = in.readLine();
            }

            // set the widget as the scroll area's widget
            ui->ES_ScrollArea->setWidget(container);
        }
        else
        {
            // ignore any other lines
            line = in.readLine();
        }
    }

    // close the file
    file.close();
}

void MainWindow::on_ES_MainMenuButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_MS_ShareButton_clicked()
{

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

