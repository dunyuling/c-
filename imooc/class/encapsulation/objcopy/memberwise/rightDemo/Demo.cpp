#include "Array.h"
#include <iostream>
using namespace std;

int main()
{
    
    Array arr1(3);
    
    cout<<endl;
    Array arr2 = arr1;
    cout<<arr2.getCount()<<endl;
    arr1.printAddr();
    arr1.printArr();
    arr2.printAddr();
    arr2.printArr();
    
    cout<<endl;
    arr1.changeArrLast(7);
    arr1.printAddr();
    arr1.printArr();
    arr2.changeArrLast(9);
    arr2.printAddr();
    arr2.printArr();
 

    /*
    int *p = new int[3];
    delete []p;
    p = NULL;
    delete []p;
    p = NULL;
    */
    return 0; 
}
