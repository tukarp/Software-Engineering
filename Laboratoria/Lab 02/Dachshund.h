//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Lab02
//  @ File Name : Dachshund.h
//  @ Date : 17.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_DACHSHUND_H)
#define _DACHSHUND_H

#include <string>
#include "Dog.h"

using namespace std;

class Dachshund : public Dog {
public:
	void setName(string name);
    string getName();
	Dachshund(int age, string color, float height, float weight, bool landAnimal, string purpose,
              string personality, bool longHaired, string name);
	~Dachshund();
private:
	string name;
};

#endif  //_DACHSHUND_H
