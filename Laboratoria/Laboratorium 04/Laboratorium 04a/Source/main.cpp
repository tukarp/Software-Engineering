#include <iostream>

#include "Cat.h"
#include "CareTaker.h"

using namespace std;

int main() {
    // Caretaker
    string careTakerName = "Jan";
    float careTakerHeight = 175.5;
    int careTakerAge = 40;
    string careTakerHobby = "Volleyball";
    bool careTakerCanTakeCareOfCat = true;
    CareTaker careTaker = CareTaker(
        careTakerName,
        careTakerHeight,
        careTakerAge,
        careTakerHobby,
        careTakerCanTakeCareOfCat
    );

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "---------------------------------------Caretaker---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Name: " << careTaker.getName() << endl;
    cout << "Height: " << careTaker.getHeight() << endl;
    cout << "Age: " << careTaker.getAge() << endl;
    cout << "Hobby: " << careTaker.getHobby() << endl;
    cout << "Can take care of cat: " << careTaker.getCanTakeCareOfCat() << endl;

    careTaker.takeCareOfYourHobby();
    careTaker.goShopping();
    cout << endl;

    // Cats
    string catName1 = "Miauczyslaw";
    string catColor1 = "White";
    int catAge1 = 3;
    bool isCatFed1 = false;
    bool isCatPetted1 = false;
    Cat cat1 = Cat(
        catName1,
        catColor1,
        catAge1,
        isCatFed1,
        isCatPetted1
    );

    string catName2 = "Garfield";
    string catColor2 = "Orange";
    int catAge2 = 2;
    bool isCatFed2 = true;
    bool isCatPetted2 = false;
    Cat cat2 = Cat(
        catName2,
        catColor2,
        catAge2,
        isCatFed2,
        isCatPetted2
    );

    string catName3 = "Mruczek";
    string catColor3 = "Grey";
    int catAge3 = 1;
    bool isCatFed3 = false;
    bool isCatPetted3 = true;
    Cat cat3 = Cat(
        catName3,
        catColor3,
        catAge3,
        isCatFed3,
        isCatPetted3
    );

    careTaker.attachCat(&cat1);
    careTaker.attachCat(&cat2);
    careTaker.attachCat(&cat3);
    cout << endl;

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------Cats-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << endl;

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------Cat1-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    careTaker.printCat(&cat1);

    cat1.getPetted();
    cat1.meow();
    cat1.purr();

    cout << "Is " << cat1.getName() << " fed?" << endl;
    cout << "Answer: " << cat1.getIsCatFed() << endl;
    cout << endl;

    cout << cat1.getName() << " is getting fed by " << careTaker.getName() << endl;
    cat1.setIsCatFed(careTaker.getCanTakeCareOfCat(), true);
    cout << endl;

    cout << "Is " << cat1.getName() << " fed?" << endl;
    cout << "Answer: " << cat1.getIsCatFed() << endl;
    cout << endl;

    cout << "Is " << cat1.getName() << " pet?" << endl;
    cout << "Answer: " << cat1.getIsCatPetted() << endl;
    cout << endl;

    cout << cat1.getName() << " is getting pet by " << careTaker.getName() << endl;
    cat1.setIsCatPetted(careTaker.getCanTakeCareOfCat(), true);
    cout << endl;

    cout << "Is " << cat1.getName() << " pet?" << endl;
    cout << "Answer: " << cat1.getIsCatPetted() << endl;
    cout << endl;

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------Cat2-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    careTaker.printCat(&cat2);

    cat2.getPetted();
    cat2.meow();
    cat2.purr();
    cout << endl;

    cout << "Is " << cat2.getName() << " fed?" << endl;
    cout << "Answer: " << cat2.getIsCatFed() << endl;
    cout << endl;

    cout << cat2.getName() << " is getting fed by " << careTaker.getName() << endl;
    cat2.setIsCatFed(careTaker.getCanTakeCareOfCat(), true);
    cout << endl;

    cout << "Is " << cat2.getName() << " fed?" << endl;
    cout << "Answer: " << cat2.getIsCatFed() << endl;
    cout << endl;

    cout << "Is " << cat2.getName() << " pet?" << endl;
    cout << "Answer: " << cat2.getIsCatPetted() << endl;
    cout << endl;

    cout << cat2.getName() << " is getting pet by " << careTaker.getName() << endl;
    cat2.setIsCatPetted(careTaker.getCanTakeCareOfCat(), true);
    cout << endl;

    cout << "Is " << cat2.getName() << " pet?" << endl;
    cout << "Answer: " << cat2.getIsCatPetted() << endl;
    cout << endl;

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------Cat3-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    careTaker.printCat(&cat3);

    cat3.getPetted();
    cat3.meow();
    cat3.purr();
    cout << endl;

    cout << "Is " << cat3.getName() << " fed?" << endl;
    cout << "Answer: " << cat3.getIsCatFed() << endl;
    cout << endl;

    cout << cat3.getName() << " is getting fed by " << careTaker.getName() << endl;
    cat3.setIsCatFed(careTaker.getCanTakeCareOfCat(), true);
    cout << endl;

    cout << "Is " << cat3.getName() << " fed?" << endl;
    cout << "Answer: " << cat3.getIsCatFed() << endl;
    cout << endl;

    cout << "Is " << cat3.getName() << " pet?" << endl;
    cout << "Answer: " << cat3.getIsCatPetted() << endl;
    cout << endl;

    cout << cat3.getName() << " is getting pet by " << careTaker.getName() << endl;
    cat3.setIsCatPetted(careTaker.getCanTakeCareOfCat(), true);
    cout << endl;

    cout << "Is " << cat3.getName() << " pet?" << endl;
    cout << "Answer: " << cat3.getIsCatPetted() << endl;
    cout << endl;

    careTaker.detachCat(&cat1);
    careTaker.detachCat(&cat2);
    careTaker.detachCat(&cat3);

    return 0;
}
