#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    char a[20];
    std::memset(a, 1, sizeof a);
    for (int ai : a) cout << ai<<",";
    cout<<endl;
}
