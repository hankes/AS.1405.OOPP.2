#pragma once
#include "kochuev_basic.h"
class kochuev_child :public kochuev_basic
{
public:
	int p = 1212;
	kochuev_child();
	~kochuev_child();
	void simp();
	void virt();
};

