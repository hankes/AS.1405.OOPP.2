// Silkinlab2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Descendant_Class.h"
#include "Base_Class.h"
#include "Windows.h"
#include "iostream"

int _tmain(int argc, _TCHAR* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Base_Class base;
	Descendant_Class desc;
	Base_Class *p = &base; //указатель на базовый класс, которому присвоен объект базового класса;
	Descendant_Class *v_p = &desc;//указатель на производный класс, которому присвоен объект производного класса;
	Base_Class *p1 = &desc; //указатель на базовый класс, которому присвоен объект из второго указателя;
	Descendant_Class *v_p1 = static_cast<Descendant_Class*>(p1); // преобразование указателя на базовый класс к указателю на производный класс.
	p->Function();
	p->V_Function();
	std::cout << std::endl;

	v_p->Function();
	v_p->V_Function();
	std::cout << std::endl;

	p1->Function();
	p1->V_Function();
	std::cout << std::endl;

	v_p1->Function();
	v_p1->V_Function();
	std::cout << std::endl;

	system("pause");
			
	return 0;
}

