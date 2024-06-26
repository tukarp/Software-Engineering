//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 03a
//  @ File Name : CareTaker.cpp
//  @ Date : 18.05.2023
//  @ Author : Tomasz Wnuk
//
//

#include <iostream>
#include <string>

#include "CareTaker.h"

using namespace std;

string CareTaker::getName() {
    return name;
}

void CareTaker::setName(string name) {
    this->name = name;
}

float CareTaker::getHeight() {
    return height;
}

void CareTaker::setHeight(float height) {
    this->height = height;
}

int CareTaker::getAge() {
    return age;
}

void CareTaker::setAge(int age) {
    this->age = age;
}

string CareTaker::getHobby() {
    return hobby;
}

void CareTaker::setHobby(string hobby) {
    this->hobby = hobby;
}

bool CareTaker::getCanTakeCareOfCat() {
    return canTakeCareOfCat;
}

void CareTaker::setCanTakeCareOfCat(bool canTakeCareOfCat) {
    this->canTakeCareOfCat = canTakeCareOfCat;
}

CareTaker::CareTaker(string name, float height, int age, string hobby, bool canTakeCareOfCat) {
    setName(name);
    setHeight(height);
    setAge(age);
    setHobby(hobby);
    setCanTakeCareOfCat(canTakeCareOfCat);
}

CareTaker::~CareTaker() {}

void CareTaker::takeCareOfYourHobby() {
    cout << name << " takes care of his/her hobby!" << endl;
}

void CareTaker::goShopping() {
    cout << name << " goes shopping!" << endl;
}
