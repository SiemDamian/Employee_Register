 #include <iostream>
#include <fstream>
#include "administrator.h"
using namespace std;

    Administrator::Administrator(){}
    

    void Administrator::wynagrodzenie(  ){
        dniowka = Pracownik::zarobki/dni_pracy;

        wyplata = dni_pracy*dniowka - (0.3*L4)+premia; //wyliczenie wyplaty
        cout<<"Wyplata: "<<wyplata<<endl;
    }
   
    void Administrator::L4_( int dni ){
        L4 = dni;
        premia = 0;
    }
   
    void Administrator::urlop_( int dni ){
        if( dni>10 ) //administrator ma najwiecej urlopu
            urlop = 10;
        else
            urlop = dni;
        premia = 0;
    }
