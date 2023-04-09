#include <iostream>
#include <fstream>

#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include "pracownik.h"
using namespace std;

class Administrator : public Pracownik{ //tworzenie klasy oraz dziedziczenie po pracowniku
  public:
    string umowa;
    int premia = 1000;
    int urlop=0;
    int L4=0;
    int dni_pracy=0;
    double dniowka=0;
    double wyplata=0;
    Administrator *next = nullptr; // tworzenie wskaznika klasy stazysta o wartosci nullptr
    string rodzaj;


    Administrator();//konstruktor bez argumentu,linijka nizej kontruktor z argumentami ktory wywoluje rowniez konstruktor z pracownika
    Administrator(int id, string imie, string nazwisko, int wiek, double zarobki, string umowa, int dni_pracy, string rodzaj, double godzina) : Pracownik(id, imie, nazwisko, wiek, zarobki, godzina){
        if( rodzaj != "stacjonarnie" )
            cout << "Administrator moze pracowac tylko stacjonarnie";
        this->rodzaj = "stacjonarnie";
        this->umowa = umowa;
        this -> dni_pracy = dni_pracy;
    }
   
    void wynagrodzenie(  );
   
    void L4_( int dni );
   
    void urlop_( int dni );
   
   
};

#endif 
