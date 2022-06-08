#include "Contact.hpp"

class phonebook
{
private:
public:
	Contact 	c_list[8];
	int			amt;
	phonebook();
	~phonebook();
};

phonebook::phonebook()
{
	amt = 0;
}

phonebook::~phonebook()
{
}
