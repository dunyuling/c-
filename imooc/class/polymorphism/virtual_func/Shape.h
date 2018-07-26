#ifndef _Shape_H_
#define _Shape_H_

class Shape
{
public:
    //下面注释掉的三行不能使用virutal 修饰
    //virtual Shape();
    //virtual static void b();
    //virtual inline void c();
    Shape();
    virtual ~Shape();
    virtual void calcArea();
};
#endif
