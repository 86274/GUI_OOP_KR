#ifndef CLADMAN_H
#define CLADMAN_H
#include "array"
#include "queue"

class cladMan //кладовщик
{
public:
    cladMan(int count);
    ~cladMan();

    int inClad(); //выбрать рандомного свободного кладовщика
    int inQueue(); // поставить рабочего в очередь
    int freeClad(int numberClad); //освободить кладовщика

private:
    std::array<int, 5> team; //команда кладовщиков
    std::queue<bool> q; //очередь к кладовщикам
    int sFree; //свободный кладовщиков
};


#endif // CLADMAN_H
