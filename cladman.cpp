#include "cladman.h"
#include <QTextStream>
#include "chrono"

CladMan::CladMan()
{
    m_cladManFree = countCladMan;
    m_team[0] = 0;
    for (int i = 1; i < countCladMan; ++i) {
        m_team[i] = 1 + m_team[i - 1];
    }
}

void CladMan::inClad()
{
    if (m_cladManFree > 0)
    {
        std::srand(std::time(NULL));
        int i = rand() % m_cladManFree;
        std::swap(m_team[i], m_team[m_cladManFree - 1]);
        --m_cladManFree;
    } else
        inQueue();
}

void CladMan::inQueue()
{
    if (m_queue.size() < 2)
        m_queue.push(1);
}

void CladMan::freeClad(const int& numberClad)
{
    int i = m_cladManFree;
    while(m_team[i] != numberClad && i < 5){
        ++i;
    }
    if (i < 5){
        ++m_cladManFree;
        std::swap(m_team[i], m_team[m_cladManFree-1]);

        if(m_queue.size() > 0)
        {
            m_queue.pop();
            inClad();
        }
    }
}

bool CladMan::getFreeCladMan(const int& numberClad) const
{
    for (int i = 0; i < m_cladManFree; i++)
    {
        if(m_team[i] == numberClad)
            return 1;
    }
    return 0;
}

int CladMan::getQueueSize() const
{
    return m_queue.size();
}
