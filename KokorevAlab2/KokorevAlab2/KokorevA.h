#pragma once
#include <iostream>

using namespace std;

namespace Program
{
	class KokorevA
	{
	public:
		void simplefunc(){ cout << "Простая функция базового класса" << endl; };
		virtual void virtfunc(){ cout << "Виртуальная функция базового класса" << endl; };
		KokorevA();
		~KokorevA();
	};
	class KokorevAA:public KokorevA
	{
	public:
		void simplefunc(){
			cout << "Простая функция производного класса" << endl;};
		virtual void virtfunc(){
			cout << "Виртуальная функция производного класса" << endl;};
		
	};
}





