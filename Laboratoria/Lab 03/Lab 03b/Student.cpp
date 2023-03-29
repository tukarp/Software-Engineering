//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Lab 03b
//  @ File Name : Student.cpp
//  @ Date : 29.03.2023
//  @ Author : Tomasz Wnuk
//
//

#include <iostream>
#include "Student.h"

void Student::setImie(std::string imie) {
    this->imie = imie;
}

void Student::setNazwisko(std::string nazwisko) {
    this->nazwisko = nazwisko;
}

void Student::setWiek(int wiek) {
    this->wiek = wiek;
}

void Student::setSrednia(float srednia) {
    this->srednia = srednia;
}

void Student::setRokStudiow(int rokStudiow) {
    this->rokStudiow = rokStudiow;
}

std::string Student::getImie() {
    return imie;
}

std::string Student::getNazwisko() {
    return nazwisko;
}

int Student::getWiek() {
    return wiek;
}

float Student::getSrednia() {
    return srednia;
}

int Student::getRokStudiow() {
    return rokStudiow;
}

Student::Student(std::string imie, std::string nazwisko, int wiek, float srednia, int rokStudiow) {
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->wiek = wiek;
    this->srednia = srednia;
    this->rokStudiow = rokStudiow;
}

Student::~Student() {}

void Student::zrobPraceDomowa() {
    std::cout << getImie() << " robi prace domowa. \n";
}

void Student::zglosSieNaWykladzie() {
    std::cout << getImie() << " zglasza sie na wykladzie. \n";
}

void Student::zglosSieNaCwiczeniach() {
    std::cout << getImie() << " zglasza sie na cwiczeniach. \n";
}
