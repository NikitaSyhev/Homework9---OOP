#include "Class2.h"
#include <iostream>
Class2::Class2(int capacity) {
	std::cout << "New created: " << std::endl;
	_num = new int(capacity);
}

Class2::~Class2()
{
	std::cout << "Memory deleted: " << std::endl;
	delete _num;
}


