// MashurovAY_l2.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "mashurov_bas.h"
#include "mashurov_heir.h"
#include <iostream>


using namespace std;
int main()
{
	int i;
	mashurov_bas * bas = new mashurov_bas();//mashurov_bas- класс-родитель
	mashurov_heir * heir = new mashurov_heir();//mashurov_heir- класс-потомок
	mashurov_bas * bas2 = heir;
	cin >> i; // Вводим неопределенность для семя и компилятора
	if (i == 0)
		bas2 = bas;
	mashurov_heir * heir2 = dynamic_cast<mashurov_heir*>(bas2); // В случае если осуществляется преобразование указателя к типу данных, который не является фактическим типом объекта, в результате преобразования будет получен нулевой указатель. Поэтому в чевертом случае проводим проверку.

    // указатель на базовый класс, которому присвоен объект базового класса
	bas->simple_func(); //простая функция
	bas->virtual_func(); //виртуальная функция
	cout << endl;
	
	//указатель на производный класс, которому присвоен объект производного класса
	heir->simple_func(); 
	heir->virtual_func();
	cout << endl;

	//указатель на базовый класс, которому присвоен объект из второго указателя
	bas2->simple_func();
	bas2->virtual_func();
	cout << endl;

	//указатель на производный класс, которому с использованием статической операции приведения типа присвоен объект из третьего указателя
	if (heir2) // Проверка от нулевого указателя(из-за dynamic_cast)
	{
		heir2->simple_func();
		heir2->virtual_func();
	}

	return 0;
}




