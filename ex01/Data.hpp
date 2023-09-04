//
// Created by aymeric on 04/09/23.
//

#ifndef DATA_HPP
#define DATA_HPP


class Data {
public:
	Data();
	~Data();
	Data(const Data & src);
	Data & operator=(const Data & rhs);
	void inc();
	int _count;
};

#endif //DATA_HPP
