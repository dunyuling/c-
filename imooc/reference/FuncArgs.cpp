#include <iostream>
using namespace std;

void func(int &a,int &b);
void func2(int const &a,int const &b);

int main()
{
    int x = 10;
    int y = 20;
    cout<<"x="<<x<<",y="<<y<<endl;
    cout<<&x<<endl;
    func(x,y);
    cout<<"x="<<x<<",y="<<y<<endl;
    return 0;
}

void func(int &x,int &y)
{
    int z = 0;
    z = x;
    x = y;
    y = z;
    cout<<&x<<endl;
}

//error 
/*
void func2(int const &x, int const &y)
{
    int z = 0;
    z = x;
    x = y;
    y = z;
    cout<<&x<<endl;
}
*/
