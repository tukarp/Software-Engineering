//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 07
//  @ File Name : Power.cpp
//  @ Date : 30.05.2023
//  @ Author : Tomasz Wnuk
//
//

#include "Power.h"

double Power::power(double base, int exponent) {
    if(exponent == 0)
        return 1;
    else {
        return base * power(base, exponent - 1);
    }
}
