// Shnyakin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Student {
private:
	string name;
	int age;
public:
	void setAtributes() {
		cout << "Name: \n";
		cin >> name;
		cout << "Age: \n";
		cin >> age;
	}

	void setAtributes(ifstream & f) {
		f >> name;
		f >> age;
	}

	void printAtributes() {
		cout << "Name: " << name << ", Age: " << age << endl;
	}

	void printAtributes(ofstream & f) {
		f << name << endl;
		f << age << endl;
	}
};

class Group {
private:
	vector<Student*> students;
public:
	void addStudent() {
		Student * s = new Student();
		s->setAtributes();
		students.push_back(s);
	}

	void printStudents() {
		for (int i = 0; i < students.size(); i++)
			students[i]->printAtributes();
	}	

	void printStudents(ofstream & f) {
		for (int i = 0; i < students.size(); i++)
			students[i]->printAtributes(f);
	}

	void addStudents(ifstream & f) {
		while (!f.eof()) {
			Student * s = new Student();
			s->setAtributes(f);
			students.push_back(s);
		}
		students.pop_back();
	}

	void clear() {
		for (int i = 0; i < students.size(); i++) {
			delete students[i];
			students.clear();
		}
	}

};

int _tmain(int argc, _TCHAR* argv[])
{
	Group g;
	int i;
	while (1) {
		cout << "1. Add student" << endl;
		cout << "2. Add students from file" << endl;
		cout << "3. Print students" << endl;
		cout << "4. Print students to file" << endl;
		cout << "5. Clear group information" << endl;
		cin >> i;
		switch (i) {
			case 1: {
				g.addStudent();
				break;
			}
			case 2: {
				ifstream f("Students.txt");
				g.addStudents(f);
				f.close();
				break;
			}
			case 3: {
				g.printStudents();
				break;
			}
			case 4: {
				ofstream f("Students.txt");
				g.printStudents(f);
				f.close();
				break;
			}
			case 5: {
				g.clear();
				break;
			}
			default: {
				cout << "Wrong\n";
			}
			
		}
	}
	return 0;
}

