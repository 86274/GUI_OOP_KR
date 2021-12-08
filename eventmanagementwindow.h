#ifndef EVENTMANAGEMENTWINDOW_H
#define EVENTMANAGEMENTWINDOW_H

#include <QMainWindow>
#include "cladman.h"

namespace Ui {
class EventManagementWindow;
}

class EventManagementWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EventManagementWindow(QWidget *parent = nullptr);
    ~EventManagementWindow();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие
    void pushGo();
    int pushFree();
    int pushFree2();
    int pushFree3();
    int pushFree4();
    int pushFree5();

private slots:
    void on_pushGo_pressed(); //кнопка отправить в очередь
    void on_pushFree_pressed(); //кнопки освобождения кладовщика
    void on_pushFree2_pressed();
    void on_pushFree3_pressed();
    void on_pushFree4_pressed();
    void on_pushFree5_pressed();

    // Кнопка возврщаения на основной экран
    void on_pushButton_clicked();

private:
    Ui::EventManagementWindow *ui;
};

#endif // EVENTMANAGEMENTWINDOW_H
