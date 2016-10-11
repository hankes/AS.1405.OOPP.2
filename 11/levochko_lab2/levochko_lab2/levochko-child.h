#pragma once
#include "levochko-parent.h"

class Levochko_child :public Levochko_parent
{

public:
	Levochko_child();
	~Levochko_child();
	void simple();
	virtual void virtuall();

};