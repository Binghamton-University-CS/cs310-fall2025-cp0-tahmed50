#pragma once
#include <string>
class Animal{
public: 
	Animal(); 
	Animal(const std::string& name, int year); 
	~Animal(); 
	void display() const;
private:
	std::string name; 
	int year; 
	};
