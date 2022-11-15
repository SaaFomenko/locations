#include <iostream>
#include <fstream>
#include "define.h"

int countRowFile(std::ifstream* fin)
{
	int row_count = 0;
	std::string row;

	while(std::getline(*fin, row))
	{
		++row_count;
	}

	fin->clear();
	fin->seekg(0);

	return row_count;
}
