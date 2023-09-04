//
// Created by aymeric on 01/09/23.
//

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <math.h>

class ScalarConverter {
public:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &src);
	ScalarConverter &operator=(const ScalarConverter &rhs);
	void convert(char *c);
	void conv_char(char *c);
	void conv_int(char *c);
	void conv_float(char *c);
	void conv_double(char *c);
};

#endif //SCALARCONVERTER_HPP