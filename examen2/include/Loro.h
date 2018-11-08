#ifndef LORO_H
#define LORO_H
#include "Animal.h"

class Loro: public Animal
{
    public:
        Loro(string n,int p);
        void habla();
        virtual ~Loro();

    private:


};

#endif // LORO_H
