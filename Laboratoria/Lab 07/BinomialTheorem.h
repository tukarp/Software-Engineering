//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 07
//  @ File Name : BinomialTheorem.h
//  @ Date : 30.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_BINOMIALTHEOREM_H)
#define _BINOMIALTHEOREM_H

#include "Factorial.h"

class BinomialTheorem {
public:
	long double binomialTheorem(int n, int k);
    BinomialTheorem();
    ~BinomialTheorem();
private:
	int N;
	Factorial * factorialPtr;
};

#endif  //_BINOMIALTHEOREM_H
