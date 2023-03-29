#include <iostream>
#include "Produkt.h"
#include "Sklep.h"

using namespace std;

int main() {
    // Utworzenie produktu
    // Parametry produktu: nazwa, ilosc, sklad, waga, dataWaznosci
    Produkt produkt = Produkt("Paczek", 100, "Maka, ciasto, dzem", 0.2, "02.04.23");

    // Wyświetlenie produktu
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Produkt----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Nazwa: " << produkt.getNazwa() << ", Ilosc " << produkt.getIlosc() << ", Sklad: " << produkt.getSklad() << "\n";
    cout << "Waga: " << produkt.getWaga() << ", Data waznosci: " << produkt.getDataWaznosci() << "\n";

    // Utworzenie sklepu
    // Parametry sklepu: nazwa, rodzaj, wielkosc, godzinyOtwarcia, produkt
    Sklep sklep = Sklep("Biedronka", "Spozywczy", "Duzy", "6-22", produkt);

    // Wyświetlenie sklepu
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "-----------------------------------------Sklep-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Nazwa: " << sklep.getNazwa() << ", Rodzaj " << sklep.getRodzaj() << ", Wielkosc: " << sklep.getWielkosc() << "\n";
    cout << "Godziny otwarcia: " << sklep.getGodzinyOtwarcia() << "\n";

    // Wyświetlenie produktu w sklepie
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------Produktu w Sklepie-----------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    sklep.printProdukt();

    return 0;
}
