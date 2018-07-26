#include <iostream>
using namespace std;

int main()
{
    //const int x = 3; int *y = &x;
    const int x = 3; const int *y = &x;
    cout<<"x="<<x<<",*y="<<*y<<endl;
    int z = 4;
    y = &z;
    cout<<"x="<<x<<",*y="<<*y<<",z="<<z<<endl;
    return 0;
}
