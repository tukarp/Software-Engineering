//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Lab 05c
//  @ File Name : Sklep.cpp
//  @ Date : 30.03.2023
//  @ Author : Tomasz Wnuk
//
//

#include <iostream>
#include "Sklep.h"

void Sklep::setNazwa(std::string nazwa) {
    this->nazwa = nazwa;
}

void Sklep::setRodzaj(std::string rodzaj) {
    this->rodzaj = rodzaj;
}

void Sklep::setWielkosc(std::string wielkosc) {
    this->wielkosc = wielkosc;
}

void Sklep::setGodzinyOtwarcia(std::string godzinyOtwarcia) {
    this->godzinyOtwarcia = godzinyOtwarcia;
}

void Sklep::setBudynek(std::string adresBudynku, int iloscKasBudynku, int wielkoscBudynku, bool klimatyzowanyBudynek, float kosztUtrzymaniaBudynku) {
    Budynek * budynek = new Budynek(adresBudynku, iloscKasBudynku, wielkoscBudynku, klimatyzowanyBudynek, kosztUtrzymaniaBudynku);
    this->budynek = budynek;
}

std::string Sklep::getNazwa() {
    return nazwa;
}

std::string Sklep::getRodzaj() {
    return rodzaj;
}

std::string Sklep::getWielkosc() {
    return wielkosc;
}

std::string Sklep::getGodzinyOtwarcia() {
    return godzinyOtwarcia;
}

void Sklep::printBudynek() {
    std::cout << "Adres: " << budynek->getAdres() << ", Ilosc kas: " << budynek->getIloscKas() << ", Wielkosc: " << budynek->getWielkosc() << "\n";
    std::cout << "Klimatyzowany: " << budynek->getKlimatyzowany() << ", Koszt utrzymania: " << budynek->getKosztUtrzymania() << "\n";
}

Sklep::Sklep(std::string nazwa, std::string rodzaj, std::string wielkosc, std::string godzinyOtwarcia, Budynek * budynek) {
    this->nazwa = nazwa;
    this->rodzaj = rodzaj;
    this->wielkosc = wielkosc;
    this->godzinyOtwarcia = godzinyOtwarcia;
    this->budynek = budynek;
}

Sklep::~Sklep() {
    delete budynek;
}

void Sklep::printSklep() {
    std::cout << "Nazwa: " << getNazwa() << ", Rodzaj: " << getRodzaj() << ", Wielkosc: " << getWielkosc() << "\n";
    std::cout << "Godziny otwarcia: " << getGodzinyOtwarcia() << ", Budynek: \n";
    budynek->printBudynek();
}

void Sklep::zareklamujSklep() {
    std::cout << "Zapraszamy do naszego sklepu na Wielkanocne przeceny!\n";
}

void Sklep::printGodzinyOtwarcia() {
    std::cout << "Godziny otwarcia " << getNazwa() << ": " << getGodzinyOtwarcia() << "\n";
}