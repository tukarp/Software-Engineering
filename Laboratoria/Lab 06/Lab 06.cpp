#include <iostream>
#include "System.h"
#include "User.h"

int main() {
    // Utworzenie uzytkownika
    // Parametry uzytkownika: identyfikator, haslo, imie, nazwisko, email
    User * uzytkownik = new User;

    // Utworzenie systemu
    // Parametry uzytkownika: nazwa, technologia, czyDzialaSzybko, czyJestResponsywny, uzytkownicy
    System * system = new System("Sklep", "C++", true, true);

    uzytkownik->otworzKatalogStronyDomowej(system);

    return 0;
}
