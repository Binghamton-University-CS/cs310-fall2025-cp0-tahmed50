#include "AnimalsInZoo.h"
#include <iostream>
//default
AnimalsInZoo::AnimalsInZoo() : numAnimals(0), animal() {}
//one animal construct
AnimalsInZoo::AnimalsInZoo(const Animal& a) : numAnimals(1), animal(a) {}
//destructor 
AnimalsInZoo::~AnimalsInZoo() {}

void AnimalsInZoo::display() const {
    std::cout << "Number of animals: " << numAnimals << std::endl;
    if (numAnimals == 1) {
        animal.display();
    }
}
