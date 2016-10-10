#include "stdafx.h"
#include <iostream>
#include "vasilevsky_parent.h"
#include "vasilevsky_child.h"

using namespace std;


int main()
{
	Vasilevsky_parent* parent = new Vasilevsky_parent();
	Vasilevsky_child* child = new Vasilevsky_child();

	Vasilevsky_parent* parent2 = child;
	Vasilevsky_child* child2 = static_cast<Vasilevsky_child*>(parent2);

	parent->simple_f();
	parent->virtual_f();

	child->simple_f();
	child->virtual_f();

	parent2->simple_f();
	parent2->virtual_f();

	child2->simple_f();
	child2->virtual_f();

	system("pause");

    return 0;
}

