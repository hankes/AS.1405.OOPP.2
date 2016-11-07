// DianaPonomareva.lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DianaPonomarevaBasicClass.h"
#include "DianaPonomarevaExtendClass.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	DianaPonomarevaBasicClass* bObj = new DianaPonomarevaBasicClass;
	DianaPonomarevaExtendClass* eObj = new DianaPonomarevaExtendClass;
	DianaPonomarevaBasicClass* b2Obj = eObj;
	DianaPonomarevaExtendClass* e2Obj = static_cast<DianaPonomarevaExtendClass*>(b2Obj);

	cout << "Method calls the base class:" << endl;
	bObj->printUsual();
	bObj->printVirtual();
	cout << endl;

	cout << "Method calls the extended class:" << endl;
	eObj->printUsual();
	eObj->printVirtual();
	cout << endl;

	cout << "Method calls the copy of base class:" << endl;
	b2Obj->printUsual();
	b2Obj->printVirtual();
	cout << endl;

	cout << "Method calls the copy of extended-casted class:" << endl;
	e2Obj->printUsual();
	e2Obj->printVirtual();
	cout << endl;

	getchar();
	getchar();

	return 0;
}