#include "Aspirant.h"
#include <iostream>

Aspirant::Aspirant(std::string n, unsigned short a, std::string c, std::string l_p) : Student(n, a, c)
{
	this->language_project = l_p;
}

void Aspirant::Aspirant_Info() const
{
	Student::Student_Info();
	std::cout << "Language project: " << language_project << std::endl;
}