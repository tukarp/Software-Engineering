//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 04a
//  @ File Name : Cat.cpp
//  @ Date : 29.05.2023
//  @ Author : Tomasz Wnuk
//
//

#include <iostream>
#include <string>
#include "Cat.h"

using namespace std;

string Cat::getName() {
    return name;
}

void Cat::setName(string name) {
    this->name = name;
}

string Cat::getColor() {
    return color;
}

void Cat::setColor(string color) {
    this->color = color;
}

int Cat::getAge() {
    return age;
}

void Cat::setAge(int age) {
    this->age = age;
}

bool Cat::getIsCatFed() {
    return isCatFed;
}

void Cat::setIsCatFed(bool canTakeCareOfCat, bool feedCat) {
    if((feedCat) && (canTakeCareOfCat)) {
        this->isCatFed = true;
    } else {
        this->isCatFed = false;
    }
}

bool Cat::getIsCatPetted() {
    return isCatPetted;
}

void Cat::setIsCatPetted(bool canTakeCareOfCat, bool petCat) {
    if((petCat) && (canTakeCareOfCat)) {
        this->isCatPetted = true;
    } else {
        this->isCatPetted = false;
    }
}

Cat::Cat(string name, string color, int age, bool isCatFed, bool isCatPetted) {
    setName(name);
    setColor(color);
    setAge(age);
    this->isCatFed = isCatFed;
    this->isCatPetted = isCatPetted;
}

Cat::~Cat() {}

void Cat::getPetted() {
    cout << name << " gets petted!" << endl;
}

void Cat::meow() {
    cout << name << " meows!" << endl;
}

void Cat::purr() {
    cout << name << " purrs!" << endl;
}