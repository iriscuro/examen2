#include <iostream>
#include <Animal.h>
#include <Gato.h>
#include <Loro.h>
#include <Perro.h>
using namespace std;

int main()
{
    Animal *p,*t,*s;
    p=new Perro("Golfo",4);
    t=new Gato("Sasy",4);
    s=new Loro("Poly",2);

    p->habla();
    t->habla();
    s->habla();
    delete p;
    delete t;
    delete s;

    return 0;
}
