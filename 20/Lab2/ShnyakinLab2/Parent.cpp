#include "stdafx.h"
#include "Parent.h"
#include <iostream>

Parent::Parent()
{
	
}


Parent::~Parent()
{
	
}

void Parent::iamsimple() {
	std::cout << "Parent simple function " << std::endl;
}

void Parent::iamvirtual() {
	std::cout << "Parent virtual function " << std::endl;
}