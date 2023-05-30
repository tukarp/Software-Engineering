#include <iostream>
#include "Shop.h"
#include "Product.h"

using namespace std;

int main() {
    // Create Shop
    // Shop parameters: name: string, type: string, size: string, openingHours: string, flagshipProduct: Product *
    Shop * shop = new Shop("Biedronka", "Supermarket", "Large", "8:00 - 21:00",
            // Create product
            // Product parameters: name: string, quantity: int, composition: string, weight: float, expirationDate: string
                           new Product("Milk", 10, "Cow milk", 1.0, "2023-05-24"));

    // Printing shop
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

    // Printing flagship product
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Product----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Name: " << shop->getFlagshipProduct()->getName() << endl;
    cout << "Quantity: " << shop->getFlagshipProduct()->getQuantity() << endl;
    cout << "Composition: " << shop->getFlagshipProduct()->getComposition() << endl;
    cout << "Weight: " << shop->getFlagshipProduct()->getWeight() << endl;
    cout << "Expiration date: " << shop->getFlagshipProduct()->getExpirationDate() << endl;

    // Product methods
    shop->getFlagshipProduct()->sellProduct();
    cout << "Quantity: " << shop->getFlagshipProduct()->getQuantity() << endl;

    shop->getFlagshipProduct()->restockProduct();
    cout << "Quantity: " << shop->getFlagshipProduct()->getQuantity() << endl;

    shop->getFlagshipProduct()->putProductOnShelves();
    cout << "Quantity: " << shop->getFlagshipProduct()->getQuantity() << endl;

    // Creating products
    // Product parameters: name: string, quantity: int, composition: string, weight: float, expirationDate: string
    Product product1 = Product("Bread", 20, "Wheat, flour", 0.5, "2023-06-06");
    Product product2 = Product("Butter", 15, "Cow milk", 0.2, "2023-06-06");
    Product product3 = Product("Cheese", 10, "Cow milk", 0.3, "2023-06-06");

    // Attaching products to shop
    shop->attachProduct(&product1);
    shop->attachProduct(&product2);
    shop->attachProduct(&product3);

    // Printing products
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Products---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << endl;

    // Printing product1
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Product1---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    shop->printProduct(&product1);

    // Product1 methods
    product1.sellProduct();
    cout << "Quantity: " << product1.getQuantity() << endl;

    product1.restockProduct();
    cout << "Quantity: " << product1.getQuantity() << endl;

    product1.putProductOnShelves();
    cout << "Quantity: " << product1.getQuantity() << endl;
    cout << endl;

    // Printing product2
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Product2---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    shop->printProduct(&product2);

    // Product2 methods
    product2.sellProduct();
    cout << "Quantity: " << product2.getQuantity() << endl;

    product2.restockProduct();
    cout << "Quantity: " << product2.getQuantity() << endl;

    product2.putProductOnShelves();
    cout << "Quantity: " << product2.getQuantity() << endl;
    cout << endl;

    // Printing product3
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "----------------------------------------Product3---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    shop->printProduct(&product3);

    // Product3 methods
    product3.sellProduct();
    cout << "Quantity: " << product3.getQuantity() << endl;

    product3.restockProduct();
    cout << "Quantity: " << product3.getQuantity() << endl;

    product3.putProductOnShelves();
    cout << "Quantity: " << product3.getQuantity() << endl;
    cout << endl;

    // Detaching products from shop
    shop->detachProduct(&product1);
    shop->detachProduct(&product2);
    shop->detachProduct(&product3);

    return 0;
}
