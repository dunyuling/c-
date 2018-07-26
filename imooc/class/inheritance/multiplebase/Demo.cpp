#include "MigrantWorker.h"


int main()
{
    
    /*
    MigrantWorker *mw = new MigrantWorker("Merry","100");
    mw->carry();
    mw->sow();
    
    delete mw;
    mw = NULL;
    */

    Farmer *f = new MigrantWorker("Merry","100");
    f->sow();
   
    delete f;
    f = NULL;
    return 0;
}
