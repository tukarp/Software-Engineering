//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Lab02
//  @ File Name : Jamnik.cpp
//  @ Date : 09.03.2023
//  @ Author : Tomasz Wnuk
//
//


#include "Jamnik.h"

Jamnik::Jamnik(string imie, string kolorSiersci) {
    this.imie = imie;
    this.kolorSiersci = kolorSiersci;
}

Jamnik::~Jamnik() {}

void Jamnik::setImie(string imie) {
    this.imie = imie;
}

void Jamnik::setKolorSiersci(string kolorSiersci) {
    this.kolorSiersci = kolorSiersci;
}

string Jamnik::getImie() {
    return imie;
}

string Jamnik::getKolorSiersci() {
    return kolorSiersci;
}
