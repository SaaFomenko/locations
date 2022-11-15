#include <string>
#include <fstream>

struct location
{
	std::string city_lable = "Город: ";
	std::string street_lable = "Улица: ";
	std::string house_lable = "Номер дома: ";
	std::string flat_lable = "Номер квартиры: ";
	std::string index_lable = "Индекс: ";

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
