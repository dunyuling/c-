#include "Coordinate.h"

class Line
{
public:
    Line(int x1,int y1,int x2,int y2);
    ~Line();
    void printInfo();
private:
    Coordinate m_coorA;
    Coordinate m_coorB;
};


