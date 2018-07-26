#include <iostream>
using namespace std;

int main()
{
    int *p = new int[10000000000];
    if(NULL == p)
    {
	cout<<"apply fail"<<endl;
        return 0;
    }
    delete []p;
    p = NULL;
    return 0;
}
