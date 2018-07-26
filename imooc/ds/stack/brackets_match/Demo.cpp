#include "MyStack.h"
#include <string.h>

int main()
{
    MyStack<char> *pStack = new MyStack<char>(30);
    MyStack<char> *pNeedStack = new MyStack<char>(30);

    char str[] = "[([)]]";
    char currentNeed = 0;
    for(int i = 0;i<strlen(str);i++)
    {
        if(str[i] != currentNeed)
        {
	    pStack->push(str[i]);
            switch(str[i])
	    {
 	    case '[':
		if(currentNeed != 0)
                {
		    pNeedStack->push(currentNeed);
 		}
 		currentNeed = ']';
		break;
	    case '(':
		if(currentNeed != 0)
		{
		    pNeedStack->push(currentNeed);
		}
		currentNeed = ')';
		break;
	    default:
		cout<<"match failed"<<endl;
//		cout<<"44:"<<currentNeed<<endl;
    		delete pStack;
	        pStack = NULL;
    		delete pNeedStack;
    		pNeedStack = NULL;
		return 0;
	    }
      	}
	else 
	{
	    char elem;
	    pStack->pop(elem);
	    bool popFlag = pNeedStack->pop(currentNeed);
	    if(popFlag == 0)
            {
		currentNeed = 0;
            }
	    //cout<<"2:"<<popFlag<<","<<currentNeed<<endl;
	}
    }

    if(pStack->stackEmpty())
    {
	cout<<"match successfully"<<endl;
    }
    else 
    {
	cout<<"match failed"<<endl;
    }
 //   cout<<"33:"<<currentNeed<<endl;
 
    delete pStack;
    pStack = NULL;
    delete pNeedStack;
    pNeedStack = NULL;
    return 0;
}
