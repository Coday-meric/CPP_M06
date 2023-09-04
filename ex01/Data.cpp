//
// Created by aymeric on 04/09/23.
//

#include "Data.hpp"

Data::Data() : _count(1) {

}

Data::~Data() {

}

Data::Data(const Data &src) : _count(0) {}

Data &Data::operator=(const Data &rhs) {
	(void)rhs;
	return *this;
}

void Data::inc() {
	_count++;
}