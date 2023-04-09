#include "mainwindow.h"
#include <QStackedWidget>
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

//void MainWindow::on_pushButton_clicked()
//{
//    // Switch to the second view
//    ui->stackedWidget->setCurrentIndex(1);
//}


//void MainWindow::on_pushButton_2_clicked()
//{
//    ui->stackedWidget->setCurrentIndex(0);
//}


void MainWindow::on_MS_AddButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
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

