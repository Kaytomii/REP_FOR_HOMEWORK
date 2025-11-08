#include "ForeignPassport.h"
#include "Passport.h"
#include <iostream>

ForeignPassport::ForeignPassport(std::string n, std::string p_c, unsigned short a, std::string b_d, unsigned int tos, std::string c_v, unsigned int fpn) : Passport(n, p_c, a, b_d, tos)
{
	this->country_visa = c_v;
	this->foreign_passport_number = fpn;
}

void ForeignPassport::ForeignPassport_Info() const
{
	Passport::Passport_Info();

	std::cout << "=============FOREIGN PASSPORT INFO=============" << std::endl;

	std::cout << "Country visa: " << country_visa << std::endl
		<< "Foreign passport number: " << foreign_passport_number << std::endl;

	std::cout << "===============================================" << std::endl;

}
