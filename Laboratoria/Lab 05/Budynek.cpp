//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Lab 05c
//  @ File Name : Budynek.cpp
//  @ Date : 30.03.2023
//  @ Author : Tomasz Wnuk
//
//

#include <iostream>
#include "Budynek.h"

void Budynek::setAdres(std::string adres) {
    this->adres = adres;
}

void Budynek::setIloscKas(int iloscKas) {
    this->iloscKas = iloscKas;
}

void Budynek::setWielkosc(int wielkosc) {
    this->wielkosc = wielkosc;
}

void Budynek::setKlimatyzowany(bool klimatyzowany) {
    this->klimatyzowany = klimatyzowany;
}

void Budynek::setKosztUtrzymania(float kosztUtrzymania) {
    this->kosztUtrzymania = kosztUtrzymania;
}

std::string Budynek::getAdres() {
    return adres;
}

int Budynek::getIloscKas() {
    return iloscKas;
}

int Budynek::getWielkosc() {
    return wielkosc;
}

bool Budynek::getKlimatyzowany() {
    return klimatyzowany;
}

float Budynek::getKosztUtrzymania() {
    return kosztUtrzymania;
}

Budynek::Budynek(std::string adres, int iloscKas, int wielkosc, bool klimatyzowany, float kosztUtrzymania) {
    this->adres = adres;
    this->iloscKas = iloscKas;
    this->wielkosc = wielkosc;
    this->klimatyzowany = klimatyzowany;
    this->kosztUtrzymania = kosztUtrzymania;
}

Budynek::~Budynek() {}

void Budynek::printBudynek() {
    std::cout << "Adres: " << getAdres() << ", Ilosc kas: " << getIloscKas() << ", Wielkosc: " << getWielkosc() << "\n";
    std::cout << "Klimatyzowany: " << getKlimatyzowany() << ", Koszt utrzymania: " << getKosztUtrzymania() << "\n";
}

void Budynek::zaplacRachunki() {
    std::cout << "Rachunek wynoszacy: " << getKosztUtrzymania() << " zostal zaplacony!\n";
}

void Budynek::posprzatajBudynek() {
    std::cout << "Sprzatanie budynku...\n" << "Budynek zostal posprzatany!\n";
}
