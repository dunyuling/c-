#include "Array.h"
#include <iostream>
using namespace std;

int main()
{
    Array arr1;
    arr1.setCount(1);
    
    cout<<endl;
    Array arr2 = arr1;
    cout<<arr2.getCount()<<endl;
    return 0; 
}
