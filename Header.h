#ifndef HEADER_H
#define HEADER_H 

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <sstream>

inline int I() { return 5; }


const bool b = true;

typedef std::map<std::string, std::vector<unsigned int>> MapV;
typedef std::pair<std::string, std::vector<unsigned int>>  PairV;
typedef std::pair<MapV::iterator, bool> MapPairV;

void Replace(std::string&, std::vector<char>&, const char&);
void Spausdinti(MapV&);


#endif