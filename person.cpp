





#include "person.h"

void person::print_details(void) {
	cout << "\nThe person name is  ";
	cout << name << endl;

	cout << "\nThe person address is  ";
	cout << address << endl;

	cout << "\nThe person details are printed in [print_details]\n   " << endl;
}

void person::set_details(string Name, string Address) {
	name = Name;
	address = Address;
	cout << "\nThe person details are set in [set_deatils] \n  " << endl;
}

person::person(string a_name, string an_address) {
	name = a_name;
	address = an_address;

	cout << "\nThe debug from person [constructor]\n   " << endl;
	cout <<"\nName is "<<name<<endl;
	cout <<"\nAddress is "<<address<<endl;
}