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
    ui->stackedWidget->setCurrentIndex(0);
//    setFixedSize(size());
//    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    currentFile.clear();
//    ui->textEdit->setText(QString());

}

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
//    ui->textEdit->setText(text);
    file.close();
}

void MainWindow::on_MS_AddButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

    QWidget *container = new QWidget;
    ui->AS_ScrollArea->setWidget(container);
    QVBoxLayout *lay = new QVBoxLayout(container);
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
}


void MainWindow::on_VS_MainMenuButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_ES_BackToViewButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_VS_EditButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_SS_MainMenuButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_MS_ShareButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}



void MainWindow::on_AS_AddIngredientButton_clicked()
{
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

//        // Create a QTextStream object to write the recipe data to the file
//        QTextStream out(&file);



        // Close the file
//        file.close();
    }

