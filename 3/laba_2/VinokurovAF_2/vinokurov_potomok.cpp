#include "stdafx.h"
#include "vinokurov_potomok.h"
#include <iostream>

vinokurov_potomok::vinokurov_potomok()
{
}


vinokurov_potomok::~vinokurov_potomok()
{
}

void vinokurov_potomok::prostaya() {
	std::cout << "prostaya - potomok " << std::endl;
}

void vinokurov_potomok::virtualnaya() {
	std::cout << "virtualnaya - potomok" << std::endl << std::endl;;
}
