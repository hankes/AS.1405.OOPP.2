// levochko_lab2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include "levochko-parent.h"
#include "levochko-child.h"

using namespace std;


int main()
{
	Levochko_parent* parent = new Levochko_parent();
	Levochko_child* child = new Levochko_child();

	Levochko_parent* parent2 = child;
	Levochko_child* child2 = static_cast<Levochko_child*>(parent2);

	parent->simple();
	parent->virtuall();

	child->simple();
	child->virtuall();

	parent2->simple();
	parent2->virtuall ();

	child2->simple();
	child2->virtuall();



	return 0;
}