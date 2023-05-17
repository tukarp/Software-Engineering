#include <iostream>
#include "Mammal.h"
#include "Dog.h"
#include "Dachshund.h"

using namespace std;

int main() {
    // Creating mammal
    // Mammal attributes: age: int, color: int, height: float, weight: float, landAnimal: bool
    Mammal mammal = Mammal(15, "808080", 50.5, 20.5, true);

    // Printing mammal
    cout << "-----------------------------------------------------------------------------\n";
    cout << "------------------------------------Mammal-----------------------------------\n";
    cout << "-----------------------------------------------------------------------------\n";
    cout << "Age: " << mammal.getAge() << endl;
    cout << "Color: " << mammal.getColor() << endl;
    cout << "Height: " << mammal.getHeight() << endl;
    cout << "Weight: " << mammal.getWeight() << endl;
    cout << "Land animal: " << mammal.getLandAnimal() << endl;

    // Creating dog
    // Mammal attributes: age: int, color: int, height: float, weight: float, landAnimal: bool
    // Dog attributes: purpose: string, personality: string, longHaired: bool
    Dog dog = Dog(10, "FFFF00", 125.5, 25.5, true, "defensive", "playful", true);

    // Printing dog
    cout << "-----------------------------------------------------------------------------\n";
    cout << "--------------------------------------Dog------------------------------------\n";
    cout << "-----------------------------------------------------------------------------\n";
    cout << "Age: " << dog.getAge() << endl;
    cout << "Color: " << dog.getColor() << endl;
    cout << "Height: " << dog.getHeight() << endl;
    cout << "Weight: " << dog.getWeight() << endl;
    cout << "Land animal: " << dog.getLandAnimal() << endl;
    cout << "Purpose: " << dog.getPurpose() << endl;
    cout << "Personality: " << dog.getPersonality() << endl;
    cout << "Long haired: " << dog.getLongHaired() << endl;

    // Creating dachshund
    // Mammal attributes: age: int, color: int, height: float, weight: float, landAnimal: bool
    // Dog attributes: purpose: string, personality: string, longHaired: bool
    // Dachshund attributes: name: string
    Dachshund dachshund = Dachshund(5, "8B4513", 35.5, 5, true, "stress-relieving", "lazy", false, "Burek");

    // Printing dachshund
    cout << "-----------------------------------------------------------------------------\n";
    cout << "-----------------------------------Dachshund---------------------------------\n";
    cout << "-----------------------------------------------------------------------------\n";
    cout << "Age: " << dachshund.getAge() << endl;
    cout << "Color: " << dachshund.getColor() << endl;
    cout << "Height: " << dachshund.getHeight() << endl;
    cout << "Weight: " << dachshund.getWeight() << endl;
    cout << "Land animal: " << dachshund.getLandAnimal() << endl;
    cout << "Purpose: " << dachshund.getPurpose() << endl;
    cout << "Personality: " << dachshund.getPersonality() << endl;
    cout << "Long haired: " << dachshund.getLongHaired() << endl;
    cout << "Name: " << dachshund.getName() << endl;

    return 0;
}
