#pragma once
#include "Animal.h"

class AnimalsInZoo {
public:
	 AnimalsInZoo();  
	 AnimalsInZoo(const Animal& a);
	 ~AnimalsInZoo();
	 
	 void display() const; 
	 
private: 
	int numAnimals; 
	Animal animal; 
	
	};
