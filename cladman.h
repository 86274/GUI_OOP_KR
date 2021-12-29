#ifndef CLADMAN_H
#define CLADMAN_H
#include "array"
#include "queue"

constexpr int countCladMan{5};

class CladMan //кладовщик
{
public:
    CladMan();

    void inClad(); //выбрать рандомного свободного кладовщика
    void inQueue(); // поставить рабочего в очередь
    void freeClad(const int& numberClad); //освободить кладовщика
    bool getFreeCladMan(const int& numberClad) const; //проверить свободен ли кладовщик
    int getQueueSize() const; //проверить сколько стоит рабочих в очереди

private:
    std::array<int, countCladMan> m_team; //команда кладовщиков
    std::queue<bool> m_queue; //очередь к кладовщикам
    int m_cladManFree; //свободных кладовщиков
};


#endif // CLADMAN_H
