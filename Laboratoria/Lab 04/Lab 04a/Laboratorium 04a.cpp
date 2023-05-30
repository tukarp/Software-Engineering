#include <iostream>
#include "Cat.h"
#include "CareTaker.h"

using namespace std;

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
    cout << endl;

    // Creating cats
    // Cat parameters: name: string, color: string, age: int, isCatFed: bool, isCatPetted: bool
    Cat cat1 = Cat("Miauczyslaw", "White", 3, false, false);
    Cat cat2 = Cat("Garfield", "Orange", 2, true, false);
    Cat cat3 = Cat("Mruczek", "Grey", 1, false, true);

    // Attaching cats to caretaker
    careTaker.attachCat(&cat1);
    careTaker.attachCat(&cat2);
    careTaker.attachCat(&cat3);
    cout << endl;

    // Printing cats
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------Cats-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << endl;

    // Printing cat1
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------Cat1-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    careTaker.printCat(&cat1);

    // Cat1 methods
    cat1.getPetted();
    cat1.meow();
    cat1.purr();

    // Feeding cat1
    cout << "Is " << cat1.getName() << " fed?" << endl;
    cout << "Answer: " << cat1.getIsCatFed() << endl;
    cout << endl;

    cout << cat1.getName() << " is getting fed by " << careTaker.getName() << endl;
    cat1.setIsCatFed(careTaker.getCanTakeCareOfCat(), true);
    cout << endl;

    cout << "Is " << cat1.getName() << " fed?" << endl;
    cout << "Answer: " << cat1.getIsCatFed() << endl;
    cout << endl;

    // Petting cat1
    cout << "Is " << cat1.getName() << " pet?" << endl;
    cout << "Answer: " << cat1.getIsCatPetted() << endl;
    cout << endl;

    cout << cat1.getName() << " is getting pet by " << careTaker.getName() << endl;
    cat1.setIsCatPetted(careTaker.getCanTakeCareOfCat(), true);
    cout << endl;

    cout << "Is " << cat1.getName() << " pet?" << endl;
    cout << "Answer: " << cat1.getIsCatPetted() << endl;
    cout << endl;

    // Printing cat2
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------Cat2-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    careTaker.printCat(&cat2);

    // Cat2 methods
    cat2.getPetted();
    cat2.meow();
    cat2.purr();
    cout << endl;

    // Feeding cat2
    cout << "Is " << cat2.getName() << " fed?" << endl;
    cout << "Answer: " << cat2.getIsCatFed() << endl;
    cout << endl;

    cout << cat2.getName() << " is getting fed by " << careTaker.getName() << endl;
    cat2.setIsCatFed(careTaker.getCanTakeCareOfCat(), true);
    cout << endl;

    cout << "Is " << cat2.getName() << " fed?" << endl;
    cout << "Answer: " << cat2.getIsCatFed() << endl;
    cout << endl;

    // Petting cat2
    cout << "Is " << cat2.getName() << " pet?" << endl;
    cout << "Answer: " << cat2.getIsCatPetted() << endl;
    cout << endl;

    cout << cat2.getName() << " is getting pet by " << careTaker.getName() << endl;
    cat2.setIsCatPetted(careTaker.getCanTakeCareOfCat(), true);
    cout << endl;

    cout << "Is " << cat2.getName() << " pet?" << endl;
    cout << "Answer: " << cat2.getIsCatPetted() << endl;
    cout << endl;

    // Printing cat3
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------Cat3-----------------------------------------\n";
    cout << "---------------------------------------------------------------------------------------\n";
    careTaker.printCat(&cat3);

    // Cat3 methods
    cat3.getPetted();
    cat3.meow();
    cat3.purr();
    cout << endl;

    // Feeding cat3
    cout << "Is " << cat3.getName() << " fed?" << endl;
    cout << "Answer: " << cat3.getIsCatFed() << endl;
    cout << endl;

    cout << cat3.getName() << " is getting fed by " << careTaker.getName() << endl;
    cat3.setIsCatFed(careTaker.getCanTakeCareOfCat(), true);
    cout << endl;

    cout << "Is " << cat3.getName() << " fed?" << endl;
    cout << "Answer: " << cat3.getIsCatFed() << endl;
    cout << endl;

    // Petting cat3
    cout << "Is " << cat3.getName() << " pet?" << endl;
    cout << "Answer: " << cat3.getIsCatPetted() << endl;
    cout << endl;

    cout << cat3.getName() << " is getting pet by " << careTaker.getName() << endl;
    cat3.setIsCatPetted(careTaker.getCanTakeCareOfCat(), true);
    cout << endl;

    cout << "Is " << cat3.getName() << " pet?" << endl;
    cout << "Answer: " << cat3.getIsCatPetted() << endl;
    cout << endl;

    // Detaching cats from caretaker
    careTaker.detachCat(&cat1);
    careTaker.detachCat(&cat2);
    careTaker.detachCat(&cat3);

    return 0;
}
