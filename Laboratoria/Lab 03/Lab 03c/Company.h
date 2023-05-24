//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 03c
//  @ File Name : Company.h
//  @ Date : 24.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_COMPANY_H)
#define _COMPANY_H

#include <string>

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
private:
	string name;
	string specialization;
	int yearsOnTheMarket;
	int numberOfEmployees;
	int annualRevenue;
};

#endif  //_COMPANY_H
