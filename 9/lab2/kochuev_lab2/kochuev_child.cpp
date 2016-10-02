#include "stdafx.h"
#include "kochuev_child.h"
#include <iostream>

kochuev_child::kochuev_child()
{
}


kochuev_child::~kochuev_child()
{
}

void kochuev_child::simp() {
	std::cout << "simple,child " << std::endl;
}

void kochuev_child::virt() {
	std::cout << "virtual,child " << std::endl << std::endl;;
}