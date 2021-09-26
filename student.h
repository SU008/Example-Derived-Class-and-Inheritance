


#include "person.h"


class student:public person 
{
public:
	student(int a_id, string a_name, string an_address);

	void set_id(int);
	void print_id(void);
private:
	int id;
};


