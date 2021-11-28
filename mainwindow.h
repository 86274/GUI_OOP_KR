#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cladman.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void startCladMans(); //Отображение стартовой информации о занятости кладовщиков

private slots:

    void on_pushGo_pressed(); //кнопка отправить в очередь
    void on_pushFree_pressed(); //кнопки освобождения кладовщика
    void on_pushFree2_pressed();
    void on_pushFree3_pressed();
    void on_pushFree4_pressed();
    void on_pushFree5_pressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
