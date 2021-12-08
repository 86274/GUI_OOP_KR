#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include "cladman.h"
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

        cm = new cladMan(5);

        // Инициализируем второе окно
        sWindow = new EventManagementWindow();
        // подключаем к слоту запуска главного окна по кнопке во втором окне
        connect(sWindow, &EventManagementWindow::firstWindow, this, &MainWindow::show);

        // подключаем к слоту функции оправки в очередь по кнопке во втором окне
        connect(sWindow, &EventManagementWindow::pushGo, this, &MainWindow::inClad);
        // подключаем к слоту функции освобождения кладовщика по кнопке во втором окне
        connect(sWindow, &EventManagementWindow::pushFree, this, &MainWindow::freeClad);
        connect(sWindow, &EventManagementWindow::pushFree2, this, &MainWindow::freeClad2);
        connect(sWindow, &EventManagementWindow::pushFree3, this, &MainWindow::freeClad3);
        connect(sWindow, &EventManagementWindow::pushFree4, this, &MainWindow::freeClad4);
        connect(sWindow, &EventManagementWindow::pushFree5, this, &MainWindow::freeClad5);


        // Инициализируем третье окно
        thirdWindow = new ObjectStatusDisplaywindow();
        // подключаем к слоту запуска главного окна по кнопке в третьем окне
        connect(thirdWindow, &ObjectStatusDisplaywindow::firstWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    sWindow->show();  // Показываем второе окно
    this->close();    // Закрываем основное окно
}

void MainWindow::on_pushButton_2_clicked()
{
    thirdWindow->startCladMans(cm);
    thirdWindow->show();  // Показываем третье окно
    this->close();    // Закрываем основное окно
}

void MainWindow::inClad(){
    cm->inClad();
}

void MainWindow::freeClad(){
    cm->freeClad(0);
}
void MainWindow::freeClad2(){
    cm->freeClad(1);
}
void MainWindow::freeClad3(){
    cm->freeClad(2);
}
void MainWindow::freeClad4(){
    cm->freeClad(3);
}
void MainWindow::freeClad5(){
    cm->freeClad(4);
}
