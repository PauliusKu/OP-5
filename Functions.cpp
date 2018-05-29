#include "Header.h"

void Replace(std::string &S, std::vector<char> &V, const char& new_value)
{
	for (auto & itr : S)
	{
		for (auto & itr1 : V)
		{
			if (itr == itr1)
			{
				itr = new_value;
			}
		}
	}
}

void Spausdinti(MapV & mymapV)
{
	std::cout << "Þodþiu rodyklë: " << std::endl;
	for (auto & itr : mymapV)
	{
		if (itr.second[0] > 0)
		{
			size_t size = itr.second.size();
			if (itr.second.size() > 2)
			{
				if (itr.second[0] > 10)
				{
					std::cout << itr.first << " pasikartoja " << itr.second[0] << " kartø eilutëse: ";
				}
				else {
					std::cout << itr.first << " pasikartoja " << itr.second[0] << " kartus eilutëse: ";
				}
			}
			else {
				std::cout << itr.first << " yra " << itr.second[0] << " kartà eilutëje: ";
			}
			for (size_t i = 1; i < itr.second.size(); i++)
			{
				std::cout << itr.second[i] << " ";
			}
			std::cout << std::endl;
		}
	}
}