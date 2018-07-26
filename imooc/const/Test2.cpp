#include <iostream>
using namespace std;

int main()
{
    const int x = 3;
    const int * const p = &x;
    cout<<"x="<<x<<",*p="<<*p<<endl;
    //x = 4;
    //cout<<"x="<<x<<",*p="<<*p<<endl;
    //int y = 5;
    //p = &y;
    return 0; 

}
