#include <iostream>
#include "Przedmiot.h"
#include "Student.h"

using namespace std;

int main() {
    // Utworzenie studenta
    // Parametry studenta: imie, nazwisko, wiek, srednia, rokStudiow
    Student student = Student("Tomasz", "Kowalski", 20, 3.5, 2);

    // Wyświetlenie studenta
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Student----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Imie: " << student.getImie() << ", Nazwisko: " << student.getNazwisko() << ", Wiek: " << student.getWiek() << ", Srednia: " << student.getSrednia() << ", Rok studiow: " << student.getRokStudiow() << "\n";

    student.zglosSieNaCwiczeniach();
    student.zglosSieNaWykladzie();
    student.zrobPraceDomowa();

    // Utworzenie przedmiotu
    // Parametry przedmiotu: nazwa, opis, punktyEtcs, prowadzacy, iloscGodzinPracyWlasnej
    Przedmiot przedmiot = Przedmiot("Inzynieria oprogramowania", "Opis inzynierii oprogramowania...", 6.0, "Mikolaj Marciniak", 10);

    // Wyświetlenie przedmiotu
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "---------------------------------------Przedmiot---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Nazwa: " << przedmiot.getNazwa() << ", Opis: " << przedmiot.getOpis() << ", Punkty Etcs: " << przedmiot.getPunktyEtcs() << "\n";
    cout << "Ilosc godzin pracy wlasnej: " << przedmiot.getIloscGodzinPracyWlasnej() << "\n";

    przedmiot.wyswietlOpis();
    przedmiot.wyswietlProwadzacego();
    przedmiot.wyswietlIloscGodzinPracyWlasnej();

    return 0;
}
