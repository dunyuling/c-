class Coordinate
{
public:
    Coordinate();
    Coordinate(int x,int y);
    ~Coordinate();
    void setX(int x);
    int getX();
    void printXAddr();
    void setY(int y);
    int getY();
    void printYAddr();
private:
    int m_iX;
    int m_iY;
};
