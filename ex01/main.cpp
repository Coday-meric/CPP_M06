#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main( void )
{
	Data *data = new Data;
	Serializer c;


	std::cout << "CNT: " << c.deserialize( c.serialize( data ) )->_count << std::endl;

	delete data;

	return EXIT_SUCCESS;
}