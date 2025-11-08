#include <iostream>
#include "Passport.h"
#include "ForeignPassport.h"

int main()
{
	setlocale(LC_ALL, "");

	ForeignPassport foreign_passport{ "Test1", "Ukraine", 18, "09.20.2006", 10, "China", 31230301 };
	foreign_passport.ForeignPassport_Info();

	return 0;
}