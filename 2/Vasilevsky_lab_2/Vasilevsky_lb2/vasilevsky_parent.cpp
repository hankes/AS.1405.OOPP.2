#include "stdafx.h"
#include <iostream>
#include "Vasilevsky_parent.h"

using namespace std;

Vasilevsky_parent::Vasilevsky_parent()
{

}

Vasilevsky_parent::~Vasilevsky_parent()
{

}

void Vasilevsky_parent::simple_f()
{
	cout << "\nSimple parent\n";
}

void Vasilevsky_parent::virtual_f()
{
	cout << "Virtual parent\n\n";
}