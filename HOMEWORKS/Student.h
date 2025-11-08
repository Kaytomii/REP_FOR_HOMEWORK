#pragma once
#include <string>

class Student
{
protected:
	std::string name;
	unsigned short age;
	std::string course;

public:
	Student();
	Student(std::string n, unsigned short a, std::string c);

	void Student_Info() const;
};