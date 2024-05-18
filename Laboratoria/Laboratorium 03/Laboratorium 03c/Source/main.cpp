#include <iostream>

#include "Company.h"
#include "Employee.h"

using namespace std;

int main() {
    // Company
    string companyName = "Company";
    string companySpecialization = "Information Technology";
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
    cout << "Name: " << company.getName() << endl;
    cout << "Specialization: " << company.getSpecialization() << endl;
    cout << "Years on the market: " << company.getYearsOnTheMarket() << endl;
    cout << "Number of employees: " << company.getNumberOfEmployees() << endl;
    cout << "Annual revenue: " << company.getAnnualRevenue() << endl;

    company.hireEmployee();
    company.earnMoney();
    company.fireEmployee();

    // Employee
    string employeeName = "John";
    string employeeLastName = "Doe";
    string employeePosition = "CEO";
    string employeeSpecialization = "Information Technology";
    int employeeExperience = 20;
    Employee employee = Employee("John", "Doe", "CEO", "IT", 20);

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Employee---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "First name: " << employee.getFirstName() << endl;
    cout << "Last name: " << employee.getLastName() << endl;
    cout << "Position: " << employee.getPosition() << endl;
    cout << "Specialization: " << employee.getSpecialization() << endl;
    cout << "Experience: " << employee.getExperience() << endl;

    employee.earnMoreExperience();
    employee.getPromoted();
    employee.getFired();

    return 0;
}
