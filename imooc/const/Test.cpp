#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    const int *p = &x;
    cout<<"x="<<x<<",*p="<<*p<<endl;
    int y = 4;
    p = &y;
    cout<<"x="<<x<<",*p="<<*p<<endl;
    cout<<"y="<<y<<endl;
//    *p = 5;
    return 0;
    
}
