#include <iostream>
#include "define.h"

void objOut(location* locations, int size)
{
	lable_location lable;

	for (int i = 0; i < size; ++i)
	{
		std::cout << lable.city << locations[i].city << std::endl;
		std::cout << lable.street << locations[i].street << std::endl;
		std::cout << lable.house << locations[i].house << std::endl;
		std::cout << lable.flat << locations[i].flat << std::endl;
		std::cout << lable.index << locations[i].index << std::endl;

		std::cout << std::endl;
	}
}
