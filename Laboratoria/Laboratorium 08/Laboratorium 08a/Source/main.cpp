#include <iostream>

#include "Shop.h"
#include "Product.h"

using namespace std;

int main() {
    // Shop
    string shopName = "Lidl";
    string shopType = "Supermarket";
    string shopSize = "Large";
    string shopOpeningHours = "8:00 - 22:00";
    string flagshipProductName = "Bread";
    int flagshipProductQuantity = 100;
    string flagshipProductComposition = "Flour, water, yeast";
    float flagshipProductWeight = 0.5;
    string flagshipProductExpirationDate = "2023-06-06";
    Shop * shop = new Shop(
        shopName,
        shopType,
        shopSize,
        shopOpeningHours,
        new Product(
            flagshipProductName,
            flagshipProductQuantity,
            flagshipProductComposition,
            flagshipProductWeight,
            flagshipProductExpirationDate
        )
    );

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------Shop-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Name: " << shop->getName() << endl;
    cout << "Type: " << shop->getType() << endl;
    cout << "Size: " << shop->getSize() << endl;
    cout << "Opening hours: " << shop->getOpeningHours() << endl;
    cout << "Flagship product: " << shop->getFlagshipProduct()->getName() << endl;

    shop->openShop();
    shop->printFlagshipProduct();
    shop->closeShop();

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Product----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Name: " << shop->getFlagshipProduct()->getName() << endl;
    cout << "Quantity: " << shop->getFlagshipProduct()->getQuantity() << endl;
    cout << "Composition: " << shop->getFlagshipProduct()->getComposition() << endl;
    cout << "Weight: " << shop->getFlagshipProduct()->getWeight() << endl;
    cout << "Expiration date: " << shop->getFlagshipProduct()->getExpirationDate() << endl;

    shop->getFlagshipProduct()->sellProduct();
    cout << "Quantity: " << shop->getFlagshipProduct()->getQuantity() << endl;

    shop->getFlagshipProduct()->restockProduct();
    cout << "Quantity: " << shop->getFlagshipProduct()->getQuantity() << endl;

    shop->getFlagshipProduct()->putProductOnShelves();
    cout << "Quantity: " << shop->getFlagshipProduct()->getQuantity() << endl;

    return 0;
}
