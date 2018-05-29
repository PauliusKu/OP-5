#include "Header.h"



int main()
{
	setlocale(LC_ALL, "Lithuanian");
	MapV mymapV;
	std::vector<char> CharVect{'—','-',',', '.', '?', '!', ':', ';', '"', '„', '“', '…', '(', ')', '\\', '\'', '{', '}', '*', '#' };
	std::string input{};
	std::ifstream myfile("input8.txt");
	for (unsigned int i = 0; !myfile.eof(); i++)
	{
		std::getline(myfile, input);
		std::transform(input.begin(), input.end(), input.begin(), ::tolower);
		Replace(input, CharVect, ' ');
		std::stringstream ss(input);

		unsigned int size = 0;
		std::string word;
		while (ss >> word)
		{
			word[0] = toupper((int)word[0]);
			MapPairV retV;
			retV = mymapV.insert(PairV(word, 1));
			retV.first->second.push_back(i + 1);
			retV.first->second[0]++;
		}
	}

	Spausdinti(mymapV);
	system("pause");
	return 0;
}