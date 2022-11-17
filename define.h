#include <string>
#include <fstream>

struct lable_location
{
	const std::string city = "Город: ";
	const std::string street = "Улица: ";
	const std::string house = "Номер дома: ";
	const std::string flat = "Номер квартиры: ";
	const std::string index = "Индекс: ";
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
