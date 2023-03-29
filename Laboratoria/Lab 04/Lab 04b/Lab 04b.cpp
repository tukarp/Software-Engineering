#include <iostream>
#include "Pracownik.h"
#include "Firma.h"

using namespace std;

int main() {
    // Utworzenie pracownika
    // Parametry studenta: imie, nazwisko, stanowisko, specjalizacja, doswiadczenie
    Pracownik pracownik = Pracownik("Zbigniew", "Glaz", "junior developer", "react.js", 1);

    // Wyświetlenie pracownika
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "---------------------------------------Pracownik---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Imie: " << pracownik.getImie() << ", Nazwisko: " << pracownik.getNazwisko() << ", Stanowisko: " << pracownik.getStanowisko() << "\n";
    cout << "Specjalizacja: " << pracownik.getSpecjalizacja() << ", Doswiadczenie: " << pracownik.getDoswiadczenie() << "\n";

    // Utworzenie firmy
    // Parametry firmy: nazwa, specjalizacja, latNaRynku, iloscPracownikow, rocznyPrzychod
    Firma firma = Firma("DreamSoft", "Tworzenie oprogramowania", 12, 25, 20000000);

    // Wyświetlenie firmy
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "-----------------------------------------Firma-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Nazwa: " << firma.getNazwa() << ", Specjalizacja: " << firma.getSpecjalizacja() << ", Lat na rynku: " << firma.getLatNaRynku() << "\n";
    cout << "Ilosc pracownikow: " << firma.getIloscPracownikow() << ", Roczny przychod: " << firma.getRocznyPrzychod() << "\n";

    // Wyświetlenie pracownikow w firmie
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------Pracownicy w firmie----------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    // Utworz pracownikow
    Pracownik * pracownik1 = new Pracownik("Albert", "Makowski", "regular", "C++", 5);
    Pracownik * pracownik2 = new Pracownik("Henryk", "Kozlowski", "junior", "C", 2);
    Pracownik * pracownik3 = new Pracownik("Franciszek", "Walczak", "senior", "Python", 10);

    // Dodaj pracownikow
    firma.dodajPracownika(pracownik1);
    firma.dodajPracownika(pracownik2);
    firma.dodajPracownika(pracownik3);

    // Wyswietl pracownikow
    firma.wyswietlPracownika(0);
    firma.wyswietlPracownika(1);
    firma.wyswietlPracownika(2);
    
    // Usuń pracownikow
    firma.usunPracownika(0);
    firma.usunPracownika(1);
    firma.usunPracownika(2);
    
    return 0;
}
