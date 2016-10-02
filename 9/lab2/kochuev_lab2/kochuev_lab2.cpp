// kochuev_lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "kochuev_basic.h"
#include "kochuev_child.h"
#include <iostream>

int main()
{
	kochuev_basic * basic = new kochuev_basic();
	kochuev_child * child = new kochuev_child();
	kochuev_basic * basic2 = child;
	kochuev_child * child2 = static_cast<kochuev_child*>(basic2);


	basic->simp();
	basic->virt();

	child->simp();
	child->virt();


	basic2->simp();
	basic2->virt();


	child2->simp();
	child2->virt();


	return 0;
}
