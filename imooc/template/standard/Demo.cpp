#include <vector>
#include <list>
#include <map>
#include <string>
#include <iostream>
using namespace std;

void testVector();
void testList();
void testMap();

int main()
{
    //testVector();
    //testList();    
    testMap();
    return 0;
}

void testVector()
{
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
//    vec.pop_back();
//    cout<<vec.size()<<endl;
    /*
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
    */

    vector<int>::iterator itor = vec.begin();
//    cout<<*itor<<endl;
    for(;itor !=  vec.end();itor++)
    {
        cout<<*itor<<endl;
//        cout<<sizeof(itor)<<endl;
    }
   
    cout<<vec.front()<<endl;
}

void testList()
{
    list<int> list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    /* can't work 
    for(int i=0;i<list1.size();i++)
    {
        cout<<list1[i]<<endl;
    }
    */ 
    list<int>::reverse_iterator itor = list1.rbegin();
    for(;itor!=list1.rend();itor++)
    {
	cout<<*itor<<endl;
    }
}

void testMap() 
{
    map<int,string> m;
    pair<int,string> p1(1,"a");
    pair<int,string> p2(2,"b");    

    m.insert(p1);
    m.insert(p2);

    cout<<m[1]<<","<<m[2]<<endl;

    map<int,string>::iterator itor = m.begin();
    for(;itor != m.end();itor++)
    {
	cout<<itor->first<<","<<itor->second<<endl;
    }
}
