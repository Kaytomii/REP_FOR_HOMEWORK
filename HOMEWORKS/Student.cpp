#include "Student.h"
#include <iostream>

Student::Student()
{
	this->name = "Noname";
	this->age = 0;
	this->course = "None";
}

Student::Student(std::string n, unsigned short a, std::string c)
{
	this->name = n;
	this->age = a;
	this->course = c;
}

void Student::Student_Info() const
{
	std::cout << "Name: " << name << std::endl
		<< "Age: " << age << std::endl
		<< "Course: " << course << std::endl;
}
