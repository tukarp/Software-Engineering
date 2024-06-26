//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 08c
//  @ File Name : Power.cpp
//  @ Date : 31.05.2023
//  @ Author : Tomasz Wnuk
//
//

#include "Power.h"

double Power::powerRecursively(double base, int exponent) {
    if (exponent == 0) return 1;
    else return base * powerRecursively(base, exponent - 1);
}

double Power::powerIteratively(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) result *= base;
    return result;
}
