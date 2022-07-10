#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{
private:
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string secret;
	std::string number;

	void	make_right_aligned(std::string s1);

public:
	Contact();
	Contact(std::string, std::string, std::string, std::string, std::string);
	~Contact();

	std::string		get_f_name();
	void			display_contacts_short();
	void			display_contact_full();
};

#endif