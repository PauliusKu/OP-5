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