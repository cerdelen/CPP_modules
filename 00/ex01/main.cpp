#include "Contact.hpp"
#include "Phonebook.hpp"

int main()
{
	Phonebook *a;
	a = new Phonebook;
	int				commandnr = 0;
	std::string		command = "wait";

	while (true)
	{
		std::cout << "Please enter one of the following commands: \"ADD\" | \"SEARCH\" | \"EXIT\"" << std::endl;
		std::cin >> command;

		if (command == "ADD" || command == "add")
			commandnr = 1;
		else if (command == "SEARCH" || command == "search")
			commandnr = 2;
		else if (command == "EXIT" || command == "exit")
			commandnr = 3;
		else
			commandnr = 0;
		switch (commandnr)
		{
		case 1:
			a->add_cont();
			break;
		case 2:
			a->search_cont();
			break;		
		default:
			break;
		}
		if (commandnr == 3)
			break ;
	}
	delete a;
}
