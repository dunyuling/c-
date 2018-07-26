#include <iostream>
using namespace std;


typedef struct 
{
    int x;
    int y;
}Coor;

int main()
{
    Coor c1;
    Coor &c = c1;
    c.x = 10;
    c.y = 20;
    cout<<"c1.x="<<c1.x<<", c1.y="<<c1.y<<endl;
    return 0;
}
