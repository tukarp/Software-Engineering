//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 04c
//  @ File Name : Product.h
//  @ Date : 30.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_PRODUCT_H)
#define _PRODUCT_H

#include <string>

using namespace std;

/**
 * Class representing a product
 */
class Product {
public:

	/**
	 * Gets the name of the product
	 *
	 * @return The name of the product
	 */
	string getName();

	/**
	 * Sets the name of the product
	 *
	 * @param name The name of the product
	 */
	void setName(string name);

	/**
	 * Gets the quantity of the product
	 *
	 * @return The quantity of the product
	 */
	int getQuantity();

	/**
	 * Sets the quantity of the product
	 *
	 * @param quantity The quantity of the product
	 */
	void setQuantity(int quantity);

	/**
	 * Gets the composition of the product
	 *
	 * @return The composition of the product
	 */
	string getComposition();

	/**
	 * Sets the composition of the product
	 *
	 * @param composition The composition of the product
	 */
	void setComposition(string composition);

	/**
	 * Gets the weight of the product
	 *
	 * @return The weight of the product
	 */
	float getWeight();

	/**
	 * Sets the weight of the product
	 *
	 * @param weight The weight of the product
	 */
	void setWeight(float weight);

	/**
	 * Gets the expiration date of the product
	 *
	 * @return The expiration date of the product
	 */
	string getExpirationDate();

	/**
	 * Sets the expiration date of the product
	 *
	 * @param expirationDate The expiration date of the product
	 */
	void setExpirationDate(string expirationDate);

	/**
	 * Constructor
	 *
	 * @param name The name of the product
	 * @param quantity The quantity of the product
	 * @param composition The composition of the product
	 * @param weight The weight of the product
	 * @param expirationDate The expiration date of the product
	 */
	Product(string name, int quantity, string composition, float weight, string expirationDate);

	/**
	 * Destructor
	 */
	~Product();

	/**
	 * Sells the product
	 */
	void sellProduct();

	/**
	 * Puts the product on shelves
	 */
	void putProductOnShelves();

	/**
	 * Restocks the product
	 */
	void restockProduct();

private:

	/**
	 * The name of the product
	 */
	string name;

	/**
	 * The quantity of the product
	 */
	int quantity;

	/**
	 * The composition of the product
	 */
	string composition;

	/**
	 * The weight of the product
	 */
	float weight;

	/**
	 * The expiration date of the product
	 */
	string expirationDate;
};

#endif  //_PRODUCT_H
