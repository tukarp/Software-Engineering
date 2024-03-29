//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 08c
//  @ File Name : BernouliDiagram.h
//  @ Date : 31.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_BERNOULIDIAGRAM_H)
#define _BERNOULIDIAGRAM_H

#include "BinomialTheorem.h"
#include "Power.h"

class BernouliDiagram {
public:
	BernouliDiagram();
	~BernouliDiagram();
	long double bernouliDiagramRecursively(double p, int n, int k);
    long double bernouliDiagramIteratively(double p, int n, int k);
private:
	double q;
	long double p;
	Power * powerPtr;
	BinomialTheorem * binomialTheoremPtr;
};

#endif  //_BERNOULIDIAGRAM_H
