#include <iostream>
using namespace std;

void func(int i=1,int j=2,int k=3);
void func(double i,double j,double k);

int main()
{
   func();
   func(1,2);
   func(1.1,2.2,3.3);
   return 0;
}

void func(int i,int j,int k)
{
    cout<<"i="<<i<<",j="<<j<<",k="<<k<<endl;
}

void func(double i,double j,double k)
{

    cout<<"i="<<i<<",j="<<j<<",k="<<k<<endl;
}
