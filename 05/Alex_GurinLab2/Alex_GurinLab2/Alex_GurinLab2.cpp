// Alex_GurinLab2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "GurinBasicClass.h"
#include "GurinExtendClass.h"



int _tmain(int argc, _TCHAR* argv[])
{
	GurinBasicClass* bObj = new GurinBasicClass;
	GurinExtendClass* eObj = new GurinExtendClass;
	GurinBasicClass* b2Obj = eObj;
	GurinExtendClass* e2Obj = static_cast<GurinExtendClass*>(b2Obj);
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

