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

int cladMan::inClad()
{
    if (sFree > 0)
    {
        std::srand(std::time(NULL));
        int i = rand() % sFree;
        std::swap(team[i], team[sFree - 1]);
        --sFree;
        return team[sFree];
    } else
    {
        return 5;
    }
}

int cladMan::inQueue()
{
    if (q.size() < 2)
        q.push(1);
    else
        return 0;

    return q.size();
}

int cladMan::freeClad(int numberClad)
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
            return -(q.size());
        }
        return 1;
    } else
        return 2;
}

