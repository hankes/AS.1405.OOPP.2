#include "stdafx.h"
#include <iostream>
#include "vasilevsky_child.h"

using namespace std;

Vasilevsky_child::Vasilevsky_child()
{

}

Vasilevsky_child::~Vasilevsky_child()
{

}

void Vasilevsky_child::simple_f()
{
	cout << "Simple child\n";
}

void Vasilevsky_child::virtual_f()
{
	cout << "Virtual child\n\n";
}