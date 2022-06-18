#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
	private:
		std::string	ideas_[100];
	public:
		Brain();
		Brain(const Brain& copy);
		~Brain();

		Brain&			operator=(const Brain& copy);
		std::string		getIdea(int i);
		void			setIdea(int i, std::string idea);
};

#endif