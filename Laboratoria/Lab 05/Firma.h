//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Lab 05c
//  @ File Name : Firma.h
//  @ Date : 30.03.2023
//  @ Author : Tomasz Wnuk
//
//


#if !defined(_FIRMA_H)
#define _FIRMA_H

#include <string>
#include <vector>
#include "Sklep.h"

class Firma {
public:
	void setNazwa(std::string nazwa);
	void setSzefFirmy(std::string szefFirmy);
	void setLatNaRynku(int latNaRynku);
	void setRocznyPrzychod(int rocznyPrzychod);
	void setIloscPracownikow(int iloscPracownikow);
    std::string getNazwa();
    std::string getSzefFirmy();
	int getLatNaRynku();
	int getRocznyPrzychod();
	int getIloscPracownikow();
    Firma(std::string nazwa, std::string szefFirmy, int latNaRynku, int rocznyPrzychod, int iloscPracownikow);
	~Firma();
	void dodajSklep(Sklep * sklep);
	void usunSklep(string nazwaSklepu);
	void wyswietlSklep(int i);
	void ustawSklep(int i, std::string nazwaSklepu, std::string rodzajSklepu, std::string wielkoscSklepu, std::string godzinyOtwarciaSklepu, Budynek * budynekSklepu);
private:
    std::string nazwa;
    std::string szefFirmy;
	int latNaRynku;
	int rocznyPrzychod;
	int iloscPracownikow;
    std::vector<Sklep *> sklepy;
};

#endif  //_FIRMA_H
