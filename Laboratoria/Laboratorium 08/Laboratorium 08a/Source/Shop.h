//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 08a
//  @ File Name : Shop.h
//  @ Date : 31.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_SHOP_H)
#define _SHOP_H

#include <string>

#include "Product.h"

using namespace std;

/**
 * Class representing a shop
 */
class Shop {
public:

	/**
	 * Gets the name of the shop
	 *
	 * @return The name of the shop
	 */
    string getName();

	/**
	 * Sets the name of the shop
	 *
	 * @param name The name of the shop
	 */
	void setName(string name);

	/**
	 * Gets the type of the shop
	 *
	 * @return The type of the shop
	 */
    string getType();

	/**
	 * Sets the type of the shop
	 *
	 * @param type The type of the shop
	 */
	void setType(string type);

	/**
	 * Gets the size of the shop
	 *
	 * @return The size of the shop
	 */
    string getSize();

	/**
	 * Sets the size of the shop
	 *
	 * @param size The size of the shop
	 */
	void setSize(string size);

	/**
	 * Gets the opening hours of the shop
	 *
	 * @return The opening hours of the shop
	 */
    string getOpeningHours();

	/**
	 * Sets the opening hours of the shop
	 *
	 * @param openingHours The opening hours of the shop
	 */
	void setOpeningHours(string openingHours);

	/**
	 * Gets the flagship product of the shop
	 *
	 * @return The flagship product of the shop
	 */
    Product * getFlagshipProduct();

	/**
	 * Sets the flagship product of the shop
	 *
	 * @param flagshipProduct The flagship product of the shop
	 */
	void setFlagshipProduct(Product * flagshipProduct);

	/**
	 * Constructor
	 *
	 * @param name The name of the shop
	 * @param type The type of the shop
	 * @param size The size of the shop
	 * @param openingHours The opening hours of the shop
	 * @param flagshipProduct The flagship product of the shop
	 */
	Shop(string name, string type, string size, string openingHours, Product * flagshipProduct);

	/**
	 * Destructor
	 */
	~Shop();

	/**
	 * Opens the shop
	 */
	void openShop();

	/**
	 * Prints the flagship product
	 */
	void printFlagshipProduct();

	/**
	 * Closes the shop
	 */
	void closeShop();

private:

	/**
	 * The name of the shop
	 */
	string name;

	/**
	 * The type of the shop
	 */
	string type;

	/**
	 * The size of the shop
	 */
	string size;

	/**
	 * The opening hours of the shop
	 */
	string openingHours;

	/**
	 * The flagship product of the shop
	 */
	Product * flagshipProduct;
};

#endif  //_SHOP_H