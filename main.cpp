#include <iostream>
#include "define.h"

const std::string lable_location::city = "Город: ";
const std::string lable_location::street = "Улица: ";
const std::string lable_location::house = "Номер дома: ";
const std::string lable_location::flat = "Номер квартиры: ";
const std::string lable_location::index = "Индекс: ";

int main()
{
	const char* in_file = { "./in.txt" };

	std::ifstream fin = fileIn(in_file);
	bool check = fin.is_open();
	if (!check) return 1;

	int size = countRowFile(&fin);

	location locations[size];
	
	initObj(locations, size, &fin);
	fin.close();

	objOut(locations, size);

	return 0;
}
