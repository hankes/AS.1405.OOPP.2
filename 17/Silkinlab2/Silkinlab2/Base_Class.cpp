#include "stdafx.h"
#include "Base_Class.h"
#include <iostream>



Base_Class::Base_Class()
{
}

void Base_Class::Function()
{
	std::cout << "Простая функция базового класса\n";
}

void Base_Class::V_Function()
{
	std::cout << "Виртуальная функция базового класса\n";
}

Base_Class::~Base_Class()
{
}
