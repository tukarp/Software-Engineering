//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Lab 03c
//  @ File Name : Firma.h
//  @ Date : 29.03.2023
//  @ Author : Tomasz Wnuk
//
//


#if !defined(_FIRMA_H)
#define _FIRMA_H

#include <string>

class Firma {
public:
	void setNazwa(std::string nazwa);
	void setSpecjalizacja(std::string specjalizacja);
	void setLatNaRynku(int latNaRynku);
	void setIloscPracownikow(int iloscPracownikow);
	void setRocznyPrzychod(int rocznyPrzychod);
    std::string getNazwa();
    std::string getSpecjalizacja();
	int getLatNaRynku();
	int getIloscPracownikow();
	int getRocznyPrzychod();
    Firma(std::string nazwa, std::string specjalizacja, int latNaRynku, int iloscPracownikow, int rocznyPrzychod);
	~Firma();
private:
    std::string nazwa;
    std::string specjalizacja;
	int latNaRynku;
	int iloscPracownikow;
	int rocznyPrzychod;
};

#endif  //_FIRMA_H
