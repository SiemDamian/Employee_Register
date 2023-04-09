#include <iostream>
#include <fstream>
#include "analityk.h"
using namespace std;

Analityk::Analityk(){}
void Analityk::wynagrodzenie(  ){
    dniowka = Pracownik::zarobki/dni_pracy;

    wyplata = dni_pracy*dniowka - (0.3*L4)+premia; //wyliczenie wyplaty
    cout<<"Wyplata: "<<wyplata<<endl;
}


void Analityk::L4_( int dni ){
    L4 = dni;
    premia = 0;
}

void Analityk::urlop_( int dni ){
    if( dni>5)
        urlop = 5;
    else
        urlop = dni;
    premia = 0;
}