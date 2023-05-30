#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for (size_t i = 0; i < 4; i++)
		_materias[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource & copy)
{
	for (size_t i = 0; i < 4; i++)
		_materias[i] = nullptr;
	*this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource & copy)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_materias[i] != nullptr)
			delete (_materias[i]);
		if (copy._materias[i] != nullptr)
			_materias[i] = copy._materias[i]->clone();
		else
			_materias[i] = nullptr;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		{
			if (_materias[i] != nullptr)
				delete (_materias[i]);
		}
}

void		MateriaSource::learnMateria(AMateria *m)
{
	if (m == nullptr)
		return ;
	for (size_t i = 0; i < 4; i++)
	{
		if (_materias[i] == nullptr)
		{
			_materias[i] = m;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_materias[i] != nullptr)
		{
			if (_materias[i]->getType().compare(type) == 0)
				return (_materias[i]->clone());
		}
	}
	return (nullptr);
}
