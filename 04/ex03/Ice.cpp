#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{}

Ice::Ice(const Ice & copy)
{
	*this = copy;
}

Ice &Ice::operator=(const Ice & copy)
{
	_type = copy._type;
	return (*this);
}

Ice::~Ice()
{
}

AMateria	*Ice::clone() const
{
	return (new Ice());
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}