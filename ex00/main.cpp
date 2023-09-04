#include "ScalarConverter.hpp"
#include <iostream>

int main(int argc, char **argv) {
	ScalarConverter t;

	if (argc != 2)
	{
		std::cerr << "Bad args numbers !" << std::endl;
		return 0;
	}
	t.convert(argv[1]);
	return 0;
}