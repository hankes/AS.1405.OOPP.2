#include "stdafx.h"
#include "Base.h"


Base::Base()
{
}


Base::~Base()
{
}

void Base::printUsual() {
	cout << "This is a regular function (base)" << endl;
}

void Base::printVirtual() {
	cout << "This is a virtual function (base)" << endl;
}