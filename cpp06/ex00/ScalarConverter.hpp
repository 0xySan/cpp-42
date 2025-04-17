#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include <cstdlib>
#include <cmath>

class ScalarConverter
{
	private:
		ScalarConverter();
	public:
		static void convert(std::string &objs);
};

#endif