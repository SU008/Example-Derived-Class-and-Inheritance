



#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

class person
{
public:
	person(string a_name, string an_address);

	void print_details(void);
	void set_details(string a_name, string a_address);
	
private:
	string name;
	string address;
};

