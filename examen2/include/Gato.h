#ifndef GATO_H
#define GATO_H
#include "Animal.h"

class Gato: public Animal
{
    public:
        //Gato();
        Gato(string n,int p);
        void habla();
        virtual ~Gato();
    private:


};

#endif // GATO_H
