#ifndef SAY_H
#define SAY_H

#include <iostream>
#include <string>
using namespace std;

void sayHello(void);
class Say {
    private:
        string str;
    public:
        Say(string str)
        {
            this->str = str;
        }
        void sayThis(const string str)
        {
            std::cout << str << " from a static library\n";
        }
        void sayString(void);
};
#endif
