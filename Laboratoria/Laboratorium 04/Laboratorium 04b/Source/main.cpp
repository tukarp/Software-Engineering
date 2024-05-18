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
    cout << endl;

    // Employees
    string employeeName1 = "John";
    string employeeSurname1 = "Doe";
    string employeePosition1 = "CEO";
    string employeeDepartment1 = "Information Technology";
    int employeeExperience1 = 20;
    Employee employee1 = Employee(
        employeeName1,
        employeeSurname1,
        employeePosition1,
        employeeDepartment1,
        employeeExperience1
    );

    string employeeName2 = "Jane";
    string employeeSurname2 = "Doe";
    string employeePosition2 = "CTO";
    string employeeDepartment2 = "Information Technology";
    int employeeExperience2 = 15;
    Employee employee2 = Employee(
        employeeName2,
        employeeSurname2,
        employeePosition2,
        employeeDepartment2,
        employeeExperience2
    );

    string employeeName3 = "John";
    string employeeSurname3 = "Smith";
    string employeePosition3 = "CFO";
    string employeeDepartment3 = "Information Technology";
    int employeeExperience3 = 10;
    Employee employee3 = Employee(
        employeeName3,
        employeeSurname3,
        employeePosition3,
        employeeDepartment3,
        employeeExperience3
    );

    company.attachEmployee(&employee1);
    company.attachEmployee(&employee2);
    company.attachEmployee(&employee3);

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "---------------------------------------Employees---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << endl;

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "---------------------------------------Employee1---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    company.printEmployee(&employee1);

    employee1.earnMoreExperience();
    employee1.getPromoted();
    employee1.getFired();
    cout << endl;

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "---------------------------------------Employee2---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    company.printEmployee(&employee2);

    employee2.earnMoreExperience();
    employee2.getPromoted();
    employee2.getFired();
    cout << endl;

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "---------------------------------------Employee3---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    company.printEmployee(&employee3);

    employee3.earnMoreExperience();
    employee3.getPromoted();
    employee3.getFired();
    cout << endl;

    company.detachEmployee(&employee1);
    company.detachEmployee(&employee2);
    company.detachEmployee(&employee3);

    return 0;
}
