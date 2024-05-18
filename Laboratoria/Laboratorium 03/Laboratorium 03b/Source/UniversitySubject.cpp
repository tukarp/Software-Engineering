//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 03b
//  @ File Name : UniversitySubject.cpp
//  @ Date : 24.05.2023
//  @ Author : Tomasz Wnuk
//
//

#include <iostream>
#include <string>

#include "UniversitySubject.h"

using namespace std;

string UniversitySubject::getName() {
    return name;
}

void UniversitySubject::setName(string name) {
    this->name = name;
}

string UniversitySubject::getDescription() {
    return description;
}

void UniversitySubject::setDescription(string description) {
    this->description = description;
}

float UniversitySubject::getETCSPoints() {
    return ETCSPoints;
}

void UniversitySubject::setETCSPoints(float ETCSPoints) {
    this->ETCSPoints = ETCSPoints;
}

string UniversitySubject::getLecturer() {
    return lecturer;
}

void UniversitySubject::setLecturer(string lecturer) {
    this->lecturer = lecturer;
}

int UniversitySubject::getNumberOfUnassistedWorkHours() {
    return numberOfUnassistedWorkHours;
}

void UniversitySubject::setNumberOfUnassistedWorkHours(int numberOfUnassistedWorkHours) {
    this->numberOfUnassistedWorkHours = numberOfUnassistedWorkHours;
}

UniversitySubject::UniversitySubject(
    string name,
    string description,
    float ETCSPoints,
    string lecturer,
    int numberOfUnassistedWorkHours
) {
    setName(name);
    setDescription(description);
    setETCSPoints(ETCSPoints);
    setLecturer(lecturer);
    setNumberOfUnassistedWorkHours(numberOfUnassistedWorkHours);
}

UniversitySubject::~UniversitySubject() {}

void UniversitySubject::printDescription() {
    cout << "Description: " << getDescription() << endl;
}

void UniversitySubject::printLecturer() {
    cout << "Lecturer: " << getLecturer() << endl;
}

void UniversitySubject::printNumberOfUnassistedWorkHours() {
    cout << "Number of unassisted work hours: " << getNumberOfUnassistedWorkHours() << endl;
}