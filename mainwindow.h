#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cladman.h>
#include "objectStatusDisplayWindow.h"
#include "eventmanagementwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    // Слоты кнопок главного окна
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    // второе и третье окна
    EventManagementWindow *sWindow;
    ObjectStatusDisplaywindow *thirdWindow;

    CladMan cm;

    void inClad(); //отправить в очередь
    //освободить кладовщика
    void freeClad();
    void freeClad2();
    void freeClad3();
    void freeClad4();
    void freeClad5();
};
#endif // MAINWINDOW_H
