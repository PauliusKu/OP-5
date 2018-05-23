#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <algorithm>
#include <functional>


typedef std::map<std::string, unsigned int> Map;
typedef std::pair<std::string, unsigned int>  Pair;
typedef std::pair<Map::iterator, bool> MapPair;

template<class ForwardIt, class T>
void Replace(ForwardIt first, ForwardIt last,
	const T& old_value0, const T& old_value1,
	const T& old_value2, const T& old_value3,
	const T& old_value4, const T& old_value5,
	const T& old_value6, const T& old_value7,
	const T& old_value8, const T& old_value9,
	const T& new_value)
{
	for (; first != last; ++first) {
		if (*first == old_value0) {
			*first = new_value;
		}
		else if (*first == old_value1)
		{
			*first = new_value;
		}
		else if (*first == old_value2)
		{
			*first = new_value;
		}
		else if (*first == old_value3)
		{
			*first = new_value;
		}
		else if (*first == old_value4)
		{
			*first = new_value;
		}
		else if (*first == old_value5)
		{
			*first = new_value;
		}
		else if (*first == old_value6)
		{
			*first = new_value;
		}
		else if (*first == old_value7)
		{
			*first = new_value;
		}
		else if (*first == old_value8)
		{
			*first = new_value;
		}
		else if (*first == old_value9)
		{
			*first = new_value;
		}
	}
}



int main()
{
	setlocale(LC_ALL, "Lithuanian");

	Map mymap;
	std::string input{};
	std::ifstream myfile("input8.txt");
	for (unsigned int i = 0; !myfile.eof(); i++)
	{
		std::getline(myfile, input);
		Replace(input.begin(), input.end(), 44, 46, 45, 58, 63, 33, 59, 34, 40, 41, 32);
		unsigned int size = 0;
		for ( int itback = 0; itback != input.size(); itback++)
		{

			if ((unsigned int)input[itback] == 32)
			{
				if (size != 0)
				{
					MapPair ret;
					//std::cout << input.substr(itback - size, size) << std::endl;
					ret = mymap.insert(Pair(input.substr(itback - size, size), 1));
					if (ret.second == false) {
						//std::cout << ret.first->first << " element already existed";
						//std::cout << " with a value of " << ret.first->second << '\n';
						ret.first->second++;
					}
				}
				size = 0;
			}
			else size++;
		}
	}

	std::cout << "------------------" << std::endl;
	for (auto & itr : mymap)
	{
		if (itr.second > 0)
		{
			std::cout << itr.first << " " << itr.second << std::endl;
		}
	}

	system("pause");
	return 0;
}