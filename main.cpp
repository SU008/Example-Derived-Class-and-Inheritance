



#include <string.h>
//#include <iostream>
#include "student.h"

void main()
{
	int tempID;
	string tmpName,tmpAddress;

	student myfirststudent(176383,"mick", "east lane");

	cout<<"\nEnter student ID number => ";
	cin>>tempID;

	cout<<"\nEnter student Name => ";
	cin>>tmpName;
	
	cout<<"\nEnter student Address => ";
	cin>>tmpAddress;

	myfirststudent.set_details(tmpName, tmpAddress);

	myfirststudent.print_details();

	myfirststudent.set_id(tempID);

	myfirststudent.print_id();
	
	
	
}