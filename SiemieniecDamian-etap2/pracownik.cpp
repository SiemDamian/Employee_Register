#include <iostream>
#include <fstream>
#include "pracownik.h"
using namespace std;

Pracownik::Pracownik(){} //odniesienie sie do kontruktora

Pracownik::Pracownik(int id, string imie, string nazwisko, int wiek, double zarobki, double godzina){ //odniesienie sie do kontruktora
    this->id = id;
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->wiek = wiek;
    this->zarobki = zarobki;
    this->godzina = godzina;
}

void Pracownik::picie_kawy(){
    cout << "Picie Kawy" << endl;
}
void Pracownik::pracuje(){
    cout << "Pracuje" << endl;
}
