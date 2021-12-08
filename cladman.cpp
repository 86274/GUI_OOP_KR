#include "cladman.h"
#include <QTextStream>
#include "chrono"


cladMan::cladMan(int count)
{
    sFree = count;
    count++;
    team = {0, 1, 2, 3, 4};
}

cladMan::~cladMan()
{

}

void cladMan::inClad()
{
    if (sFree > 0)
    {
        std::srand(std::time(NULL));
        int i = rand() % sFree;
        std::swap(team[i], team[sFree - 1]);
        --sFree;
    } else
        inQueue();

}

void cladMan::inQueue()
{
    if (q.size() < 2)
        q.push(1);
}

void cladMan::freeClad(int numberClad)
{
    int i = sFree;
    while(team[i] != numberClad && i < 5){
        ++i;
    }
    if (i < 5){

        ++sFree;
        std::swap(team[i], team[sFree-1]);

        if(q.size() > 0)
        {
            q.pop();
            inClad();
        }
    }
}

bool cladMan::getFreeCladMan(int numberClad)
{
    for (int i = 0; i < sFree; i++)
    {
        if(team[i] == numberClad)
            return 1;
    }
    return 0;
}

int cladMan::getQueueSize()
{
    return q.size();
}
