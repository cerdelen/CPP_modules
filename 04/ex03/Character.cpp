#include "Character.hpp"

Character::Character( void )
{
	_name = "Default Name";
	for (size_t i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character::Character(std::string name): _name(name)
{
	for (size_t i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character &Character::operator=(const Character &copy)
{
	_name = copy._name;
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventory[i] != nullptr)
			delete (_inventory[i]);
		if (copy._inventory[i] != nullptr)
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = nullptr;
	}
	return (*this);
}

Character::~Character( void )
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventory[i] != nullptr)
			delete (_inventory[i]);
	}
}


std::string	const &Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	if (m == nullptr)
		return ;
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventory[i] == nullptr)
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 5)
	{
		_inventory[idx] = nullptr;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 5)
	{
		if (_inventory[idx] != nullptr)
		{
			_inventory[idx]->use(target);
		}
	}
}
