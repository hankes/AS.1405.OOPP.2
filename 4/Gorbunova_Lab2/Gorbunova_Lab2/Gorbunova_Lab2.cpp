// Gorbunova_Lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Base.h"
#include "Deriver.h"



int _tmain(int argc, _TCHAR* argv[])
{
	Base* bObj = new Base;
	Deriver* eObj = new Deriver;
	Base* b2Obj = eObj;
	Deriver* e2Obj = static_cast<Deriver*>(b2Obj);

	cout << "Method calls the basic class:" << endl;
	bObj->printUsual();
	bObj->printVirtual();
	cout << endl;

	cout << "Method calls the derive class:" << endl;
	eObj->printUsual();
	eObj->printVirtual();
	cout << endl;

	cout << "Method calls the copy of basic class:" << endl;
	b2Obj->printUsual();
	b2Obj->printVirtual();
	cout << endl;

	cout << "Method calls the copy of derive-casted class:" << endl;
	e2Obj->printUsual();
	e2Obj->printVirtual();
	cout << endl;

	getchar();
	getchar();

	return 0;
}