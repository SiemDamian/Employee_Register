#include <iostream>
#include <fstream>
using namespace std;

#ifndef PRACOWNIK_H
#define PRACOWNIK_H

class Pracownik{ //tworzenie klasy pracownik
    public:
    int id;
    string imie, nazwisko;
    int wiek;
    double zarobki;
    double godzina;
    Pracownik(); //konstruktor
    Pracownik(int id, string imie, string nazwisko, int wiek, double zarobki, double godzina);
   
    void picie_kawy();
    void pracuje();
   
    friend ostream& operator<<(ostream& str, const Pracownik& k){ //przeladowany operator wypisywania na ekran
        return str << k.imie << " " << k.zarobki;
    }
   
    friend ifstream& operator >> (ifstream& in, const Pracownik& k){
        in >> k;
        return in;
    }
};

#endif 
