#include "System.h"
#include "User.h"

int main() {
    // Utworzenie systemu
    // Parametry systemu: nazwa, technologia, czyDziałaSzybko, czyJestResponsywny, użytkownicy
    System * system = new System("System Sklepu", "C++", true, true);

    // Utworzenie użytkownika
    // Parametry użytkownika: identyfikator, hasło, imię, nazwisko, email
    User * uzytkownik = new User("jan", "123", "Jan", "Kowalski", "kowalski.mail.pl");
    system->dodajUzytkownika(uzytkownik);

    // Otworzenie katalogu strony domowej sklepu przez użytkownika
    uzytkownik->otworzKatalogStronyDomowej();

    // Zalogowanie się przez użytkownika
    uzytkownik->zalogujSie();

    // Sprawdzenie czy użytkownik jest w systemie
    if(system->uwierzytelnianie(uzytkownik->getIdentyfikator(), uzytkownik->getHaslo())) {
        // Zaloguj użytkownika
        uzytkownik->zalogowano();
    } else {
        // Zarejestruj użytkownika
        uzytkownik->zarejestrujSie();
        // A następnie dodaj go do systemu
        system->dodajUzytkownika(uzytkownik->wyslijDane());
    }

    // Wyświetl użytkownika w systemie
    system->wyswietlUzytkownika(uzytkownik);

    return 0;
}