#include <iostream>
#include "Cat.h"
#include "CareTaker.h"

int main() {
    // Creating caretaker
    // Caretaker parameters: name: string, height: float, age: int, hobby: string, canTakeCareOfCat: bool
    CareTaker careTaker = CareTaker("Jan", 175.5, 40, "Volleyball", true);

    // Printing caretaker
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "---------------------------------------Caretaker---------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Name: " << careTaker.getName() << endl;
    cout << "Height: " << careTaker.getHeight() << endl;
    cout << "Age: " << careTaker.getAge() << endl;
    cout << "Hobby: " << careTaker.getHobby() << endl;
    cout << "Can take care of cat: " << careTaker.getCanTakeCareOfCat() << endl;

    // Caretaker methods
    careTaker.takeCareOfYourHobby();
    careTaker.goShopping();

    // Creating cat
    // Cat parameters: name: string, color: string, age: int, isCatFed: bool, isCatPetted: bool
    Cat cat = Cat("Mruczek", "Black", 5, false, false);

    // Printing cat
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------Cat------------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "Name: " << cat.getName() << endl;
    cout << "Color: " << cat.getColor() << endl;
    cout << "Age: " << cat.getAge() << endl;
    cout << "Is cat fed: " << cat.getIsCatFed() << endl;
    cout << "Is cat petted: " << cat.getIsCatPetted() << endl;
    cout << endl;

    // Cat methods
    cat.getPetted();
    cat.meow();
    cat.purr();
    cout << endl;

    // Feeding cat
    cout << "Is " << cat.getName() << " fed?" << endl;
    cout << "Answer: " << cat.getIsCatFed() << endl;
    cout << endl;

    cout << cat.getName() << " is getting fed by " << careTaker.getName() << endl;
    cat.setIsCatFed(careTaker.getCanTakeCareOfCat(), true);
    cout << endl;

    cout << "Is " << cat.getName() << " fed?" << endl;
    cout << "Answer: " << cat.getIsCatFed() << endl;
    cout << endl;

    // Petting cat
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
