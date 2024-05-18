//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 06
//  @ File Name : System.h
//  @ Date : 30.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_SYSTEM_H)
#define _SYSTEM_H

#include <string>
#include <vector>

#include "User.h"

/**
 * Class representing a system
 */
class System {
public:

	/**
	 * Gets the name of the system
	 *
	 * @return The name of the system
	 */
	string getName();

	/**
	 * Sets the name of the system
	 *
	 * @param name The name of the system
	 */
	void setName(string name);

	/**
	 * Gets the technology of the system
	 *
	 * @return The technology of the system
	 */
	string getTechnology();

	/**
	 * Sets the technology of the system
	 *
	 * @param technology The technology of the system
	 */
	void setTechnology(string technology);

	/**
	 * Gets the performance of the system
	 *
	 * @return The performance of the system
	 */
	string getPerformance();

	/**
	 * Sets the performance of the system
	 *
	 * @param performance The performance of the system
	 */
	void setPerformance(string performance);

	/**
	 * Gets the functionality of the system
	 *
	 * @return The functionality of the system
	 */
	string getFunctionality();

	/**
	 * Sets the functionality of the system
	 *
	 * @param functionality The functionality of the system
	 */
	void setFunctionality(string functionality);

	/**
	 * Gets the security of the system
	 *
	 * @return The security of the system
	 */
	string getSecurity();

	/**
	 * Sets the security of the system
	 *
	 * @param security The security of the system
	 */
	void setSecurity(string security);

	/**
	 * Constructor
	 *
	 * @param name The name of the system
	 * @param technology The technology of the system
	 * @param performance The performance of the system
	 * @param functionality The functionality of the system
	 * @param security The security of the system
	 */
	System(string name, string technology, string performance, string functionality, string security);

	/**
	 * Destructor
	 */
	~System();

	/**
	 * Authenticates the user
	 *
	 * @param userName The user name
	 * @param userPassword The user password
	 * @return True if the user is authenticated, false otherwise
	 */
	bool authentication(string userName, string userPassword);

	/**
	 * Adds the user
	 *
	 * @param user The user
	 */
	void addUser(User user);

	/**
	 * Prints the user
	 *
	 * @param user The user
	 */
	void printUser(User * user);

	/**
	 * Deletes the user
	 *
	 * @param user The user
	 */
	void deleteUser(User user);

	/**
	 * Boots the system
	 */
    void boot();

private:

	/**
	 * The name of the system
	 */
	string name;

	/**
	 * The technology of the system
	 */
	string technology;

	/**
	 * The performance of the system
	 */
	string performance;

	/**
	 * The functionality of the system
	 */
	string functionality;

	/**
	 * The security of the system
	 */
	string security;

	/**
	 * The users of the system
	 */
	vector <User *> users;
};

#endif  //_SYSTEM_H