#include "Passport.h"
#include <iostream>

Passport::Passport()
{
	this->name = "Noname";
	this->passport_country = "Undefined country";
	this->age = 0;
	this->birth_date = "Without Date";
	this->time_of_stay = 0;
}

Passport::Passport(std::string n, std::string p_c, unsigned short a, std::string b_d, unsigned int tos)
{
	this->name = n;
	this->passport_country = p_c;
	this->age = a;
	this->birth_date = b_d;
	this->time_of_stay = tos;
}

void Passport::Passport_Info() const
{
	std::cout << "=============PASSPORT INFO=============" << std::endl;

	std::cout << "Name: " << name << std::endl
		<< "Passport country: " << passport_country << std::endl
		<< "Age: " << age << std::endl
		<< "Birth date: " << birth_date << std::endl
		<< "Time of stay: " << time_of_stay << std::endl;

	std::cout << "=======================================" << std::endl;
}
