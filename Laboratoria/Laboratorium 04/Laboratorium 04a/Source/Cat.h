//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 04a
//  @ File Name : Cat.h
//  @ Date : 29.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_CAT_H)
#define _CAT_H

#include <string>

using namespace std;

/**
 * Class representing a cat
 */
class Cat {
public:

    /**
     * Gets the name of the cat
     *
     * @return The name of the cat
     */
    string getName();

    /**
     * Sets the name of the cat
     *
     * @param name The name of the cat
     */
    void setName(string name);

    /**
     * Gets the color of the cat
     *
     * @return The color of the cat
     */
    string getColor();

    /**
     * Sets the color of the cat
     *
     * @param color The color of the cat
     */
    void setColor(string color);

    /**
     * Gets the age of the cat
     *
     * @return The age of the cat
     */
    int getAge();

    /**
     * Sets the age of the cat
     *
     * @param age The age of the cat
     */
    void setAge(int age);

    /**
     * Gets is the cat fed
     *
     * @return Is the cat fed
     */
    bool getIsCatFed();

    /**
     * Sets is the cat fed
     *
     * @param canTakeCareOfCat Can the caretaker take care of the cat
     * @param isCatFed Is the cat fed
     */
    void setIsCatFed(bool canTakeCareOfCat, bool isCatFed);

    /**
     * Gets is the cat petted
     *
     * @return Is the cat petted
     */
    bool getIsCatPetted();

    /**
     * Sets is the cat petted
     *
     * @param canTakeCareOfCat Can the caretaker take care of the cat
     * @param isCatPetted Is the cat petted
     */
    void setIsCatPetted(bool canTakeCareOfCat, bool isCatPetted);

    /**
     * Constructor
     *
     * @param name The name of the cat
     * @param color The color of the cat
     * @param age The age of the cat
     * @param isCatFed Is the cat fed
     * @param isCatPetted Is the cat petted
     */
    Cat(string name, string color, int age, bool isCatFed, bool isCatPetted);

    /**
     * Destructor
     */
    ~Cat();

	/**
	 * Makes the cat get petted
	 */
	void getPetted();

	/**
	 * Makes the cat meow
	 */
	void meow();

	/**
	 * Makes the cat purr
	 */
	void purr();

private:

    /**
     * The name of the cat
     */
    string name;

    /**
     * The color of the cat
     */
    string color;

    /**
     * The age of the cat
     */
    int age;

    /**
     * Is the cat fed
     */
    bool isCatFed;

    /**
     * Is the cat petted
     */
    bool isCatPetted;
};

#endif  //_CAT_H
