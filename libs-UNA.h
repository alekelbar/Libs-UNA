#pragma once
#include <iostream>
#include <string.h>
#include <sstream>

template<typename T>
std::string intToString(T num) {
	std::stringstream ss;
	ss << num;
	return ss.str();
}

int stringToInt(std::string text);