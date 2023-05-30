#include "AMateria.hpp"

AMateria::AMateria( void ): _type("Materia")
{
	std::cout << "def constr" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	_type = copy._type;
	return (*this);
}

AMateria::AMateria(std::string const &type): _type(type)
{}

AMateria::~AMateria()
{}

std::string const	&AMateria::getType() const
{
	return (_type);
}

void		AMateria::use(ICharacter& target)
{
	std::cout << "*Your target is " << target.getName() << " *" << std::endl;
}