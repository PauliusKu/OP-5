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

void Spausdinti(MapV & mymapV, unsigned int n, unsigned int lenght)
{
	std::cout << "Þodþiu rodyklë: " << std::endl;
	for (auto & itr : mymapV)
	{
		if (itr.second[0] > n-1)
		{
			size_t size = itr.second.size();
			if (itr.second.size() > 2)
			{
				std::cout << std::setw(lenght) << std::left << itr.first << " pasikartoja " << itr.second[0] << " kartø(kartus) eilutëse: ";
			}
			else {
				std::cout << std::setw(lenght) << std::left << itr.first << " yra " << itr.second[0] << " kartà                 eilutëje: ";
			}
			for (size_t i = 1; i < itr.second.size(); i++)
			{
				std::cout << itr.second[i] << " ";
			}
			std::cout << std::endl;
		}
	}
}

unsigned int intFromString(int a, int b, std::string msg)
{

	do {
		try {
			std::cout << msg << std::endl;
			std::cin.exceptions(std::ifstream::failbit);
			int c{};
			std::string num{};
			std::getline(std::cin, num);

			if (num == "")
			{
				throw std::invalid_argument("nothing_here");
			}
			for (unsigned int i = 0; i < num.size(); i++)
			{
				if (((int)num[i] < 45 || (int)num[i] > 57) || ((int)num[i] > 45 && (int)num[i] < 48))
				{
					throw std::invalid_argument("bad_input");
				}
			}
			if (num.size() > 9)
			{
				throw std::invalid_argument("too big number");
			}
			c = std::stoi(num);
			if (c >= a && c <= b)
			{
				return c;
			}
			else throw std::invalid_argument("too_big/small_number");

		}
		catch (std::invalid_argument& e)
		{
			std::cout << e.what() << std::endl;
		}
	} while (true);
}