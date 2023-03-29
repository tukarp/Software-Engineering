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

    return 0;
}
