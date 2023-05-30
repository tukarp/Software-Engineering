#include <iostream>
#include "Company.h"
#include "Shop.h"
#include "Building.h"

using namespace std;

int main() {
    // Creating company
    // Company parameters: name: string, specialization: string, yearsOnTheMarket: int, numberOfEmployees: int, annualRevenue: int
    Company company = Company("Zabka sp. z o.o.", "Grocery", 20, 10000, 1000000000);

    // Printing company
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Company----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Company: " << company.getName() << endl;
    cout << "Specialization: " << company.getSpecialization() << endl;
    cout << "Years on the market: " << company.getYearsOnTheMarket() << endl;
    cout << "Number of employees: " << company.getNumberOfEmployees() << endl;
    cout << "Annual revenue: " << company.getAnnualRevenue() << endl;

    // Company methods
    company.hireEmployee();
    company.earnMoney();
    company.fireEmployee();
    cout << endl;

    // Creating shop
    // Shop parameters: name: string, type: string, size: string, openingHours: string, building: Building *
    Shop shop = Shop("Zabka", "Grocery", "Small", "8:00 - 22:00",
                     // Create building
                     // Building parameters: address: string, size: int, maintenanceCost: float, isItAirConditioned: bool, numberOfCashRegisters: int
                     new Building("Lublin, ul. Krakowskie Przedmiescie 1", 50, 5000, true, 2));

    // Printing shop
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "-----------------------------------------Shop------------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    shop.printShop();
    cout << endl;

    // Shop methods
    shop.openShop();
    shop.closeShop();

    return 0;
}
