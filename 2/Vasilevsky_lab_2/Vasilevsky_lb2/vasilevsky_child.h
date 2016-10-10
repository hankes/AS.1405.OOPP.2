#pragma once
#include "vasilevsky_parent.h"

class Vasilevsky_child :public Vasilevsky_parent
{

public :
	Vasilevsky_child();
	~Vasilevsky_child();
	void simple_f();
	virtual void virtual_f();

};