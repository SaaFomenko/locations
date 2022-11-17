#include <string>
#include <fstream>

struct lable_location
{
	static const std::string city;
	static const std::string street;
	static const std::string house;
	static const std::string flat;
	static const std::string index;
};

struct location
{
	std::string city = "none";
	std::string street = "none";
	int house = 0;
	int flat = 0;
	int index = 0;
};

std::ifstream fileIn(const char* path);
int countRowFile(std::ifstream* fin);
void initObj(location* locations, int size, std::ifstream* fin);
void objOut(location* locations, int size);
