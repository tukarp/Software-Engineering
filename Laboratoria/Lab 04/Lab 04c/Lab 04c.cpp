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

    // Wyświetlenie produktow w sklepie
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "-----------------------------------Produkty w sklepie----------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    // Utworz pracownikow
    Produkt * produkt1 = new Produkt("Maka", 1000, "Sklad maki: ...", 1.0, "02.04.24");
    Produkt * produkt2 = new Produkt("Platki sniadaniowe", 500, "Sklad platkow sniadaniowych: ...", 0.5, "02.10.23");
    Produkt * produkt3 = new Produkt("Bulka", 50, "Sklad bulki: ...", 0.1, "03.04.23");

    // Dodaj produkt
    sklep.dodajProdukt(produkt1);
    sklep.dodajProdukt(produkt2);
    sklep.dodajProdukt(produkt3);

    // Wyswietl produkty
    sklep.wyswietlProdukt(0);
    sklep.wyswietlProdukt(1);
    sklep.wyswietlProdukt(2);

    // Usuń produkty
    sklep.usunProdukt(0);
    sklep.usunProdukt(1);
    sklep.usunProdukt(2);

    return 0;
}