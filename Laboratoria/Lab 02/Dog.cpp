//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Lab02
//  @ File Name : Dog.cpp
//  @ Date : 17.05.2023
//  @ Author : Tomasz Wnuk
//
//

#include <string>
#include "Dog.h"

using namespace std;

void Dog::setPurpose(string purpose) {
    this->purpose = purpose;
}

void Dog::setPersonality(string personality) {
    this->personality = personality;
}

void Dog::setLongHaired(bool longHaired) {
    this->longHaired = longHaired;
}

string Dog::getPurpose() {
    return purpose;
}

string Dog::getPersonality() {
    return personality;
}

bool Dog::getLongHaired() {
    return longHaired;
}

Dog::Dog(int age, string color, float height, float weight, bool landAnimal, string purpose, string personality,
         bool longHaired) : Mammal(age, color, height, weight, landAnimal) {
    setAge(age);
    setColor(color);
    setHeight(height);
    setWeight(weight);
    setLandAnimal(landAnimal);
    setPurpose(purpose);
    setPersonality(personality);
    setLongHaired(longHaired);
}

Dog::~Dog() {}
