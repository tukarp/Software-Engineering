#include <iostream>

#include "Mammal.h"
#include "Dog.h"
#include "Dachshund.h"

using namespace std;

int main() {
    // Mammal
    int mammalAge = 15;
    string mammalColor = "808080";
    float mammalHeight = 50.5;
    float mammalWeight = 20.5;
    bool mammalLandAnimal = true;
    Mammal mammal = Mammal(mammalAge, mammalColor, mammalHeight, mammalWeight, mammalLandAnimal);

    cout << "-----------------------------------------------------------------------------\n";
    cout << "------------------------------------Mammal-----------------------------------\n";
    cout << "-----------------------------------------------------------------------------\n";
    cout << "Age: " << mammal.getAge() << endl;
    cout << "Color: " << mammal.getColor() << endl;
    cout << "Height: " << mammal.getHeight() << endl;
    cout << "Weight: " << mammal.getWeight() << endl;
    cout << "Land animal: " << mammal.getLandAnimal() << endl;

    // Dog
    int dogAge = 10;
    string dogColor = "FFFF00";
    float dogHeight = 125.5;
    float dogWeight = 25.5;
    bool dogLandAnimal = true;
    string dogPurpose = "defensive";
    string dogPersonality = "playful";
    bool dogLongHaired = true;
    Dog dog = Dog(
        dogAge,
        dogColor,
        dogHeight,
        dogWeight,
        dogLandAnimal,
        dogPurpose,
        dogPersonality,
        dogLongHaired
    );

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

    // Dachshund
    int dachshundAge = 5;
    string dachshundColor = "8B4513";
    float dachshundHeight = 35.5;
    float dachshundWeight = 5;
    bool dachshundLandAnimal = true;
    string dachshundPurpose = "stress-relieving";
    string dachshundPersonality = "lazy";
    bool dachshundLongHaired = false;
    string dachshundName = "Burek";
    Dachshund dachshund = Dachshund(
        dachshundAge,
        dachshundColor,
        dachshundHeight,
        dachshundWeight,
        dachshundLandAnimal,
        dachshundPurpose,
        dachshundPersonality,
        dachshundLongHaired,
        dachshundName
    );

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
