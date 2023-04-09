#include <iostream>
#include <fstream>

#ifndef STAZYSTA_H
#define STAZYSTA_H
#include "pracownik.h"
using namespace std;

class Stazysta : public Pracownik { //dziedziczenie po pracowniku ogolnie
public:
    string umowa;
    int premia = 1000;
    int urlop=0;
    int L4=0;
    int dni_pracy=0;
    double dniowka=0;
    double wyplata=0;
    Stazysta *next = nullptr; // tworzenie wskaznika klasy stazysta o wartosci nullptr
    string rodzaj;


    Stazysta();//konstruktor bez argumentu,linijka nizej kontruktor z argumentami ktory wywoluje rowniez konstruktor z pracownika
    Stazysta(int id, string imie, string nazwisko, int wiek, double zarobki, string umowa, int dni_pracy, string rodzaj,
             double godzina) : Pracownik(id, imie, nazwisko, wiek, zarobki, godzina) {
        if (rodzaj != "stacjonarnie")
            cout << "Stazysta moze pracowac tylko stacjonarnie";
        this->rodzaj = "stacjonarnie";
        this->umowa = umowa;
        this->dni_pracy = dni_pracy;
    }

    void wynagrodzenie();

    void L4_(int dni);

};
#endif 
