#pragma once
#include <iostream>


using namespace std;

using namespace std;

namespace Program
{

	class ShestakovaEA
	{
	public:
		void simplefunc(){ cout << "������� ������� �������� ������" << endl; };
		virtual void virtfunc(){ cout << "����������� ������� �������� ������" << endl; };
		ShestakovaEA();
		~ShestakovaEA();
	};

	class ProizShestakovaEA :public ShestakovaEA
	{
	public:
		int k;
		void simplefunc(){
			cout << k;
			cout << "������� ������� ������������ ������" << endl; };
		virtual void virtfunc(){ 
			cout << k;
			cout << "����������� ������� ������������ ������" << endl; };
		ProizShestakovaEA()
		{
			k = NULL;
		}

	};
}


