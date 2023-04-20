#include "libs-UNA.h"

int stringToInt(std::string text) {
	std::stringstream ss;
	int value;
	ss << text;
	ss >> value;
	return value;
}