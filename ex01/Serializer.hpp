//
// Created by aymeric on 04/09/23.
//

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include "Data.hpp"
#include <cstdint>

class Serializer {
public:
	Serializer();
	~Serializer();
	Serializer(const Serializer & src);
	Serializer & operator=(const Serializer & rhs);
	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};


#endif //SERIALIZER_HPP
