#include <string.h>
#include <iostream>
using namespace std;
int main(void)
{
    //在堆中申请100个char类型的内存
    char *str = new char[100];
    //拷贝Hello C++字符串到分配的堆中的内存中
	strcpy(str, "Hello imooc");
    //打印字符串
    cout<<str<<endl;
    //释放内存
	delete []str;
    str = NULL;
	return 0;
}
