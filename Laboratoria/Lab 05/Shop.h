//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 05c
//  @ File Name : Shop.h
//  @ Date : 30.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_SHOP_H)
#define _SHOP_H

#include <string>
#include "Building.h"

using namespace std;

class Shop {
public:
	string getName();
	void setName(string name);
	string getType();
	void setType(string type);
	string getSize();
	void setSize(string size);
	string getOpeningHours();
	void setOpeningHours(string openingHours);
	Shop(string name, string type, string size, string openingHours, Building * building);
	~Shop();
	void openShop();
	void printShop();
	void closeShop();
private:
	string name;
	string type;
	string size;
	string openingHours;
	Building * building;
};

#endif  //_SHOP_H