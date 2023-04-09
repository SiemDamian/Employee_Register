#include <iostream>
#include <fstream>
#include "stazysta.h"
using namespace std;

    Stazysta::Stazysta () {}

void Stazysta::wynagrodzenie(  ){
                dniowka = Pracownik::zarobki/dni_pracy;

    wyplata = dni_pracy*dniowka - (0.3*L4)+premia; //wyliczenie wyplaty
    cout<<"Wyplata: "<<wyplata<<endl;
}

void Stazysta::L4_( int dni ){
    L4 = dni;
}
