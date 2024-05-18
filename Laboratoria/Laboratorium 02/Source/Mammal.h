//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 02
//  @ File Name : Mammal.h
//  @ Date : 17.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_MAMMAL_H)
#define _MAMMAL_H

#include <string>

using namespace std;

/**
 * Class representing a mammal
 */
class Mammal {
public:

	/**
	 * Gets the age of the mammal
	 *
	 * @return The age of the mammal
	 */
	int getAge();

	/**
	 * Sets the age of the mammal
	 *
	 * @param age The age of the mammal
	 */
	void setAge(int age);

	/**
	 * Gets the color of the mammal
	 *
	 * @return The color of the mammal
	 */
	string getColor();

	/**
	 * Sets the color of the mammal
	 *
	 * @param color The color of the mammal
	 */
	void setColor(string color);

	/**
	 * Gets the height of the mammal
	 *
	 * @return The height of the mammal
	 */
	float getHeight();

	/**
	 * Sets the height of the mammal
	 *
	 * @param height The height of the mammal
	 */
	void setHeight(float height);

	/**
	 * Gets the weight of the mammal
	 *
	 * @return The weight of the mammal
	 */
	float getWeight();

	/**
	 * Sets the weight of the mammal
	 *
	 * @param weight The weight of the mammal
	 */
	void setWeight(float weight);

	/**
	 * Gets whether the mammal is a land animal
	 *
	 * @return Whether the mammal is a land animal
	 */
	bool getLandAnimal();

	/**
	 * Sets whether the mammal is a land animal
	 *
	 * @param landAnimal Whether the mammal is a land animal
	 */
	void setLandAnimal(bool landAnimal);

	/**
	 * Constructor
	 *
	 * @param age The age of the mammal
	 * @param color The color of the mammal
	 * @param height The height of the mammal
	 * @param weight The weight of the mammal
	 * @param landAnimal Whether the mammal is a land animal
	 */
	Mammal(int age, string color, float height, float weight, bool landAnimal);

	/**
	 * Destructor
	 */
	~Mammal();

private:

	/**
	 * The age of the mammal
	 */
	int age;

	/**
	 * The color of the mammal
	 */
	string color;

	/**
	 * The height of the mammal
	 */
	float height;

	/**
	 * The weight of the mammal
	 */
	float weight;

	/**
	 * Whether the mammal is a land animal
	 */
	bool landAnimal;
};

#endif  //_MAMMAL_H