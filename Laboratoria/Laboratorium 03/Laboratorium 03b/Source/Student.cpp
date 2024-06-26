//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 03b
//  @ File Name : Student.cpp
//  @ Date : 24.05.2023
//  @ Author : Tomasz Wnuk
//
//

#include <iostream>
#include <string>

#include "Student.h"

using namespace std;

string Student::getFirstName() {
    return firstName;
}

void Student::setFirstName(string firstName) {
    this->firstName = firstName;
}

string Student::getLastName() {
    return lastName;
}

void Student::setLastName(string lastName) {
    this->lastName = lastName;
}

int Student::getAge() {
    return age;
}

void Student::setAge(int age) {
    this->age = age;
}

float Student::getAverage() {
    return average;
}

void Student::setAverage(float average) {
    this->average = average;
}

int Student::getYearOfUniversity() {
    return yearOfUniversity;
}

void Student::setYearOfUniversity(int yearOfUniversity) {
    this->yearOfUniversity = yearOfUniversity;
}

Student::Student(string firstName, string lastName, int age, float average, int yearOfUniversity) {
    setFirstName(firstName);
    setLastName(lastName);
    setAge(age);
    setAverage(average);
    setYearOfUniversity(yearOfUniversity);
}

Student::~Student() {}

void Student::doHomework() {
    cout << getFirstName() << " is doing homework." << endl;
}

void Student::attendLecture() {
    cout << getFirstName() << " is attending lecture." << endl;
}

void Student::attendLaboratory() {
    cout << getFirstName() << " is attending laboratory." << endl;
}
