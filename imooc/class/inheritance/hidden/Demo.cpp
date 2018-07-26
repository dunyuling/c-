#include "Soldier.h"

int main()
{
    Soldier soldier;  
    soldier.Person::play();
    soldier.work();
    soldier.play(3);
    soldier.Person::play();
    return 0;
}
