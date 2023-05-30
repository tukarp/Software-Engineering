#include <iostream>
#include "Company.h"
#include "Employee.h"

using namespace std;

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
    cout << endl;

    // Creating employees
    // Employee parameters: firstName: string, lastName: string, position: string, specialization: string, experience: int
    Employee employee1 = Employee("John", "Doe", "CEO", "IT", 20);
    Employee employee2 = Employee("Jane", "Doe", "CTO", "IT", 15);
    Employee employee3 = Employee("John", "Smith", "CFO", "IT", 10);

    // Attaching employees to company
    company.attachEmployee(&employee1);
    company.attachEmployee(&employee2);
    company.attachEmployee(&employee3);

    // Printing employees
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "---------------------------------------Employees---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << endl;

    // Printing employee1
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "---------------------------------------Employee1---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    company.printEmployee(&employee1);

    // Employee methods
    employee1.earnMoreExperience();
    employee1.getPromoted();
    employee1.getFired();
    cout << endl;

    // Printing employee2
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "---------------------------------------Employee2---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    company.printEmployee(&employee2);

    // Employee methods
    employee2.earnMoreExperience();
    employee2.getPromoted();
    employee2.getFired();
    cout << endl;

    // Printing employee3
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "---------------------------------------Employee3---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    company.printEmployee(&employee3);

    // Employee methods
    employee3.earnMoreExperience();
    employee3.getPromoted();
    employee3.getFired();
    cout << endl;

    // Detaching employees from company
    company.detachEmployee(&employee1);
    company.detachEmployee(&employee2);
    company.detachEmployee(&employee3);

    return 0;
}
