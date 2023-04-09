#include <iostream>
#include <fstream>

#ifndef KSIEGOWY_H
#define KSIEGOWY_H
#include "pracownik.h"
using namespace std;

class Ksiegowy : public Pracownik{ //tworzenie klasy dzedziczenie po pracowniku
  public:
    string umowa;
    int premia = 1000;
    int urlop=0;
    int L4=0;
    int dni_pracy=0;
    double dniowka=0;
    double wyplata=0;
    Ksiegowy *next = nullptr; // tworzenie wskaznika klasy stazysta o wartosci nullptr
    string rodzaj;


    Ksiegowy(); //konstruktor bez argumentu,linijka nizej kontruktor z argumentami ktory wywoluje rowniez konstruktor z pracownika
    Ksiegowy(int id, string imie, string nazwisko, int wiek, double zarobki, string umowa, int dni_pracy, string rodzaj, double godzina) : Pracownik(id, imie, nazwisko, wiek, zarobki, godzina),dniowka(zarobki/dni_pracy){
        if( umowa != "o_prace" ) //ksiegowy nie moze miec innej umowy
            cout << "Ksiegowy moze miec tylko umowe o prace";
        this->umowa = "o_prace";
        if( rodzaj != "stacjonarnie" )
            cout << "Ksiegowy moze pracowac tylko stacjonarnie";
        this->rodzaj = "stacjonarnie";
        this -> dni_pracy = dni_pracy;
    }
   
    void wynagrodzenie(  );
   
    void L4_( int dni );
   
    void urlop_( int dni );
   
};

#endif 
