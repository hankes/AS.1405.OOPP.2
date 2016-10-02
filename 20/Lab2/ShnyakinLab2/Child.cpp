#include "stdafx.h"
#include "Child.h"
#include <iostream>


Child::Child()
{
	
}


Child::~Child()
{
	
}

void Child::iamsimple() {
	std::cout << "Child simple function " << std::endl;
}

void Child::iamvirtual() {
	std::cout << "Child virtual function " << std::endl;
}