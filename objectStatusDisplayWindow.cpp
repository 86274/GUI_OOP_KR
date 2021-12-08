#include "objectStatusDisplayWindow.h"
#include "ui_objectStatusDisplayWindow.h"

ObjectStatusDisplaywindow::ObjectStatusDisplaywindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ObjectStatusDisplaywindow)
{
    ui->setupUi(this);
}

ObjectStatusDisplaywindow::~ObjectStatusDisplaywindow()
{
    delete ui;
}

void ObjectStatusDisplaywindow::startCladMans(cladMan* cm) //Отображение стартовой информации о занятости кладовщиков
{

    ui->cladMans->setText("Кладовщик 1");
    if(cm->getFreeCladMan(0))
        ui->freeMans->setText("Свободен");
    else
        ui->freeMans->setText("Занят");
    ui->cladMans_2->setText("Кладовщик 2");
    if(cm->getFreeCladMan(3))
        ui->freeMans_2->setText("Свободен");
    else
        ui->freeMans_2->setText("Занят");
    ui->cladMans_3->setText("Кладовщик 3");
    if(cm->getFreeCladMan(4))
        ui->freeMans_3->setText("Свободен");
    else
        ui->freeMans_3->setText("Занят");
    ui->cladMans_4->setText("Кладовщик 4");
    if(cm->getFreeCladMan(1))
        ui->freeMans_4->setText("Свободен");
    else
        ui->freeMans_4->setText("Занят");
    ui->cladMans_5->setText("Кладовщик 5");
    if(cm->getFreeCladMan(2))
        ui->freeMans_5->setText("Свободен");
    else
        ui->freeMans_5->setText("Занят");

    if(cm->getQueueSize() == 2){
        ui->queue_0->setText("Занято");
        ui->queue_1->setText("Занято");
    } else if (cm->getQueueSize() == 1)
    {
        ui->queue_0->setText("Занято");
        ui->queue_1->setText("");
    } else {
        ui->queue_0->setText("");
        ui->queue_1->setText("");
    }
}

void ObjectStatusDisplaywindow::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}
