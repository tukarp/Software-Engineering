#include <iostream>
#include "Ssak.h"
#include "Pies.h"
#include "Jamnik.h"

using namespace std;

int main() {
    // Utworzenie ssaka
    // Parametry ssaka: umaszczenie, wzrost, waga, wiek
    Ssak ssak = Ssak(2, 30.5, 20.5, 5);

    // Wyświetlenie ssaka
    cout << "-----------------------------------------------------------------------------\n";
    cout << "-------------------------------------Ssak------------------------------------\n";
    cout << "-----------------------------------------------------------------------------\n";
    cout << "Umaszczenie: " << ssak.getUmaszczenie() << ", Wzrost: " << ssak.getWzrost() << ", Waga: " << ssak.getWaga() << ", Wiek: " << ssak.getWiek() << "\n";

    // Zmienienie parametrów
    cout << "Ssak po zmianach: \n";
    ssak.setUmaszczenie(5);
    ssak.setWzrost(60.5);
    ssak.setWaga(39.5);
    ssak.setWiek(10);

    // Wyświetlenie ssaka
    cout << "Umaszczenie: " << ssak.getUmaszczenie() << ", Wzrost: " << ssak.getWzrost() << ", Waga: " << ssak.getWaga() << ", Wiek: " << ssak.getWiek() << "\n";

    // Utworzenie psa
    // Parametry ssaka: umaszczenie, wzrost, waga, wiek
    // Parametry psa: przeznaczenie, umie sztuczki, długowłosy, charakter
    Pies pies = Pies(0, 0, 0, 0, 0, false, false, "");
    pies.setUmaszczenie(3);
    pies.setWzrost(80.5);
    pies.setWaga(24.5);
    pies.setWiek(3);
    pies.setPrzeznaczenie("Domowy");
    pies.setUmieSztuczki(true);
    pies.setDlugowlosy(true);
    pies.setCharakter("Przyjazny");

    // Wyświetlenie psa
    cout << "-----------------------------------------------------------------------------\n";
    cout << "-------------------------------------Pies------------------------------------\n";
    cout << "-----------------------------------------------------------------------------\n";
    cout << "Umaszczenie: " << pies.getUmaszczenie() << ", Wzrost: " << pies.getWzrost() << ", Waga: " << pies.getWaga() << ", Wiek: " << pies.getWiek() << "\n";
    cout << "Przeznaczenie: " << pies.getPrzeznaczenie() << ", Umie Sztuczki: " << pies.getUmieSztuczki() << ", Dlugowlosy: " << pies.getDlugowlosy() << ", Charakter: " << pies.getCharakter() << "\n";

    // Zmienienie parametrów
    cout << "Pies po zmianach: \n";
    pies.setUmaszczenie(25);
    pies.setWzrost(59.5);
    pies.setWaga(100.5);
    pies.setWiek(1);
    pies.setPrzeznaczenie("Obronny");
    pies.setUmieSztuczki(false);
    pies.setDlugowlosy(false);
    pies.setCharakter("Zabawowy");

    // Wyświetlenie psa
    cout << "Umaszczenie: " << pies.getUmaszczenie() << ", Wzrost: " << pies.getWzrost() << ", Waga: " << pies.getWaga() << ", Wiek: " << pies.getWiek() << "\n";
    cout << "Przeznaczenie: " << pies.getPrzeznaczenie() << ", Umie Sztuczki: " << pies.getUmieSztuczki() << ", Dlugowlosy: " << pies.getDlugowlosy() << ", Charakter: " << pies.getCharakter() << "\n";

    // Utworzenie jamnika
    // Parametry ssaka: umaszczenie, wzrost, waga, wiek
    // Parametry psa: przeznaczenie, umie sztuczki, długowłosy, charakter
    // Parametry jamnika: imię, kolor sierści
    Jamnik jamnik = Jamnik(0, false, false, "", "", "");
    jamnik.setUmaszczenie(5);
    jamnik.setWzrost(34.3);
    jamnik.setWaga(23.5);
    jamnik.setWiek(3);
    jamnik.setPrzeznaczenie("Obronny");
    jamnik.setUmieSztuczki(false);
    jamnik.setDlugowlosy(false);
    jamnik.setCharakter("Zabawowy");
    jamnik.setImie("Jacus");
    jamnik.setKolorSiersci("Brazowy");

    // Wyświetlenie jamnika
    cout << "-----------------------------------------------------------------------------\n";
    cout << "------------------------------------Jamnik-----------------------------------\n";
    cout << "-----------------------------------------------------------------------------\n";
    cout << "Umaszczenie: " << jamnik.getUmaszczenie() << ", Wzrost: " << jamnik.getWzrost() << ", Waga: " << jamnik.getWaga() << ", Wiek: " << jamnik.getWiek() << "\n";
    cout << "Przeznaczenie: " << jamnik.getPrzeznaczenie() << ", Umie Sztuczki: " << jamnik.getUmieSztuczki() << ", Dlugowlosy: " << jamnik.getDlugowlosy() << ", Charakter: " << jamnik.getCharakter() << "\n";
    cout << "Imie: " << jamnik.getImie() << ", Kolor Siersci: " << jamnik.getKolorSiersci() << "\n";

    // Zmienienie parametrów
    cout << "Jamnik po zmianach: \n";
    jamnik.setUmaszczenie(25);
    jamnik.setWzrost(59.5);
    jamnik.setWaga(100.5);
    jamnik.setWiek(1);
    jamnik.setPrzeznaczenie("Obronny");
    jamnik.setUmieSztuczki(false);
    jamnik.setDlugowlosy(false);
    jamnik.setCharakter("Zabawowy");
    jamnik.setImie("Jamniczek");
    jamnik.setKolorSiersci("Czarny");

    // Wyświetlenie jamnika
    cout << "Umaszczenie: " << jamnik.getUmaszczenie() << ", Wzrost: " << jamnik.getWzrost() << ", Waga: " << jamnik.getWaga() << ", Wiek: " << jamnik.getWiek() << "\n";
    cout << "Przeznaczenie: " << jamnik.getPrzeznaczenie() << ", Umie Sztuczki: " << jamnik.getUmieSztuczki() << ", Dlugowlosy: " << jamnik.getDlugowlosy() << ", Charakter: " << jamnik.getCharakter() << "\n";
    cout << "Imie: " << jamnik.getImie() << ", Kolor Siersci: " << jamnik.getKolorSiersci() << "\n";

    return 0;
}
