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

/**
 * Class representing a company
 */
class Company {
public:

	/**
	 * Gets the name of the company
	 *
	 * @return The name of the company
	 */
	string getName();

	/**
	 * Sets the name of the company
	 *
	 * @param name The name of the company
	 */
	void setName(string name);

	/**
	 * Gets the specialization of the company
	 *
	 * @return The specialization of the company
	 */
	string getSpecialization();

	/**
	 * Sets the specialization of the company
	 *
	 * @param specialization The specialization of the company
	 */
	void setSpecialization(string specialization);

	/**
	 * Gets the years on the market of the company
	 *
	 * @return The years on the market of the company
	 */
	int getYearsOnTheMarket();

	/**
	 * Sets the years on the market of the company
	 *
	 * @param yearsOnTheMarket The years on the market of the company
	 */
	void setYearsOnTheMarket(int yearsOnTheMarket);

	/**
	 * Gets the number of employees of the company
	 *
	 * @return The number of employees of the company
	 */
	int getNumberOfEmployees();

	/**
	 * Sets the number of employees of the company
	 *
	 * @param numberOfEmployees The number of employees of the company
	 */
	void setNumberOfEmployees(int numberOfEmployees);

	/**
	 * Gets the annual revenue of the company
	 *
	 * @return The annual revenue of the company
	 */
	int getAnnualRevenue();

	/**
	 * Sets the annual revenue of the company
	 *
	 * @param annualRevenue The annual revenue of the company
	 */
	void setAnnualRevenue(int annualRevenue);

	/**
	 * Constructor
	 *
	 * @param name The name of the company
	 * @param specialization The specialization of the company
	 * @param yearsOnTheMarket The years on the market of the company
	 * @param numberOfEmployees The number of employees of the company
	 * @param annualRevenue The annual revenue of the company
	 */
	Company(string name, string specialization, int yearsOnTheMarket, int numberOfEmployees, int annualRevenue);

	/**
	 * Destructor
	 */
	~Company();

	/**
	 * Hires an employee to the company
	 */
    void hireEmployee();

	/**
	 * Earns money for the company
	 */
    void earnMoney();

	/**
	 * Fires an employee from the company
	 */
    void fireEmployee();

private:

	/**
	 * The name of the company
	 */
	string name;

	/**
	 * The specialization of the company
	 */
	string specialization;

	/**
	 * The years on the market of the company
	 */
	int yearsOnTheMarket;

	/**
	 * The number of employees in the company
	 */
	int numberOfEmployees;

	/**
	 * The annual revenue of the company
	 */
	int annualRevenue;
};

#endif  //_COMPANY_H