#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    const int y = x;
    cout<<x<<","<<y<<endl;
    x = 5;
    cout<<x<<","<<y<<endl;
    int const &z = x;
    cout<<x<<","<<z<<endl;
    x = 7;
    cout<<x<<","<<z<<endl; 
    return 0;
}


