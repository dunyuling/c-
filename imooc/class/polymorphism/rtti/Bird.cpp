#include "Bird.h"
#include <iostream>
using namespace std;

Bird::Bird()
{
    cout<<"Bird Bird()"<<endl;
}

Bird::~Bird()
{
    cout<<"Bird ~Bird()"<<endl;
}

void Bird::takeoff()
{
    cout<<"Bird takeoff()"<<endl;
}

void Bird::land()
{
    cout<<"Bird land()"<<endl;
}

void Bird::foraging()
{
    cout<<"Bird foraging():"<<endl;
}
