#include "Exception.h"
#include "IndexException.h"
#include <string>
#include <iostream>
using namespace std;

void test()
{
    string *s = new string("ssl");
    //下面两句等价
    //throw *s; 
    //throw *(new string("ssl"));
}

void test2()
{
//下面两句等价
//    throw *(new IndexException); 
    throw IndexException();
}

int main()
{
    /*
    try 
    {
	test();
    }
    catch(string &e)
    {
	cout<<"exception string:"<<e<<endl;
    }
    catch(...)
    {
	cout<<"exception end"<<endl;
    }
    */


    try
    {
	test2();
    }
    catch(Exception &e)
    {
	e.printException();
    }
    catch(...)
    {
	cout<<"exception end"<<endl;
    }
    return 0;
}

