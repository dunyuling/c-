class Array
{
public:
    Array(int len);
    ~Array();
    void setLen(int len);
    int getLen();
    Array setLen2(int len);
    Array& setLen3(int len);
    Array* setLen4(int len);
    void printInfo();
    Array printInfo2();
    Array& printInfo3();
    Array* printInfo4();
    Array getArrayInfo2();
    Array& getArrayInfo3();
    Array* getArrayInfo4();
private:
    int len;
};
