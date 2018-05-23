#include "Header.h"



int main()
{
	setlocale(LC_ALL, "Lithuanian");
	MapV mymapV;
	std::vector<char> CharVect{ '—', ',', '.', '?', '!', ':', ';', '"', '„', '“', '…', '(', ')', '\\' };
	std::string input{};
	std::ifstream myfile("input8.txt");
	for (unsigned int i = 0; !myfile.eof(); i++)
	{
		std::getline(myfile, input);
		input.push_back(' ');
		std::transform(input.begin(), input.end(), input.begin(), ::tolower);
		Replace(input, CharVect, ' ');

		unsigned int size = 0;
		for ( int itback = 0; itback != input.size(); itback++)
		{

			if ((unsigned int)input[itback] == 32)
			{
				if (size > 18)
				{
					MapPairV retV;
					retV = mymapV.insert(PairV(input.substr(itback - size, size), 1));
					retV.first->second.push_back(i + 1);
					retV.first->second[0]++;
				}
				size = 0;
			}
			else size++;
		}
	}

	std::cout << "------------------" << std::endl;
	for (auto & itr : mymapV)
	{
		if (itr.second[0] > 0)
		{
			std::cout << itr.first << " ";
			for (auto & itr2 : itr.second)
			{
				std::cout << itr2 << " ";
			}
			std::cout << std::endl;
		}
	}

	system("pause");
	return 0;
}