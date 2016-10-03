#pragma once
#include "GurinBasicClass.h"
class GurinExtendClass : public GurinBasicClass
{
public:
	GurinExtendClass();
	~GurinExtendClass();

	void  printUsual();
	void  printVirtual() override;
};

