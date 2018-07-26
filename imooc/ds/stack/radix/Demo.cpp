#include "MyStack.h"
#include <math.h>

#define BINARY        2
#define OCTONARY      8
#define HEXADECIMAL   16 

void radix_conversion(int radix,int dividend,int remainder,MyStack<int> *);
char num[] = "0123456789ABCDEF";

int main()
{
    MyStack<int> *pStack = new MyStack<int>(30);
    int remainder = 0;
    int radix = 2;
    int dividend = 2047;

    radix_conversion(BINARY,dividend,remainder,pStack);
    radix_conversion(OCTONARY,dividend,remainder,pStack);
    radix_conversion(HEXADECIMAL,dividend,remainder,pStack);

    delete pStack;
    pStack = NULL;
   
    return 0;
}

void radix_conversion(int radix,int dividend,int remainder,MyStack<int> *pStack)
{
    while(dividend != 0)
    {
        remainder = dividend % radix;
   	pStack->push(remainder);
	dividend = dividend / radix;
    }

    int elem = 0;
    while(!pStack->stackEmpty())
    {
	pStack->pop(elem);
        cout<<num[elem];
    }
//    pStack->stackTraverse(true);
    cout<<endl;
    pStack->clearStack(); 
}
