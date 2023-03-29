#include <iostream>
#include "Opiekun.h"
#include "Kot.h"

using namespace std;

int main() {
    // Utworzenie opiekuna
    // Parametry opiekuna: imie, wzrost, wiek, hobby, mozeZajacSieKotem
    Opiekun opiekun = Opiekun("Janusz", 175.5, 60, "nordic walking", true);

    // Wyświetlenie opiekuna
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Opiekun----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Imie: " << opiekun.getImie() << ", Wzrost: " << opiekun.getWzrost() << ", Wiek: " << opiekun.getWiek() << ", Hobby: " << opiekun.getHobby() << ", Moze zajac sie kotem: " << opiekun.getMozeZajacSieKotem() << "\n";

    // Utworzenie kota
    // Parametry kota: imie, kolor, wiek, poglaskany, najedzony
    Kot kot = Kot("Mruczek", "Rudy", 3, true, false);

    // Wyświetlenie kota
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------Kot------------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Imie: " << kot.getImie() << ", Kolor: " << kot.getKolor() << ", Wiek: " << kot.getWiek() << ", Poglaskany: " << kot.getPoglaskany() << ", Najedzony: " << kot.getNajedzony() << "\n";

    kot.dajSiePoglskac(opiekun.getImie());
    kot.zamrucz();
    kot.zamiaucz();
    cout << "\n";

    cout << "Czy " << kot.getImie() << " jest najedzony? \n";
    cout << kot.getNajedzony();
    cout << "\n";

    cout << "\n";
    cout << "Karmienie " << kot.getImie() << " przez " << opiekun.getImie() << ".\n";
    kot.setNajedzony(opiekun.getMozeZajacSieKotem(), kot.getNajedzony());
    cout << "\n";

    cout << "Czy " << kot.getImie() << " jest najedzony? \n";
    cout << kot.getNajedzony();
    cout << "\n";

    cout << "\n";
    opiekun.zajmijSieSwoimHobby();
    opiekun.zrobZakupy();

    return 0;
}
