#include "LinkedList.h"
#include <iostream>
using namespace std;

int main()
{
    LinkedList<int> *p = new LinkedList<int>();
    
    delete p;
    p = NULL;
    return 0;
}
