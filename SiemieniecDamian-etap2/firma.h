#include <iostream>
#include <fstream>
using namespace std;

template <class typ>//tworzenie szablonu
class Firma{
    public:
    typ *head; //ustalanie pierwszego elementu listy
    void dodaj_pracownika(int id, string imie, string nazwisko, int wiek, double zarobki, string umowa, int dni_pracy, string rodzaj, double godzina);
    void usun_pracownika(int id);
    void wyswietl_pracownikow();
    void wstaw_pracownikow();
    void aktualizacja_bazy();
    void sprawdz_pracownikow(double g);
    Firma(); //konstruktor
};

template <class typ> //odwolanie sie do kontruktora zapisane w formie szablonu
Firma<typ>::Firma(){
    head = nullptr;
}

template <class typ>
void Firma<typ>::wstaw_pracownikow( ){//odwolanie sie do kontruktora zapisane w formie szablonu
    ifstream plik("pracownicy.txt");
    int id;
    string imie, nazwisko, umowa;
    int wiek;
    double zarobki;
    int dni_pracy;
    string rodzaj;
    double godzina;
   
   
    while( plik >> id >> imie >> nazwisko >> wiek >> zarobki >> umowa >> dni_pracy >> rodzaj >> godzina ){
        dodaj_pracownika(id, imie, nazwisko, wiek, zarobki, umowa, dni_pracy, rodzaj, godzina);
    }
   
    plik.close();
}

template <class typ>
void Firma<typ>::dodaj_pracownika(int id, string imie, string nazwisko, int wiek, double zarobki, string umowa, int dni_pracy, string rodzaj, double godzina){
    typ *nowy = new typ;
    nowy->id = id; //tworzenie nowych obiektow
    nowy->imie = imie;
    nowy->nazwisko = nazwisko;
    nowy->wiek = wiek;
    nowy->zarobki = zarobki;
    nowy->umowa = umowa;
    nowy->dni_pracy = dni_pracy;
    nowy->rodzaj = rodzaj;
    nowy->godzina = godzina;
   
    if( head==nullptr ){ //sprawdzamy czy lista jest pusta
        head = nowy;
    }
    else{
        typ *temp = head;//przechodzimy przez liste
        while(temp->next){
            temp = temp->next;
        }
        temp->next = nowy;
        nowy->next = nullptr;
    }
    aktualizacja_bazy();
}

template <class typ>
void Firma<typ>::wyswietl_pracownikow(){
    typ *temp = head;
    while(temp!=nullptr){
        cout << *temp << endl;
        temp=temp->next;
    }
}

template <class typ>
void Firma<typ>::usun_pracownika(int id){
    typ *temp = head;
    typ *prev = nullptr;
   
    if(temp!=nullptr && temp->id == id){
        head = temp->next;
        delete temp;
        return;
    }
    else{
        while(temp!=nullptr && temp->id != id){
            prev = temp;
            temp = temp->next;
        }
        if(temp==nullptr)
            return;
        prev->next = temp->next;
        delete temp;
    }
   
    aktualizacja_bazy();
}

template <class typ>
void Firma<typ>::aktualizacja_bazy(){
    ofstream plik2("Pracownicy.txt");
   
    typ * temp = head;
    while(temp!=nullptr){
        plik2 << *temp << endl;
        temp=temp->next;
    }
   
    plik2.close();
}

template <class typ>
void Firma<typ>::sprawdz_pracownikow(double g){
    typ * temp = head;  //stworzenie obiektu temp
    if (g>18 or g<8){ //jesli wybierzemy godzine poza czasem pracy firmy
        cout<<"Wybrana godzina jest spoza czasu otwarcia firmy ( 8 - 18 ) "<<endl;
    }
    else{
        while(temp!=nullptr){
            cout << temp->id << " ";
            if( g - temp->godzina > 0.30 or temp->godzina>g ){
                temp->pracuje();
            }
            else{
                temp->picie_kawy();
            }
            temp=temp->next;
        }
    }

}

