//
// Created by aymeric on 04/09/23.
//

#include "Serializer.hpp"

Serializer::Serializer() {

}

Serializer::~Serializer() {

}

Serializer::Serializer(const Serializer &src) {

}

Serializer &Serializer::operator=(const Serializer &rhs) {
	(void) rhs;
	return *this;
}

uintptr_t Serializer::serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}