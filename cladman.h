#ifndef CLADMAN_H
#define CLADMAN_H
#include "array"
#include "queue"

class cladMan //кладовщик
{
public:
    cladMan(int count);
    ~cladMan();

    void inClad(); //выбрать рандомного свободного кладовщика
    void inQueue(); // поставить рабочего в очередь
    void freeClad(int numberClad); //освободить кладовщика
    bool getFreeCladMan(int numberClad); //проверить свободен ли кладовщик
    int getQueueSize(); //проверить сколько стоит рабочих в очереди

private:
    std::array<int, 5> team; //команда кладовщиков
    std::queue<bool> q; //очередь к кладовщикам
    int sFree; //свободный кладовщиков
};


#endif // CLADMAN_H
