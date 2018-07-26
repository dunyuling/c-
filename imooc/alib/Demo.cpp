#include "Say.h"

int main(int argc, char *argv[])
{
    Say localsay = Say("Local instance of Say");
    localsay.sayString();
    sayHello();
  
    extern Say librarySay;
    librarySay.sayThis("howdy");
    librarySay.sayString();
    return 0;
}
