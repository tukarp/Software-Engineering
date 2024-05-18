//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 03a
//  @ File Name : CareTaker.h
//  @ Date : 18.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_CARETAKER_H)
#define _CARETAKER_H

#include <string>

#include "Cat.h"

using namespace std;

/**
 * Class representing a caretaker
 */
class CareTaker {
public:

	/**
	 * Gets the name of the caretaker
	 *
	 * @return The name of the caretaker
	 */
	string getName();

	/**
	 * Sets the name of the caretaker
	 *
	 * @param name The name of the caretaker
	 */
	void setName(string name);

	/**
	 * Gets the height of the caretaker
	 *
	 * @return The height of the caretaker
	 */
	float getHeight();

	/**
	 * Sets the height of the caretaker
	 *
	 * @param height The height of the caretaker
	 */
	void setHeight(float height);

	/**
	 * Gets the age of the caretaker
	 *
	 * @return The age of the caretaker
	 */
	int getAge();

	/**
	 * Sets the age of the caretaker
	 *
	 * @param age The age of the caretaker
	 */
	void setAge(int age);

	/**
	 * Gets the hobby of the caretaker
	 *
	 * @return The hobby of the caretaker
	 */
	string getHobby();

	/**
	 * Sets the hobby of the caretaker
	 *
	 * @param hobby The hobby of the caretaker
	 */
	void setHobby(string hobby);

	/**
	 * Gets whether the caretaker can take care of a cat
	 *
	 * @return Whether the caretaker can take care of a cat
	 */
	bool getCanTakeCareOfCat();

	/**
	 * Sets whether the caretaker can take care of a cat
	 *
	 * @param canTakeCareOfCat Whether the caretaker can take care of a cat
	 */
	void setCanTakeCareOfCat(bool canTakeCareOfCat);

	/**
	 * Constructor
	 *
	 * @param name The name of the caretaker
	 * @param height The height of the caretaker
	 * @param age The age of the caretaker
	 * @param hobby The hobby of the caretaker
	 * @param canTakeCareOfCat Whether the caretaker can take care of a cat
	 */
	CareTaker(string name, float height, int age, string hobby, bool canTakeCareOfCat);

	/**
	 * Destructor
	 */
	~CareTaker();

	/**
	 * Takes care of a cat
	 */
	void takeCareOfYourHobby();

	/**
	 * Goes shopping
	 */
	void goShopping();

private:

	/**
	 * The name of the caretaker
	 */
	string name;

	/**
	 * The height of the caretaker
	 */
	float height;

	/**
	 * The age of the caretaker
	 */
	int age;

	/**
	 * The hobby of the caretaker
	 */
	string hobby;

	/**
	 * Whether the caretaker can take care of a cat
	 */
	bool canTakeCareOfCat;
};

#endif  //_CARETAKER_H