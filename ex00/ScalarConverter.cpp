//
// Created by aymeric on 01/09/23.
//

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {

}

ScalarConverter::~ScalarConverter() {

}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) {
	( void )rhs;
	return *this;
}

void ScalarConverter::convert(char* c) {
	std::cout << "char: ";
	ScalarConverter::conv_char(c);
	std::cout << std::endl;
	std::cout << "int: ";
	ScalarConverter::conv_int(c);
	std::cout << std::endl;
	std::cout << "float: ";
	ScalarConverter::conv_float(c);
	std::cout << std::endl;
	std::cout << "double: ";
	ScalarConverter::conv_double(c);
	std::cout << std::endl;
}

void ScalarConverter::conv_double(char *c) {
	std::string s(c);
	int p = 1;

	if (s.find('.') != std::string::npos)
		p = (s.length() - s.find('.')) - 1;
	std::cout << std::setprecision(p) << std::fixed;
	try {
		double ad = std::stod(s);
		std::cout << static_cast<double>(ad);
	}
	catch (const std::exception & exception)
	{
		if (strlen(c) == 1)
		{
			std::cout << static_cast<double>(c[0]);
		}
		else
			std::cout << "Impossible";
	}
}

void ScalarConverter::conv_float(char *c) {
	std::string s(c);
	int p = 1;

	if (s.find('.') != std::string::npos)
		p = (s.length() - s.find('.')) - 1;
	std::cout << std::setprecision(p) << std::fixed;
	try{
		double at = std::stod(s);
		std::cout << static_cast<float>(at);
		std::cout << "f" << std::fixed;
	}
	catch (const std::exception & exception)
	{
		if (strlen(c) == 1)
		{
			std::cout << static_cast<float>(c[0]);
			std::cout << "f" << std::fixed;
		}
		else
			std::cout << "Impossible";
	}
}

void ScalarConverter::conv_int(char *c) {
	std::string s(c);
	try{
		double ai = std::stod(s);
		if (ai < -2147483648 || ai > 2147483647 || std::isnan(ai))
		{
			std::cout << "Impossible";;
			return ;
		}
		std::cout << static_cast<int>(ai);
	}
	catch (const std::exception & exception)
	{
		if (strlen(c) == 1)
			std::cout << static_cast<int>(c[0]);
		else
			std::cout << "Impossible";
	}
}

void ScalarConverter::conv_char(char *c) {
	int ai = std::atoi(c);

	if (strlen(c) >= 11)
	{
		std::cout << "Impossible";
		return;
	}
	if ((ai >= 1 and ai <= 32) or (strlen(c) == 1 and c[0] == '0'))
	{
		std::cout << "Non displayable";
		return;
	}
	if (strlen(c) == 1 and ai == 0)
		std::cout << static_cast<char>(c[0]);
	else if (ai != 0 and ai <= 126 and ai >= 1)
		std::cout << static_cast<char>(ai);
	else
		std::cout << "Impossible";
}
