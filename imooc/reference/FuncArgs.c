#include <stdio.h>

void func(int *x, int *y);

int main()
{
    int x = 10;
    int y = 20;
    printf("x=%d,y=%d\n",x,y);
    func(&x,&y);
    printf("x=%d,y=%d\n",x,y);
    return 0;
}

void func(int *x,int *y)
{
    int z = 0;
    z = *x;
    *x = *y;
    *y = z; 
}
