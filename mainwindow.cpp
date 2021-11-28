#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include "cladman.h"
#include <QTextStream>

cladMan cm(5);

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startCladMans() //Отображение стартовой информации о занятости кладовщиков
{
    ui->cladMans->setText("Кладовщик 1");
    ui->freeMans->setText("Свободен");
    ui->cladMans_2->setText("Кладовщик 2");
    ui->freeMans_2->setText("Свободен");
    ui->cladMans_3->setText("Кладовщик 3");
    ui->freeMans_3->setText("Свободен");
    ui->cladMans_4->setText("Кладовщик 4");
    ui->freeMans_4->setText("Свободен");
    ui->cladMans_5->setText("Кладовщик 5");
    ui->freeMans_5->setText("Свободен");
}

void MainWindow::on_pushGo_pressed() //Кнопка отправления рабочего к кладовщику
{

    int numberCladMan = cm.inClad();
    switch (numberCladMan) {
    case 0:
        ui->freeMans->setText("Занят");
        break;
    case 1:
        ui->freeMans_2->setText("Занят");
        break;
    case 2:
        ui->freeMans_3->setText("Занят");
        break;
    case 3:
        ui->freeMans_4->setText("Занят");
        break;
    case 4:
        ui->freeMans_5->setText("Занят");
        break;
    case 5:
    {
        int numberQueue = cm.inQueue();
        if (numberQueue == 0)
            ui->noQueue->setText("Очередь переполнена, попробуйте позже");
        else if (numberQueue == 1)
            ui->queue_0->setText("Занято");
        else ui->queue_1->setText("Занято");
    }
        break;
    default:
        break;
    }

}

void MainWindow::on_pushFree_pressed(){

    int i = cm.freeClad(0);
    if(i == 1) {
        ui->freeMans->setText("Свободен");
    } else
        if(i == -1){
            ui->queue_1->setText("");
            ui->noQueue->setText("");
        } else
            if (i == 0) {
               ui->queue_0->setText("");
            }
}

void MainWindow::on_pushFree2_pressed(){
    int i = cm.freeClad(1);
    if(i == 1) {
        ui->freeMans_2->setText("Свободен");
    } else
        if(i == -1){
            ui->queue_1->setText("");
            ui->noQueue->setText("");
        } else
            if (i == 0) {
               ui->queue_0->setText("");
            }
}

void MainWindow::on_pushFree3_pressed(){
    int i = cm.freeClad(2);
    if(i == 1) {
        ui->freeMans_3->setText("Свободен");
    } else
        if(i == -1){
            ui->queue_1->setText("");
            ui->noQueue->setText("");
        } else
            if (i == 0) {
               ui->queue_0->setText("");
            }
}

void MainWindow::on_pushFree4_pressed(){
    int i = cm.freeClad(3);
    if(i == 1) {
        ui->freeMans_4->setText("Свободен");
    } else
        if(i == -1){
            ui->queue_1->setText("");
            ui->noQueue->setText("");
        } else
            if (i == 0) {
               ui->queue_0->setText("");
            }
}

void MainWindow::on_pushFree5_pressed(){
    int i = cm.freeClad(4);
    if(i == 1) {
        ui->freeMans_5->setText("Свободен");
    } else
        if(i == -1){
            ui->queue_1->setText("");
            ui->noQueue->setText("");
        } else
            if (i == 0) {
               ui->queue_0->setText("");
            }
}
