#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QFile>
#include <QfileDialog>
#include <QTextStream>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void changeView();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_MS_AddButton_clicked();

    void on_AS_MainMenuButton_clicked();

    void on_AS_MainMenuButton_4_clicked();

    void on_MS_ViewButton_clicked();

    void on_VS_MainMenuButton_clicked();

    void on_ES_BackToViewButton_clicked();

    void on_VS_EditButton_clicked();

    void on_SS_MainMenuButton_clicked();

    void on_MS_ShareButton_clicked();

    void on_AS_AddIngredientButton_clicked();

    void on_AddScreen_customContextMenuRequested(const QPoint &pos);

    void on_AS_SubmitButton_clicked();

    void on_AS_OpenRecipeButton_clicked();

    void on_ES_SubmitButton_clicked();

    void on_ES_AddIngredientButton_clicked();

    void on_MS_EditButton_clicked();

    void on_ES_MainMenuButton_clicked();

private:
    Ui::MainWindow *ui;
    QString currentFile = "";
};
#endif // MAINWINDOW_H
