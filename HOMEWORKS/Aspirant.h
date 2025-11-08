#pragma once
#include <string>
#include "Student.h"

class Aspirant : public Student
{
private:
	std::string language_project;

public:
	Aspirant(std::string n, unsigned short a, std::string c, std::string l_p);

	void Aspirant_Info() const;
};

