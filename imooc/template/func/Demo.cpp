#include <iostream>
using namespace std;

template <class T>
T myMax(T a,T b)
{
    return a>b?a:b;
}

template <typename T>
void mySwap(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <int size>
void showVar()
{
    cout<<"size:"<<size<<endl;
}

template <typename T,typename S>
void showMultiParams(T a, S b)
{
    cout<<"a:"<<a<<",b:"<<b<<endl;    
}

template <typename T, int size>
void myShowMix(T a)
{
    for(int i=0;i<size;i++)
        cout<<a<<endl;
}

template <typename T>
void myOverload(T a)
{
    cout<<"a:"<<a<<endl;
}

template <class T, typename C>      
void myOverload(T a, C  b)
{
    cout<<"a:"<<a<<",b:"<<b<<endl; 
}

template <typename T, int size>
void myOverload(T a)
{
    cout<<"size:"<<size<<",a:"<<a<<endl;
}

int main()
{
    //note type 
    /*
    float ival = myMax<float>('a',20.3 );
    cout<<"ival:"<<ival<<endl;
    char cval = myMax('a','b');
    cout<<"cval:"<<cval<<endl;
    */
 

    /*
    int a = 10, b = 20;
    mySwap<int>(a,b);  
    cout<<"a:"<<a<<",b:"<<b<<endl;
    */

    /*
    showVar<10>();
    showVar<20>();
    cout<<endl;
    */
    
    //结果都以int类型输出
    /*     
    showMultiParams(1,'a');
    showMultiParams(3,"abc");
    showMultiParams<double,int>(2.0,2);
    showMultiParams(2.0,'b'); 
    */
   
    /*
    myShowMix<char,3>('a'); 
    myShowMix<string,3>("abd");
    */ 
   
    myOverload<float>(1.9);
    myOverload<int,float>(2,3.3);
    myOverload<int,3>(4);
    return 0;
}

