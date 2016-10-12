// Marchenkova-OOPP2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Marchenkova-OOPP2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

using namespace std;

class march_base {
public:
	void ShowMessage() { cout << "������� ������� �������� ������" << endl; }
	virtual void ShowMessageVirtual() { cout << "����������� ������� �������� ������" << endl; }
};

class march_derivative : public march_base {
public:
	void ShowMessage() { cout << "������� ������� ������������ ������" << endl; }
	void ShowMessageVirtual() { cout << "����������� ������� ������������ ������" << endl; }
};

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	setlocale(LC_ALL, "");

	march_base *b1 = new march_base;
	march_derivative *d1 = new march_derivative;
	march_base *b2 = d1;
	march_derivative *d2 = static_cast<march_derivative*>(b2);

	b1->ShowMessage();
	b1->ShowMessageVirtual();
	d1->ShowMessage();
	d1->ShowMessageVirtual();
	b2->ShowMessage();
	b2->ShowMessageVirtual();
	d2->ShowMessage();
	d2->ShowMessageVirtual();

	system("pause");
}
