#include <iostream>
#include <Animal.h>
#include <Gato.h>
#include <Loro.h>
#include <Perro.h>
#include "ArrAnimal.h"


using namespace std;

int main()
{
    /*
    Perro *p;
    Gato *t;
    Loro *s;
    p=new Perro("Golfo",4);
    t=new Gato("Sasy",4);
    s=new Loro("Poly",2);

    p->hablar();
    t->hablar();
    s->hablar();
    delete p;
    delete t;
    delete s;
    */
    /*
    Perro p("Livy",4);
    Gato q("Clink",4);
    Loro l("Flash",2);
    Perro a("Fido",4);
    */
    Perro p("Livy",4);
    Gato q("Clink",4);
    Loro l("Flash",2);
    Animal a("Fido",4);
    Animal an[]={p,q,l};
    int ta = sizeof(an)/sizeof(an[0]);

    ArrAnimal ani(an,ta);
    ArrAnimal anim = ani;

    cout<<"el tamaño del arreglo es: "<<ani.darTam()<<endl;

    anim.inse_final(p);
    cout << " animapaka:insertar al final "<<endl;
    anim.print();

    cout <<endl;


    anim.insertar(1,a);
    anim.print();
    anim.limpiar();
    cout<<"El tamaño del arreglo es: "<<anim.darTam()<<endl;

    cout << " animap "<<endl;

    ani.print();
    cout<< endl;
    ani.inse_final(p);

    cout <<" animap: "<<endl;
    ani.print();
    cout<< endl;
    cout << "El tamaño del arreglo es: "<<ani.darTam()<<endl;
    ani.insertar(4,a);
    cout<<  " animap: "<<endl;
    ani.print();
    cout<<endl;
    cout <<" >>>sacar un animal(2):"<<endl;
    ani.remove(2);
    ani.print();


    return 0;
}
