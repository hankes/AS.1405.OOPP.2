#pragma once
#include <iostream>

using namespace std;

namespace Program
{
	class KokorevA
	{
	public:
		void simplefunc(){ cout << "������� ������� �������� ������" << endl; };
		virtual void virtfunc(){ cout << "����������� ������� �������� ������" << endl; };
		KokorevA();
		~KokorevA();
	};
	class KokorevAA:public KokorevA
	{
	public:
		void simplefunc(){
			cout << "������� ������� ������������ ������" << endl;};
		virtual void virtfunc(){
			cout << "����������� ������� ������������ ������" << endl;};
		
	};
}





