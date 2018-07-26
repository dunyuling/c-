class Array
{
public:
    Array();
    Array(const Array &arr);
    ~Array();
    void setCount(int count);
    int getCount(); 
private:
    int m_iCount;
};
