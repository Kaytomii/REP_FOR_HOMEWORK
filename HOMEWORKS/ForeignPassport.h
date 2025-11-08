#pragma once
#include <string>
#include "Passport.h"

class ForeignPassport : public Passport
{
private:
	std::string country_visa;
	unsigned int foreign_passport_number;

public:
	ForeignPassport(std::string n, std::string p_c, unsigned short a, std::string b_d, unsigned int tos, std::string c_v, unsigned int fpn);

	void ForeignPassport_Info() const;
};

