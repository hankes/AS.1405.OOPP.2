// ShnyakinLab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Parent.h"
#include "Child.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	Parent * parent = new Parent();
	Child * child = new Child();
	Parent * parent1 = child;
	Child * child1 = static_cast<Child*>(parent1);
	
	std::cout << parent1->p << std::endl;

	parent->iamsimple();
	parent->iamvirtual();
	std::cout << std::endl;

	child->iamsimple();
	child->iamvirtual();

	std::cout << std::endl;

	parent1->iamsimple();
	parent1->iamvirtual();
	std::cout << std::endl;


	child1->iamsimple();
	child1->iamvirtual();
	std::cout << std::endl;


	return 0;
}

