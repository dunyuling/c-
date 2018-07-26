#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout<<"please input your name:";
    getline(cin,name);
    if(name.empty())
    {
        cout<<"input is empty.."<<endl;;
//	system("pause");
        return 0;
    }
 
    if(name == "imooc")
    {
	cout<<"you are a administrator.."<<endl;
    } 

    cout<<"hello " + name <<endl;
    cout<<"your name length is "<<name.size()<<endl;
    cout<<"your name first letter is :"<<name[0]<<endl;
//    cout<<"hello " + " world"<<endl;
    return 0;
}


