#pragma once
#include <iostream>


using namespace std;

using namespace std;

namespace Program
{

	class ShestakovaEA
	{
	public:
		void simplefunc(){ cout << "Простая функция базового класса" << endl; };
		virtual void virtfunc(){ cout << "Виртуальная функция базового класса" << endl; };
		ShestakovaEA();
		~ShestakovaEA();
	};

	class ProizShestakovaEA :public ShestakovaEA
	{
	public:
		int k;
		void simplefunc(){
			cout << k;
			cout << "Простая функция производного класса" << endl; };
		virtual void virtfunc(){ 
			cout << k;
			cout << "Виртуальная функция производного класса" << endl; };
		ProizShestakovaEA()
		{
			k = NULL;
		}

	};
}


