#include "Soldier.h"
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
/*
    Soldier soldier;  
    Person *person ;
    person = &soldier;
 
    person->play();
    person->work(): //can't work
*/


    //virtual 用法
    /*
    Person *p = new Soldier;
    p->play();
    delete p;
    p = NULL;
    */

    /*
    Person person;
    Soldier soldier;
    test1(person);
    cout<<endl;
    test1(soldier);
    */

    /*
    Person person;
    Soldier soldier;
    test2(person);
    cout<<endl;
    test2(soldier);
    */


    Person person ;
    Soldier soldier ;
    test3(&person);
    cout<<endl;
    test3(&soldier);
    return 0;
}
