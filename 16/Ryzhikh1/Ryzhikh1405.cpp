
#include "stdafx.h"
#include "RyzhikhBasicClass.h"
#include "RyzhikhExtendedClass.h"


int _tmain(int argc, _TCHAR* argv[])
{
	RyzhikhBasicClass* bObj = new RyzhikhBasicClass;
	RyzhikhExtendedClass* eObj = new RyzhikhExtendedClass;
	RyzhikhBasicClass* b2Obj = eObj;
	RyzhikhExtendedClass* e2Obj = static_cast<RyzhikhExtendedClass*>(b2Obj);

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

