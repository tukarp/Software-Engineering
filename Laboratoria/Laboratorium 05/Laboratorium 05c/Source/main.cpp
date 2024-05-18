#include <iostream>

#include "Company.h"
#include "Shop.h"
#include "Building.h"

using namespace std;

int main() {
    // Company
    string companyName = "Zabka sp. z o.o.";
    string companySpecialization = "Grocery";
    int companyYearsOnTheMarket = 20;
    int companyNumberOfEmployees = 10000;
    int companyAnnualRevenue = 1000000000;
    Company company = Company(
        companyName,
        companySpecialization,
        companyYearsOnTheMarket,
        companyNumberOfEmployees,
        companyAnnualRevenue
    );

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Company----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Company: " << company.getName() << endl;
    cout << "Specialization: " << company.getSpecialization() << endl;
    cout << "Years on the market: " << company.getYearsOnTheMarket() << endl;
    cout << "Number of employees: " << company.getNumberOfEmployees() << endl;
    cout << "Annual revenue: " << company.getAnnualRevenue() << endl;

    company.hireEmployee();
    company.earnMoney();
    company.fireEmployee();
    cout << endl;

    // Shop
    string shopName = "Zabka";
    string shopType = "Grocery";
    string shopSize = "Small";
    string shopOpeningHours = "8:00 - 22:00";
    string buildingAddress = "Lublin, ul. Krakowskie Przedmiescie 1";
    int buildingSize = 50;
    float buildingMaintenanceCost = 5000;
    bool buildingIsItAirConditioned = true;
    int buildingNumberOfCashRegisters = 2;
    Shop shop = Shop(
        shopName,
        shopType,
        shopSize,
        shopOpeningHours,
        new Building(
            buildingAddress,
            buildingSize,
            buildingMaintenanceCost,
            buildingIsItAirConditioned,
            buildingNumberOfCashRegisters
        )
    );

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "-----------------------------------------Shop------------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    shop.printShop();
    cout << endl;

    shop.openShop();
    shop.closeShop();

    return 0;
}
