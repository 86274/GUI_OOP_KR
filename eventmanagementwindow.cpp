#include "eventmanagementwindow.h"
#include "ui_eventmanagementwindow.h"

EventManagementWindow::EventManagementWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EventManagementWindow)
{
    ui->setupUi(this);
}

EventManagementWindow::~EventManagementWindow()
{
    delete ui;
}

void EventManagementWindow::on_pushGo_pressed() //Кнопка отправления рабочего к кладовщику
{
    emit pushGo();
}

void EventManagementWindow::on_pushFree_pressed(){//Кнопка освобождения рабочего
    emit pushFree();
}

void EventManagementWindow::on_pushFree2_pressed(){
    emit pushFree2();
}

void EventManagementWindow::on_pushFree3_pressed(){
    emit pushFree3();
}

void EventManagementWindow::on_pushFree4_pressed(){
    emit pushFree4();
}

void EventManagementWindow::on_pushFree5_pressed(){
    emit pushFree5();
}

void EventManagementWindow::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие основного окна
}
