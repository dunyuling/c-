#ifndef _Coordinate_H_
#define _Coordinate_H_

#include <ostream>
using namespace std;

class Coordinate
{
friend ostream& operator<<(ostream &, const Coordinate &);
public:
    Coordinate(int x=0,int y=0);
    void printCoordinate();

private:
    int m_iX;
    int m_iY;
};
#endif
