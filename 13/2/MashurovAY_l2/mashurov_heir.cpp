#include "stdafx.h"
#include "mashurov_heir.h"
#include <iostream>

mashurov_heir::mashurov_heir()
{
	a = 0;
}


mashurov_heir::~mashurov_heir()
{
}

void mashurov_heir::simple_func() {
	std::cout << "simple - heir " << a << std::endl;
}

void mashurov_heir::virtual_func() {

	std::cout << "virtual - heir" << a << std::endl;;
}
