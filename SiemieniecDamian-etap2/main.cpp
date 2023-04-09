#include <iostream>
#include <fstream>
#include "administrator.h"
#include "ksiegowy.h"
#include "stazysta.h"
#include "programista.h"
#include "analityk.h"
#include "firma.h"
using namespace std;


int main(  )
{
    Firma <Analityk> analitycy; //tworzenie piecu list z kazdego rodzaju pracownika
    Firma <Stazysta> stazysci;
    Firma <Administrator> administratorzy;
    Firma <Ksiegowy> ksiegowi;
    Firma <Programista> programisci;
   
   
    int wybor;
   
    while(1){//menu wyboru
        cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;  //menu wyboru
        cout << "1. Wstaw Pracownika " << endl;
        cout << "2. Usun Pracownika " << endl;
        cout << "3. Wyswietl baze pracownikow " << endl;
        cout << "4. Wez zwolnienie L4 " << endl;
        cout << "5. Urlop Pracownika " << endl;
        cout << "6. Wyznacz Wynagrodzenie " << endl;
        cout << "7. Sprawdz Pracownikow ( czy pracuja, czy pija kawe? ) " << endl;
        cout << "8. Koniec Programu" << endl;
        cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
        cout << "Wybierz opcje: ";
        cin >> wybor;
   

        if( wybor == 1){ //wybory
           
            int wybor2;
   
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;  //menu wyboru
                cout << "1. Wstaw Stazyste " << endl;
                cout << "2. Wstaw Administratora " << endl;
                cout << "3. Wstaw Programiste  " << endl;
                cout << "4. Wstaw Ksiegowego ( wstawianie z dokumentu )" << endl;
                cout << "5. Wstaw Analityka"  << endl;
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
                cout << "Wybierz opcje: ";
                cin >> wybor2;
           
            int id; string imie; string nazwisko; int wiek; double zarobki; string umowa; int dni_pracy; string rodzaj; double godzina;
            cout << "Podaj id ( liczba calkowita ), imie, nazwisko, wiek i zarobki ( w zl ), podaj rodzaj umowy, podaj ilosc dni pracy, podaj rodzaj pracy, godzine rozpoczecia przerwy (trwa 30 min ):" << endl;
            cin >> id >> imie >> nazwisko >> wiek >> zarobki >> umowa >> dni_pracy >> rodzaj >> godzina; //wczytanie
           
                if(wybor2 == 1){
                     stazysci.dodaj_pracownika(id, imie,nazwisko, wiek, zarobki, umowa, dni_pracy, rodzaj, godzina);
                }//odwolanie sie do dodaj_pracownika
                else if( wybor2 == 2 ){
                    administratorzy.dodaj_pracownika(id, imie,nazwisko, wiek, zarobki, umowa, dni_pracy, rodzaj, godzina);
                }
                else if( wybor2 == 3 ){
                    programisci.dodaj_pracownika(id, imie,nazwisko, wiek, zarobki, umowa, dni_pracy, rodzaj, godzina);
                }
                else if( wybor2 == 4 ){
                    ksiegowi.dodaj_pracownika(id, imie,nazwisko, wiek, zarobki, umowa, dni_pracy, rodzaj, godzina);
                }
                else if( wybor2 == 5 ){
                    analitycy.dodaj_pracownika(id, imie,nazwisko, wiek, zarobki, umowa, dni_pracy, rodzaj, godzina);
                }
        }
        else if(wybor==2){
            cout << "Ktorego pracownika chcemy usunac? ( podaj id ) oraz stanowisko: ";
           
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;  //menu wyboru
                cout << "1. Usun Stazyste " << endl;
                cout << "2. Usun Administratora " << endl;
                cout << "3. Usun Programiste  " << endl;
                cout << "4. Usun Ksiegowego " << endl;
                cout << "5. Usun Analityka"  << endl;
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
                cout << "Wybierz opcje: ";
               
            int n, wybor2;
            cin >> n;
            cin >> wybor2;
           
            if(wybor2 == 1){
                     stazysci.usun_pracownika(n); //odwolanie sie do usun_pracownika
                }
                else if( wybor2 == 2 ){
                    administratorzy.usun_pracownika(n);
                }
                else if( wybor2 == 3 ){
                    programisci.usun_pracownika(n);
                }
                else if( wybor2 == 4 ){
                    ksiegowi.usun_pracownika(n);
                }
                else if( wybor2 == 5 ){
                    analitycy.usun_pracownika(n);
                }
        }
        else if(wybor == 3){
            cout << "Ktora wyswietlic liste ";
           
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;  //menu wyboru
                cout << "1. stazysci " << endl;
                cout << "2. administratorzy " << endl;
                cout << "3. programisci  " << endl;
                cout << "4. ksiegowi  " << endl;
                cout << "5. analitycy  "  << endl;
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
                cout << "Wybierz opcje: ";
               
            int wybor2;
            cin >> wybor2;
           
            if(wybor2 == 1){
                     stazysci.wyswietl_pracownikow();//odwolanie sie do wyswietl_pracownikow
                }
                else if( wybor2 == 2 ){
                    administratorzy.wyswietl_pracownikow();
                }
                else if( wybor2 == 3 ){
                    programisci.wyswietl_pracownikow();
                }
                else if( wybor2 == 4 ){
                    ksiegowi.wyswietl_pracownikow();
                }
                else if( wybor2 == 5 ){
                    analitycy.wyswietl_pracownikow();
                }


        }else if(wybor == 4){
            cout << "Ktory pracownik bierze L4 ";
           
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;  //menu wyboru
                cout << "1. stazysci " << endl;
                cout << "2. administratorzy " << endl;
                cout << "3. programisci  " << endl;
                cout << "4. ksiegowi  " << endl;
                cout << "5. analitycy  "  << endl;
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
                cout << "Wybierz opcje: ";
               
            int wybor2;
            cin >> wybor2;
           
            if(wybor2 == 1){
                    Stazysta *s = new Stazysta; // tworzymy nowy obiekt za pomoca wskaznika
                    s = stazysci.head; // ustawiamy na poczatek listy
                    cout << "Podaj ile dni bedzie trwalo L4, dla ktorego pracownika: ";
                    int l, i, ktory = 1;
                    cin >> l >> i;
                    while(s){ //odwolujemy sie do miejsca na liscie a nie do np. id
                        if( ktory == i )
                            s->L4_(l);
                        s=s->next;
                        ktory++;
                    }
                }
                else if( wybor2 == 2 ){
                    Administrator *s = new Administrator;
                    s = administratorzy.head;
                    cout << "Podaj ile dni bedzie trwalo L4, dla ktorego pracownika: ";
                    int l, i, ktory = 1;
                    cin >> l >> i;
                    while(s){
                        if( ktory == i )
                            s->L4_(l);
                        s=s->next;
                        ktory++;
                    }
                }
                else if( wybor2 == 3 ){
                    Programista *s = new Programista;
                    s = programisci.head;
                    cout << "Podaj ile dni bedzie trwalo L4, dla ktorego pracownika: ";
                    int l, i, ktory = 1;
                    cin >> l >> i;
                    while(s){
                        if( ktory == i )
                            s->L4_(l);
                        s=s->next;
                        ktory++;
                    }
                }
                else if( wybor2 == 4 ){
                    Ksiegowy *s = new Ksiegowy;
                    s = ksiegowi.head;
                    cout << "Podaj ile dni bedzie trwalo L4, dla ktorego pracownika: ";
                    int l, i, ktory = 1;
                    cin >> l >> i;
                    while(s){
                        if( ktory == i )
                            s->L4_(l);
                        s=s->next;
                        ktory++;
                    }
                }
                else if( wybor2 == 5 ){
                    Analityk *s = new Analityk;
                    s = analitycy.head;
                    cout << "Podaj ile dni bedzie trwalo L4, dla ktorego pracownika: ";
                    int l, i, ktory = 1;
                    cin >> l >> i;
                    while(s){
                        if( ktory == i )
                            s->L4_(l);
                        s=s->next;
                        ktory++;
                    }
                }
        }else if(wybor == 5){
            cout << "Ktory pracownik bierze urlop ";
           
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;  //menu wyboru
                cout << "1. stazysci " << endl;
                cout << "2. administratorzy " << endl;
                cout << "3. programisci  " << endl;
                cout << "4. ksiegowi  " << endl;
                cout << "5. analitycy  "  << endl;
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
                cout << "Wybierz opcje: ";
               
            int wybor2;
            cin >> wybor2;
           
            if(wybor2 == 1){
                    cout << "Stazysci nie moga brac urlopu" << endl;
                }
                else if( wybor2 == 2 ){
                    Administrator *s = new Administrator; //analogicznie jak przy L4
                    s = administratorzy.head;
                    cout << "Podaj ile dni bedzie trwal urlop, dla ktorego pracownika: ";
                    int l, i, ktory = 1;
                    cin >> l >> i;
                    while(s){
                        if( ktory == i )
                            s->urlop_(l);
                        s=s->next;
                        ktory++;
                    }
                }
                else if( wybor2 == 3 ){
                    Programista *s = new Programista;
                    s = programisci.head;
                    cout << "Podaj ile dni trwal urlop, dla ktorego pracownika: ";
                    int l, i, ktory = 1;
                    cin >> l >> i;
                    while(s){
                        if( ktory == i )
                            s->urlop_(l);
                        s=s->next;
                        ktory++;
                    }
                }
                else if( wybor2 == 4 ){
                    Ksiegowy *s = new Ksiegowy;
                    s = ksiegowi.head;
                    cout << "Podaj ile dni bedzie trwal urlop, dla ktorego pracownika: ";
                    int l, i, ktory = 1;
                    cin >> l >> i;
                    while(s){
                        if( ktory == i )
                            s->urlop_(l);
                        s=s->next;
                        ktory++;
                    }
                }
                else if( wybor2 == 5 ){
                    Analityk *s = new Analityk;
                    s = analitycy.head;
                    cout << "Podaj ile dni bedzie trwal urlop, dla ktorego pracownika: ";
                    int l, i, ktory = 1;
                    cin >> l >> i;
                    while(s){
                        if( ktory == i )
                            s->urlop_(l);
                        s=s->next;
                        ktory++;
                    }
                }
        }else if(wybor == 6){
            cout << "Wyznacz wynagrodzenie pracownika " << endl;;
           
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;  //menu wyboru
                cout << "1. stazysci " << endl;
                cout << "2. administratorzy " << endl;
                cout << "3. programisci  " << endl;
                cout << "4. ksiegowi  " << endl;
                cout << "5. analitycy  "  << endl;
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
                cout << "Wybierz opcje: ";
               
            int wybor2;
            cin >> wybor2;
           
            if(wybor2 == 1){
                    Stazysta *s = new Stazysta;
                    s = stazysci.head;
                    cout << "wynagrodzenie, dla ktorego pracownika: ";
                    int i, ktory = 1;
                    cin >> i;
                    while(s){
                        if( ktory == i )
                            s->wynagrodzenie();
                        s=s->next;
                        ktory++;
                    }
                }
                else if( wybor2 == 2 ){
                    Administrator *s = new Administrator;
                    s = administratorzy.head;
                    cout << "wynagrodzenie, dla ktorego pracownika: ";
                    int i, ktory = 1;
                    cin >> i;
                    while(s){
                        if( ktory == i )
                            s->wynagrodzenie();
                        s=s->next;
                        ktory++;
                    }
                }
                else if( wybor2 == 3 ){
                    Programista *s = new Programista;
                    s = programisci.head;
                    cout << "wynagrodzenie, dla ktorego pracownika: ";
                    int i, ktory = 1;
                    cin >> i;
                    while(s){
                        if( ktory == i )
                            s->wynagrodzenie();
                        s=s->next;
                        ktory++;
                    }
                }
                else if( wybor2 == 4 ){
                    Ksiegowy *s = new Ksiegowy;
                    s = ksiegowi.head;
                    cout << "wynagrodzenie, dla ktorego pracownika: ";
                    int i, ktory = 1;
                    cin >> i;
                    while(s){
                        if( ktory == i )
                            s->wynagrodzenie();
                        s=s->next;
                        ktory++;
                    }
                }
                else if( wybor2 == 5 ){
                    Analityk *s = new Analityk;
                    s = analitycy.head;
                    cout << "wynagrodzenie, dla ktorego pracownika: ";
                    int i, ktory = 1;
                    cin >> i;
                    while(s){
                        if( ktory == i )
                            s->wynagrodzenie();
                        s=s->next;
                        ktory++;
                    }
                }
        }else if(wybor == 7){
            cout << "Sprawdzmy czy pracownik pracuje " << endl;;
           
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;  //menu wyboru
                cout << "1. stazysci " << endl;
                cout << "2. administratorzy " << endl;
                cout << "3. programisci  " << endl;
                cout << "4. ksiegowi  " << endl;
                cout << "5. analitycy  "  << endl;
                cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
                cout << "Wybierz opcje: ";
               
            int wybor2;
            cin >> wybor2;
           
            if(wybor2 == 1){
                    double g;
                    cout << "Podaj godzine i minuty: ";
                    cin >> g;
                    stazysci.sprawdz_pracownikow(g); //odwolujemy sie do sprawdz.pracownikow
                }
                else if( wybor2 == 2 ){
                    double g;
                    cout << "Podaj godzine i minuty: ";
                    cin >> g;
                    administratorzy.sprawdz_pracownikow(g);
                }
                else if( wybor2 == 3 ){
                    double g;
                    cout << "Podaj godzine i minuty: ";
                    cin >> g;
                    programisci.sprawdz_pracownikow(g);
                }
                else if( wybor2 == 4 ){
                    double g;
                    cout << "Podaj godzine i minuty: ";
                    cin >> g;
                    ksiegowi.sprawdz_pracownikow(g);
                }
                else if( wybor2 == 5 ){
                    double g;
                    cout << "Podaj godzine i minuty: ";
                    cin >> g;
                    analitycy.sprawdz_pracownikow(g);
                }
        }
        else{
            break;
        }
    }  

    return 0;
}
