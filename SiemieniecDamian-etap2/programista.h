#include <iostream>
#include <fstream>

#ifndef PROGRAMISTA_H
#define PROGRAMISTA_H
#include "pracownik.h"
using namespace std;

class Programista : public Pracownik{ //tworzenie klasy oraz dziedziczenie po pracowniku
  public:
    string umowa;
    int premia = 1000;
    int urlop=0;
    int L4=0;
    int dni_pracy=0;
    double dniowka=0;
    double wyplata=0;
    Programista *next = nullptr; // tworzenie wskaznika klasy stazysta o wartosci nullptr
    string rodzaj;


    Programista();//konstruktor bez argumentu,linijka nizej kontruktor z argumentami ktory wywoluje rowniez konstruktor z pracownika
    Programista(int id, string imie, string nazwisko, int wiek, double zarobki, string umowa, int dni_pracy, string rodzaj, double godzina) : Pracownik(id, imie, nazwisko, wiek, zarobki, godzina),dniowka(zarobki/dni_pracy){
        this->umowa = umowa;
        this -> dni_pracy = dni_pracy;
        this->rodzaj = rodzaj;
    }
   
    void wynagrodzenie(  );
   
    void L4_( int dni );
   
    void urlop_( int dni );
   
   
   
   
};

#endif 
