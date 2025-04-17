#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() { }

void ScalarConverter::convert(std::string &objs)
{
	char *s;
	double value = strtod(objs.c_str(), &s);
	if (std::isnan(value))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	else if (std::isinf(value))
	{
		if (value > 0)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: +inff" << std::endl;
			std::cout << "double: +inf" << std::endl;
		}
		else
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
		}
		return ;
	}
	if ((value || value == 0) && *s == '\0')
	{
		std::cout << "char: ";
		if ((value >= 32 && value <= 126))
			std::cout << static_cast<char>(value)<< std::endl;
		else if (value >= 0 && value <= 255)
			std::cout << "Non displayable\n";
		else
			std::cout << "impossible\n";
		std::cout << "int: ";
		if ((value <= std::numeric_limits<int>::max() && value >= std::numeric_limits<int>::min()))
			std::cout << static_cast<int>(value);
		else
			std::cout << "Impossible";
		std::cout << std::endl;
		if ((value > -1000000 && value < 1000000) && std::fmod(value, 1) == 0)
		{
			std::cout << "float: " <<  value << ".0f" <<std::endl;
			std::cout << "double: " << value << ".0" << std::endl;
		}
		else
		{
			std::cout << "float: " <<  value << "f" <<std::endl;
			std::cout << "double: " << value << std::endl;
		}
		return ;
	}
	s = nullptr;
	if (objs.length() == 1 && isprint(objs[0]) && isalpha(objs[0])){
		std::cout << "char: " << objs[0] << std::endl;
		std::cout << "int: " << static_cast<int>(objs[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(objs[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast <double> (objs[0]) <<std::endl;
		return ;
	}
	s = nullptr;
	long value1 = strtol(objs.c_str(), &s, 10);
	if((value1 || value1 == 0) && *s == '\0'){
		std::cout << "char: ";
		if ((value1>=32 && value1 <=126))
			std::cout <<  static_cast<char>(value1);
		else if (value1 >= 0 && value1 <= 255)
			std::cout << "Non displayable\n";
		else
			std::cout << "impossible\n";
		std::cout << std::endl << "int: ";
		if ((value1 <= std::numeric_limits<int>::max() && value1 >= std::numeric_limits<int>::min()))
			std::cout << static_cast<int> (value1);
		else
			std::cout << "Impossible";
		std::cout << std::endl;
		if ((value1 > -1000000 && value1 < 1000000) && std::fmod(value1, 1) == 0)
		{
			std::cout << "float: " <<  value1 << ".0f" <<std::endl;
			std::cout << "double: " << value1 << ".0" << std::endl;
		}
		else
		{
			std::cout << "float: " <<  value1 << "f" <<std::endl;
			std::cout << "double: " << value1 << std::endl;
		}
		return ;
	}
	s = nullptr;
	float value2 = strtof(objs.c_str(), &s);
	if ((value2 || value2 == 0) && *s == 'f'){
		std::cout << "char: ";
		if ((value2>=32 && value2 <=126))
			std::cout <<  static_cast<char>(value2)<< std::endl;
		else if (value2 >= 0 && value2 <= 255)
			std::cout << "Non displayable\n";
		else
			std::cout << "impossible\n";
		std::cout << "int: ";
		if ((value2 <= std::numeric_limits<int>::max() && value2 >= std::numeric_limits<int>::min()))
			std::cout << static_cast<int>(value2);
		else
			std::cout << "Impossible";
		std::cout << std::endl;
		if ((value2 > -1000000 && value2 < 1000000) && std::fmod(value2, 1) == 0)
		{
			std::cout << "float: " <<  value2 << ".0f" <<std::endl;
			std::cout << "double: " << value2 << ".0" << std::endl;
		}
		else
		{
			std::cout << "float: " <<  value2 << "f" <<std::endl;
			std::cout << "double: " << value2 << std::endl;
		}
		return ;
	}
	std::cout <<"char : impossible"<< std::endl;
	std::cout <<"int : impossible"<< std::endl;
	std::cout <<"float : nanf"<< std::endl;
	std::cout <<"double : nan"<< std::endl;
}