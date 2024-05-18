//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 08c
//  @ File Name : BinomialTheorem.h
//  @ Date : 31.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_BINOMIALTHEOREM_H)
#define _BINOMIALTHEOREM_H

#include "Factorial.h"

/**
 * Class representing the binomial theorem
 */
class BinomialTheorem {
public:

	/**
	 * Constructor
	 */
	BinomialTheorem();

	/**
	 * Destructor
	 */
	~BinomialTheorem();

	/**
	 * Calculates the binomial theorem recursively
	 *
	 * @param n The number of trials
	 * @param k The number of successes
	 *
	 * @return The binomial theorem
	 */
	long double binomialTheoremRecursively(int n, int k);

	/**
	 * Calculates the binomial theorem iteratively
	 *
	 * @param n The number of trials
	 * @param k The number of successes
	 *
	 * @return The binomial theorem
	 */
	long double binomialTheoremIteratively(int n, int k);

private:

	/**
	 * The difference between the number of trials and the number of successes
	 */
	int N;

	/**
	 * Pointer to the factorial class
	 */
	Factorial * factorialPtr;
};

#endif  //_BINOMIALTHEOREM_H
