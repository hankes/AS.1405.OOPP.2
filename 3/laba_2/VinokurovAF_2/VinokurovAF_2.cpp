// VinokurovAF_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Vinokurov_bazov.h"
#include "vinokurov_potomok.h"
#include <iostream>


using namespace std;
int main()
{
	Vinokurov_bazov * baz = new Vinokurov_bazov();
	vinokurov_potomok * potomok = new vinokurov_potomok();
	Vinokurov_bazov * baz2 = potomok;
	vinokurov_potomok * potomok2 = static_cast<vinokurov_potomok*>(baz2);

	cout << "1:" << endl;
	baz->prostaya();
	baz->virtualnaya();
	cout << endl;
	cout << "2:" << endl;
	potomok->prostaya();
	potomok->virtualnaya();
	cout << endl;
	cout << "3:" << endl;
	baz2->prostaya();
	baz2->virtualnaya();
	cout << endl;
	cout << "4:" << endl;
	potomok2->prostaya();
	potomok2->virtualnaya();


	return 0;
}


