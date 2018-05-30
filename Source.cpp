#include "Header.h"



int main()
{
	setlocale(LC_ALL, "Lithuanian");
	MapV mymapV;
	std::vector<char> CharVect{'—','-',',', '.', '?', '!', ':', ';', '"', '„', '“', '…', '(', ')', '\\', '\'', '{', '}', '*', '#' };
	std::string input{};
	std::ifstream myfile("input5.txt");
	for (unsigned int i = 0; !myfile.eof(); i++)
	{
		std::getline(myfile, input);
		std::transform(input.begin(), input.end(), input.begin(), ::tolower);
		Replace(input, CharVect, ' ');
		std::stringstream ss(input);

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

	Spausdinti(mymapV, intFromString(1, 10000000, " Áveskite, kiek kartu þodis turi pasikartoti tekste:"));
	system("pause");
	return 0;
}