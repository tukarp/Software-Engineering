//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 02
//  @ File Name : Dachshund.cpp
//  @ Date : 17.05.2023
//  @ Author : Tomasz Wnuk
//
//

#include <string>
#include "Dachshund.h"

using namespace std;

string Dachshund::getName() {
    return name;
}

void Dachshund::setName(string name) {
    this->name = name;
}

Dachshund::Dachshund(int age, string color, float height, float weight, bool landAnimal, string purpose,
                     string personality, bool longHaired, string name) : Dog(age, color, height, weight,
                                                                             landAnimal, purpose, personality, longHaired) {
    setAge(age);
    setColor(color);
    setHeight(height);
    setWeight(weight);
    setLandAnimal(landAnimal);
    setPurpose(purpose);
    setPersonality(personality);
    setLongHaired(longHaired);
    setName(name);
}

Dachshund::~Dachshund() {}