// KokorevAlab2.cpp : Defines the entry point for the console application.
//

#include <stdafx.h>
#include "KokorevA.h"
#include <iostream>

using namespace std;

using Program::KokorevA;
using Program::KokorevAA;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	KokorevA k; 
	KokorevA *b1; 
	b1 = &k;
	cout << "---��������� �� ������� �����, �������� �������� ������ �������� ������:" << endl;
	b1->simplefunc();
	b1->virtfunc();


	KokorevAA p;
	KokorevAA *b2;
	b2 = &p;
	cout << "---��������� �� ����������� �����, �������� �������� ������ ������������ ������:" << endl;
	b2->simplefunc();
	b2->virtfunc();

	KokorevA *b3;
     b3 = b1;
	cout << "---��������� �� ������� �����, �������� �������� ������ �� ������� ���������:" << endl;
	b3->simplefunc();
	b3->virtfunc();

	cout << "---��������� �� ����������� �����, �������� � �������������� ����������� �������� ���������� ���� �������� ������ �� �������� ���������:" << endl;
	KokorevAA *b4;
	b4 = static_cast<KokorevAA*>(b3);
	b4->simplefunc();
	b4->virtfunc();

	system("pause");
}

