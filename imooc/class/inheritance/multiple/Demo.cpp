#include "Soldier.h"
#include "Infantry.h"
#include <iostream>
using namespace std;

void test1(Person person)
{
    person.play();    
}

void test2(Person &person)
{
    person.play();
}

void test3(Person *person)
{
    person->play();
}

int main()
{
    Infantry infantry;    
    cout<<endl;
    test1(infantry);
    cout<<endl;
    test2(infantry);
    cout<<endl;
    test3(&infantry);
    cout<<endl;
    return 0;
}
