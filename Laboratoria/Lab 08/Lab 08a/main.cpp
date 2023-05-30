#include <iostream>
#include "Shop.h"
#include "Product.h"

using namespace std;

int main() {
    // Create Shop
    // Shop parameters: name: string, type: string, size: string, openingHours: string, flagshipProduct: Product *
    Shop * shop = new Shop("Lidl", "Supermarket", "Large", "8:00 - 22:00",
                           // Create flagship product
                           // Product parameters: name: string, quantity: int, composition: string, weight: float, expirationDate: string
                           new Product("Flour", 100, "Wheat", 1.5, "01.01.2023"));

    // Print shop
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------Shop-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Name: " << shop->getName() << endl;
    cout << "Type: " << shop->getType() << endl;
    cout << "Size: " << shop->getSize() << endl;
    cout << "Opening hours: " << shop->getOpeningHours() << endl;
    cout << "Flagship product: " << shop->getFlagshipProduct()->getName() << endl;

    // Shop methods
    shop->openShop();
    shop->printFlagshipProduct();
    shop->closeShop();

    // Print flagship product
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Product----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Name: " << shop->getFlagshipProduct()->getName() << endl;
    cout << "Quantity: " << shop->getFlagshipProduct()->getQuantity() << endl;
    cout << "Composition: " << shop->getFlagshipProduct()->getComposition() << endl;
    cout << "Weight: " << shop->getFlagshipProduct()->getWeight() << endl;
    cout << "Expiration date: " << shop->getFlagshipProduct()->getExpirationDate() << endl;

    // Flagship product methods
    shop->getFlagshipProduct()->sellProduct();
    cout << "Quantity: " << shop->getFlagshipProduct()->getQuantity() << endl;

    shop->getFlagshipProduct()->restockProduct();
    cout << "Quantity: " << shop->getFlagshipProduct()->getQuantity() << endl;

    shop->getFlagshipProduct()->putProductOnShelves();
    cout << "Quantity: " << shop->getFlagshipProduct()->getQuantity() << endl;

    return 0;
}
