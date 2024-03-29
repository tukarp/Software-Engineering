//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 04b
//  @ File Name : Company.h
//  @ Date : 30.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_COMPANY_H)
#define _COMPANY_H

#include <string>
#include <vector>
#include "Employee.h"

using namespace std;

class Company {
public:
	string getName();
	void setName(string name);
	string getSpecialization();
	void setSpecialization(string specialization);
	int getYearsOnTheMarket();
	void setYearsOnTheMarket(int yearsOnTheMarket);
	int getNumberOfEmployees();
	void setNumberOfEmployees(int numberOfEmployees);
	int getAnnualRevenue();
	void setAnnualRevenue(int annualRevenue);
	Company(string name, string specialization, int yearsOnTheMarket, int numberOfEmployees, int annualRevenue);
	~Company();
    void hireEmployee();
    void earnMoney();
    void fireEmployee();
    void attachEmployee(Employee * employee);
    void detachEmployee(Employee * employee);
    void printEmployee(Employee * employee);
private:
	string name;
	string specialization;
	int yearsOnTheMarket;
	int numberOfEmployees;
	int annualRevenue;
    vector <Employee *> employees;
};

#endif  //_COMPANY_H
