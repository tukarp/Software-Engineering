//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 04b
//  @ File Name : Employee.h
//  @ Date : 30.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_EMPLOYEE_H)
#define _EMPLOYEE_H

#include <string>

using namespace std;

/**
 * Class representing an employee
 */
class Employee {
public:

	/**
	 * Gets the first name of the employee
	 *
	 * @return The first name of the employee
	 */
	string getFirstName();
	
	/**
	 * Sets the first name of the employee
	 *
	 * @param firstName The first name of the employee
	 */
	void setFirstName(string firstName);

	/**
	 * Gets the last name of the employee
	 *
	 * @return The last name of the employee
	 */
	string getLastName();

	/**
	 * Sets the last name of the employee
	 *
	 * @param lastName The last name of the employee
	 */
	void setLastName(string lastName);

	/**
	 * Gets the position of the employee
	 *
	 * @return The position of the employee
	 */
	string getPosition();

	/**
	 * Sets the position of the employee
	 *
	 * @param position The position of the employee
	 */
	void setPosition(string position);

	/**
	 * Gets the specialization of the employee
	 *
	 * @return The specialization of the employee
	 */
	string getSpecialization();

	/**
	 * Sets the specialization of the employee
	 *
	 * @param specialization The specialization of the employee
	 */
	void setSpecialization(string specialization);

	/**
	 * Gets the experience of the employee
	 *
	 * @return The experience of the employee
	 */
	int getExperience();

	/**
	 * Sets the experience of the employee
	 *
	 * @param experience The experience of the employee
	 */
	void setExperience(int experience);

	/**
	 * Constructor
	 *
	 * @param firstName The first name of the employee
	 * @param lastName The last name of the employee
	 * @param position The position of the employee
	 * @param specialization The specialization of the employee
	 * @param experience The experience of the employee
	 */
	Employee(string firstName, string lastName, string position, string specialization, int experience);

	/**
	 * Destructor
	 */
    ~Employee();

	/**
	  * Earns more experience for the employee
	  */
    void earnMoreExperience();

	/**
	  * Gets promoted in a company
	  */
    void getPromoted();

	/**
	  * Gets fired from a company
	  */
    void getFired();

private:

	/**
	 * The first name of the employee
	 */
	string firstName;

	/**
	 * The last name of the employee
	 */
	string lastName;

	/**
	 * The position of the employee
	 */
	string position;

	/**
	 * The specialization of the employee
	 */
	string specialization;

	/**
	 * The experience of the employee
	 */
	int experience;
};

#endif  //_EMPLOYEE_H
