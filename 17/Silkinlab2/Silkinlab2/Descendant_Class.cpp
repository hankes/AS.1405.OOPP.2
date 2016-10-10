#include "stdafx.h"
#include "Descendant_Class.h"
#include <iostream>


Descendant_Class::Descendant_Class()
{
}

void Descendant_Class::Function()
{
	std::cout << "Простая функция класса-потомка\n";
}

void Descendant_Class::V_Function()
{
	std::cout << "Виртуальная функция класса-потомка\n";
}

Descendant_Class::~Descendant_Class()
{
}
