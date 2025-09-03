#include "Animal.h" 
#include <iostream>

//default constructor 
Animal::Animal() : name(""), year(0) {}

//parameterized constructor 
Animal::Animal(const std::string& name, int year) {
	this->name = name; 
	this->year = year;
	}
//destructor
Animal::~Animal() {}
void Animal::display() const{
	std::cout << name << " [" << year << "]" << std::endl;
	}
	 
