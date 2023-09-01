//
// Created by aymeric on 01/09/23.
//

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

class ScalarConverter {
public:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &src);
	ScalarConverter &operator=(const ScalarConverter &rhs);
	void convert(std::string number);
};

#endif //SCALARCONVERTER_HPP