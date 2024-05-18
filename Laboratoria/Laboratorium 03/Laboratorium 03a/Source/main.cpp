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

    // Cat
    string catName = "Mruczek";
    string catColor = "Black";
    int catAge = 5;
    bool isCatFed = false;
    bool isCatPetted = false;
    Cat cat = Cat(
        catName,
        catColor,
        catAge,
        isCatFed,
        isCatPetted
    );

    cout << "---------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------Cat------------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Name: " << cat.getName() << endl;
    cout << "Color: " << cat.getColor() << endl;
    cout << "Age: " << cat.getAge() << endl;
    cout << "Is cat fed: " << cat.getIsCatFed() << endl;
    cout << "Is cat petted: " << cat.getIsCatPetted() << endl;
    cout << endl;

    cat.getPetted();
    cat.meow();
    cat.purr();
    cout << endl;

    cout << "Is " << cat.getName() << " fed?" << endl;
    cout << "Answer: " << cat.getIsCatFed() << endl;
    cout << endl;

    cout << cat.getName() << " is getting fed by " << careTaker.getName() << endl;
    cat.setIsCatFed(careTaker.getCanTakeCareOfCat(), true);
    cout << endl;

    cout << "Is " << cat.getName() << " fed?" << endl;
    cout << "Answer: " << cat.getIsCatFed() << endl;
    cout << endl;

    cout << "Is " << cat.getName() << " pet?" << endl;
    cout << "Answer: " << cat.getIsCatPetted() << endl;
    cout << endl;

    cout << cat.getName() << " is getting pet by " << careTaker.getName() << endl;
    cat.setIsCatPetted(careTaker.getCanTakeCareOfCat(), true);
    cout << endl;

    cout << "Is " << cat.getName() << " pet?" << endl;
    cout << "Answer: " << cat.getIsCatPetted() << endl;
    cout << endl;

    return 0;
}
