#include <iostream>
#include <fstream>
#include "ksiegowy.h"
using namespace std;
Ksiegowy::Ksiegowy(){}
void Ksiegowy::wynagrodzenie(  ){
    dniowka = Pracownik::zarobki/dni_pracy;

    wyplata = dni_pracy*dniowka - (0.3*L4)+premia; //wyliczenie wyplaty
    cout<<"Wyplata: "<<wyplata<<endl;

}

void Ksiegowy::L4_( int dni ){
    L4 = dni;
    premia = 0;
}

void Ksiegowy::urlop_( int dni ){
    if( dni>5)
        urlop = 5;
    else
        urlop = dni;
    premia = 0;
}



