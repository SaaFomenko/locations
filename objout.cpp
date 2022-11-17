#include <iostream>
#include "define.h"

void objOut(location* locations, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << lable_location::city << locations[i].city << std::endl;
		std::cout << lable_location::street << locations[i].street << std::endl;
		std::cout << lable_location::house << locations[i].house << std::endl;
		std::cout << lable_location::flat << locations[i].flat << std::endl;
		std::cout << lable_location::index << locations[i].index << std::endl;

		std::cout << std::endl;
	}
}
