//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 08c
//  @ File Name : Power.h
//  @ Date : 31.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_POWER_H)
#define _POWER_H

/**
 * Class representing the power
 */
class Power {
public:

	/**
	 * Calculates the power recursively
	 *
	 * @param base The base
	 * @param exponent The exponent
	 *
	 * @return The power
	 */
	double powerRecursively(double base, int exponent);

	/**
	 * Calculates the power iteratively
	 *
	 * @param base The base
	 * @param exponent The exponent
	 *
	 * @return The power
	 */
	double powerIteratively(double base, int exponent);
};

#endif  //_POWER_H