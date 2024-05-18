#include <iostream>

#include "Shop.h"
#include "Product.h"

using namespace std;

int main() {
    // Shop
    string shopName = "Biedronka";
    string shopType = "Supermarket";
    string shopSize = "Large";
    string shopOpeningHours = "8:00 - 21:00";
    string shopFlagshipProductName = "Milk";
    int shopFlagshipProductQuantity = 10;
    string shopFlagshipProductComposition = "Cow milk";
    float shopFlagshipProductWeight = 1.0;
    string shopFlagshipProductExpirationDate = "2023-05-24";
    Shop * shop = new Shop(
        shopName,
        shopType,
        shopSize,
        shopOpeningHours,
        new Product(
            shopFlagshipProductName,
            shopFlagshipProductQuantity,
            shopFlagshipProductComposition,
            shopFlagshipProductWeight,
            shopFlagshipProductExpirationDate
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

    // Product
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

    // Products
    string productName1 = "Bread";
    int productQuantity1 = 20;
    string productComposition1 = "Wheat, flour";
    float productWeight1 = 0.5;
    string productExpirationDate1 = "2023-06-06";
    Product product1 = Product(
        productName1,
        productQuantity1,
        productComposition1,
        productWeight1,
        productExpirationDate1
    );

    string productName2 = "Butter";
    int productQuantity2 = 15;
    string productComposition2 = "Cow milk";
    float productWeight2 = 0.2;
    string productExpirationDate2 = "2023-06-06";
    Product product2 = Product(
        productName2,
        productQuantity2,
        productComposition2,
        productWeight2,
        productExpirationDate2
    );

    string productName3 = "Cheese";
    int productQuantity3 = 10;
    string productComposition3 = "Cow milk";
    float productWeight3 = 0.3;
    string productExpirationDate3 = "2023-06-06";
    Product product3 = Product(
        productName3,
        productQuantity3,
        productComposition3,
        productWeight3,
        productExpirationDate3
    );

    shop->attachProduct(&product1);
    shop->attachProduct(&product2);
    shop->attachProduct(&product3);

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Products---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << endl;

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Product1---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    shop->printProduct(&product1);

    product1.sellProduct();
    cout << "Quantity: " << product1.getQuantity() << endl;

    product1.restockProduct();
    cout << "Quantity: " << product1.getQuantity() << endl;

    product1.putProductOnShelves();
    cout << "Quantity: " << product1.getQuantity() << endl;
    cout << endl;

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Product2---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    shop->printProduct(&product2);

    product2.sellProduct();
    cout << "Quantity: " << product2.getQuantity() << endl;

    product2.restockProduct();
    cout << "Quantity: " << product2.getQuantity() << endl;

    product2.putProductOnShelves();
    cout << "Quantity: " << product2.getQuantity() << endl;
    cout << endl;

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Product3---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    shop->printProduct(&product3);

    product3.sellProduct();
    cout << "Quantity: " << product3.getQuantity() << endl;

    product3.restockProduct();
    cout << "Quantity: " << product3.getQuantity() << endl;

    product3.putProductOnShelves();
    cout << "Quantity: " << product3.getQuantity() << endl;
    cout << endl;

    shop->detachProduct(&product1);
    shop->detachProduct(&product2);
    shop->detachProduct(&product3);

    return 0;
}
