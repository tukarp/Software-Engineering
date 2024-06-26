//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 05c
//  @ File Name : Building.h
//  @ Date : 30.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_BUILDING_H)
#define _BUILDING_H

#include <string>

using namespace std;

/**
 * Class representing a building
 */
class Building {
public:

	/**
	 * Gets the address of the building
	 *
	 * @return The address of the building
	 */
	string getAddress();

	/**
	 * Sets the address of the building
	 *
	 * @param address The address of the building
	 */
	void setAddress(string address);

	/**
	 * Gets the size of the building
	 *
	 * @return The size of the building
	 */
	int getSize();

	/**
	 * Sets the size of the building
	 *
	 * @param size The size of the building
	 */
	void setSize(int size);

	/**
	 * Gets the maintenance cost of the building
	 *
	 * @return The maintenance cost of the building
	 */
	float getMaintenanceCost();

	/**
	 * Sets the maintenance cost of the building
	 *
	 * @param maintenanceCost The maintenance cost of the building
	 */
	void setMaintenanceCost(float maintenanceCost);

	/**
	 * Gets the information if the building is air conditioned
	 *
	 * @return The information if the building is air conditioned
	 */
	bool getIsItAirConditioned();

	/**
	 * Sets the information if the building is air conditioned
	 *
	 * @param isItAirConditioned The information if the building is air conditioned
	 */
	void setIsItAirConditioned(bool isItAirConditioned);

	/**
	 * Gets the number of cash registers
	 *
	 * @return The number of cash registers
	 */
	int getNumberOfCashRegisters();

	/**
	 * Sets the number of cash registers
	 *
	 * @param numberOfCashRegisters The number of cash registers
	 */
	void setNumberOfCashRegisters(int numberOfCashRegisters);

	/**
	 * Constructor
	 *
	 * @param address The address of the building
	 * @param size The size of the building
	 * @param maintenanceCost The maintenance cost of the building
	 * @param isItAirConditioned The information if the building is air conditioned
	 * @param numberOfCashRegisters The number of cash registers
	 */
	Building(string address, int size, float maintenanceCost, bool isItAirConditioned, int numberOfCashRegisters);

	/**
	 * Destructor
	 */
	~Building();

	/**
	 * Pays the bills
	 */
	void payBills();

	/**
	 * Cleans the building
	 */
	void cleanBuilding();

	/**
	 * Prints the building
	 */
	void printBuilding();

private:

	/**
	 * The address of the building
	 */
	string address;

	/**
	 * The size of the building
	 */
	int size;

	/**
	 * The maintenance cost of the building
	 */
	float maintenanceCost;

	/**
	 * The information if the building is air conditioned
	 */
	bool isItAirConditioned;

	/**
	 * The number of cash registers
	 */
	int numberOfCashRegisters;
};

#endif  //_BUILDING_H
