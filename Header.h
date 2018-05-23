#ifndef HEADER_H
#define HEADER_H 

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <algorithm>
#include <functional>
#include <vector>

typedef std::map<std::string, unsigned int> Map;
typedef std::pair<std::string, unsigned int>  Pair;
typedef std::map<std::string, std::vector<unsigned int>> MapV;
typedef std::pair<std::string, std::vector<unsigned int>>  PairV;
typedef std::pair<Map::iterator, bool> MapPair;
typedef std::pair<MapV::iterator, bool> MapPairV;

void Replace(std::string &S, std::vector<char> &V, const char& new_value);

#endif