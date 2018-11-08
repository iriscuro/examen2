#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class Animal
{
    public:
        Animal(string n,int p);//constructor
        virtual void habla(void)=0;
        void hacerHablar(){
            this->habla();
       }
        virtual ~Animal();

    protected:
        string nombre;
        int nroPatas;
    private:
};

#endif // ANIMAL_H
