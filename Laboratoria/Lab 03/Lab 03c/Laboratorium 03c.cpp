#include <iostream>
#include "Company.h"
#include "Employee.h"

int main() {
    // Creating company
    // Company parameters: name: string, specialization: string, yearsOnTheMarket: int, numberOfEmployees: int, annualRevenue: int
    Company company = Company("Company", "IT", 20, 10000, 1000000000);

    // Printing company
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Company----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Name: " << company.getName() << endl;
    cout << "Specialization: " << company.getSpecialization() << endl;
    cout << "Years on the market: " << company.getYearsOnTheMarket() << endl;
    cout << "Number of employees: " << company.getNumberOfEmployees() << endl;
    cout << "Annual revenue: " << company.getAnnualRevenue() << endl;

    // Company methods
    company.hireEmployee();
    company.earnMoney();
    company.fireEmployee();

    // Creating employee
    // Employee parameters: firstName: string, lastName: string, position: string, specialization: string, experience: int
    Employee employee = Employee("John", "Doe", "CEO", "IT", 20);

    // Printing employee
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Employee---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "First name: " << employee.getFirstName() << endl;
    cout << "Last name: " << employee.getLastName() << endl;
    cout << "Position: " << employee.getPosition() << endl;
    cout << "Specialization: " << employee.getSpecialization() << endl;
    cout << "Experience: " << employee.getExperience() << endl;

    // Employee methods
    employee.earnMoreExperience();
    employee.getPromoted();
    employee.getFired();

    return 0;
}
