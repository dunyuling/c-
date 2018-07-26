#include <iostream>
using namespace std;

int main(void)
{
    int a = 3;
    int &b = a;
    
    b = 10;
    cout<<"a="<<a<<endl;
    return 0;
}
