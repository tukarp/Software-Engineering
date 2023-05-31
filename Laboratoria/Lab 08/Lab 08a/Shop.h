//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Laboratorium 08a
//  @ File Name : Shop.h
//  @ Date : 31.05.2023
//  @ Author : Tomasz Wnuk
//
//

#if !defined(_SHOP_H)
#define _SHOP_H

#include <string>
#include "Product.h"

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
    Product * getFlagshipProduct();
	void setFlagshipProduct(Product * flagshipProduct);
	Shop(string name, string type, string size, string openingHours, Product * flagshipProduct);
	~Shop();
	void openShop();
	void printFlagshipProduct();
	void closeShop();
private:
	string name;
	string type;
	string size;
	string openingHours;
	Product * flagshipProduct;
};

#endif  //_SHOP_H