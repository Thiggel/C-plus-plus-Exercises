#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include "dataImp/dataImp.h"

class Data
{
    DataImp *d_pimpl;           // Implementation pointer

    public:
        Data();                 // only used to initialize d_pimpl
        bool read();
        void display() const;
};
        
#endif
