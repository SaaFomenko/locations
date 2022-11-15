#include <fstream>
#include "define.h"

void initObj(location* locations, int size, std::ifstream* fin)
{
	for (int i = 0; i < size; ++i)
	{
		*fin >> locations[i].city;
		*fin >> locations[i].street;
		*fin >> locations[i].house;
		*fin >> locations[i].flat;
		*fin >> locations[i].index;
	}
}
