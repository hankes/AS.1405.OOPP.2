#pragma once
#include "Base_Class.h"
class Descendant_Class :
	public Base_Class
{
public:
	void Function();
	virtual void V_Function();
	Descendant_Class();
	~Descendant_Class();
};

