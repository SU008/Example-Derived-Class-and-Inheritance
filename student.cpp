


#include "student.h"


void student::set_id(int a_id) {
	id = a_id;

	cout << "\nThe debug from student [set_id]\n   " << endl;
}

void student::print_id(void) {
	cout << "\nThe student ID is ";
	cout << id << endl;

	cout << "\nThe debug from student [print_id]\n   " << endl;
}

student::student(int a_id, string a_name, string an_address)
	:person(a_name, an_address)
{

	id = a_id;

	cout << "\nThe debug from student [constructor]\n   " << endl;
	cout << "The ID = ";
	cout << id << endl;
}