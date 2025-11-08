#pragma once
#include <string>

class Passport
{
protected:
	std::string name;
	std::string passport_country;
	unsigned short age;
	std::string birth_date;
	unsigned int time_of_stay;

public:
	Passport();
	Passport(std::string n, std::string p_c, unsigned short a, std::string b_d, unsigned int tos);

	void Passport_Info() const;
};

