#include <iostream>
#include "define.h"

void objOut(location* locations, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << locations[i].city_lable << locations[i].city << std::endl;
		std::cout << locations[i].street_lable << locations[i].street << std::endl;
		std::cout << locations[i].house_lable << locations[i].house << std::endl;
		std::cout << locations[i].flat_lable << locations[i].flat << std::endl;
		std::cout << locations[i].index_lable << locations[i].index << std::endl;

		std::cout << std::endl;
	}
}
