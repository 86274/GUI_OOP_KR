#ifndef OBJECTSTATUSDISPLAYWINDOW_H
#define OBJECTSTATUSDISPLAYWINDOW_H

#include <QMainWindow>
#include "cladman.h"

namespace Ui {
class ObjectStatusDisplaywindow;
}

class ObjectStatusDisplaywindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ObjectStatusDisplaywindow(QWidget *parent = nullptr);
    ~ObjectStatusDisplaywindow();

    void startCladMans(CladMan& cm); //Отображение стартовой информации о занятости кладовщиков

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:

    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

private:
    Ui::ObjectStatusDisplaywindow *ui;
};

#endif // OBJECTSTATUSDISPLAYWINDOW_H
