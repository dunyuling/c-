#include <iostream>
using namespace std;
class Coordinate
{
    
public:
	Coordinate(int x, int y)
	{
		// 设置X,Y的坐标
		this->x = x;
		this->y = y;
	}
    // 实现常成员函数
	void printInfo() const
	{
	    cout<<"("<<x<<","<<y<<")"<<endl;
	}
public:
	int x;
	int y;
};


int main(void)
{
	const Coordinate coor(3, 5);

	// 创建常指针p
	const Coordinate *p = &coor;
    // 创建常引用c
    const Coordinate &c = coor;
	
	coor.printInfo();
	p->printInfo();
	c.printInfo();  
	
	return 0;
}
