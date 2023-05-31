//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 07
//  @ File Name : BinomialTheorem.cpp
//  @ Date : 30.05.2023
//  @ Author : Tomasz Wnuk
//
//

#include "BinomialTheorem.h"

BinomialTheorem::BinomialTheorem() {
    factorialPtr = new Factorial();
}

BinomialTheorem::~BinomialTheorem() {
    delete factorialPtr;
}

long double BinomialTheorem::binomialTheorem(int n, int k) {
    N = n - k;
    long NbyK = 1;

    if(k >= N) {
        for(int i = k + 1; i <= n; i++) {
            NbyK *= i;
        }
        return (NbyK / factorialPtr->factorial(n - k));
    } else {
        for(int i = N + 1; i <= n; i++) {
            NbyK *= i;
        }
        return (NbyK / factorialPtr->factorial(k));
    }
}
