#include <iostream>
#include "Budynek.h"
#include "Sklep.h"
#include "Firma.h"

using namespace std;

int main() {
    // Utworzenie budynku
    // Parametry budynku: adres, iloscKas, wielkosc(w m2), klimatyzowany, kosztUtrzymania
    Budynek * budynek = new Budynek("Lipowa 10", 10, 300, true, 15000.0);

    // Wyświetlenie budynku
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Budynek----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    budynek->printBudynek();
    budynek->zaplacRachunki();
    budynek->posprzatajBudynek();

    // Utworzenie sklepu
    // Parametry sklepu: nazwa, rodzaj, wielkosc, godzinyOtwarcia, budynek
    Sklep * sklep = new Sklep("Biedronka", "Spozywczy", "Duzy", "6-22", budynek);

    // Wyświetlenie sklepu
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "-----------------------------------------Sklep-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    sklep->printSklep();
    sklep->printGodzinyOtwarcia();
    sklep->zareklamujSklep();

    // Utworzenie Firmy
    // Parametry firmy: nazwa, szefFirmy, latNaRynku, rocznyPrzychod, iloscPracownikow
    Firma * firma = new Firma("TomaszCorp", "Tomasz Kowalski", 10, 100000000, 1000);

    // Utworzenie sklepow i budynków dla firmy
    Sklep * sklep1 = new Sklep("Lidl", "Spozywczy", "Duzy", "7-22", new Budynek("Makrelowa 18", 20, 500, true, 20000.0));
    Sklep * sklep2 = new Sklep("MediaMarkt", "RTV", "Sredni", "8-20", new Budynek("Sloneczna 3", 5, 100, true, 10000.0));
    Sklep * sklep3 = new Sklep("Zabka", "Spozywczy", "Maly", "6-24", new Budynek("Akademicka 13", 2, 30, false, 5000.0));

    // Dodanie sklepow do firmy
    firma->dodajSklep(sklep1);
    firma->dodajSklep(sklep2);
    firma->dodajSklep(sklep3);

    // Wyświetlenie firmy
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "-----------------------------------------Firma-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Nazwa: " << firma->getNazwa() << ", Szef firmy: " << firma->getSzefFirmy() << ", Lat na rynku: " << firma->getLatNaRynku() << "\n";
    cout << "Roczny przychod: " << firma->getRocznyPrzychod() << ", Ilosc pracownikow: " << firma->getIloscPracownikow() << "\n";

    // Wyswietl sklepy
    cout << "-------------------------------------Sklepy firmy--------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    firma->wyswietlSklep(0);
    cout << "---------------------------------------------------------------------------------------\n";
    firma->wyswietlSklep(1);
    cout << "---------------------------------------------------------------------------------------\n";
    firma->wyswietlSklep(2);
    cout << "---------------------------------------------------------------------------------------\n";

    // Usun sklepy
    firma->usunSklep("Lidl");
    firma->usunSklep("MediaMarkt");
    firma->usunSklep("Zabka");

    return 0;
}
