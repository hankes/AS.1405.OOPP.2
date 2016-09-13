#pragma once
#include "Parent.h"
class Child: public Parent
{
public:
	int i = 321;
	void iamsimple();
	void iamvirtual();
	Child();
	~Child();
};

