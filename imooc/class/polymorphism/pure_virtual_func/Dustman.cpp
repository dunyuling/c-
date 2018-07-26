#include "Dustman.h"
#include <iostream>
using namespace std;

Dustman::Dustman(string m_strName,int m_iAge):Worker(m_strName,m_iAge) 
{
   cout<<"Dustman Dustman(string m_strName,int m_iAge)"<<endl;
}

Dustman::~Dustman()
{
    cout<<"Dustman ~Dustman()"<<endl;
}

void Dustman::work()
{
    cout<<"Dustman work()"<<endl;
}
