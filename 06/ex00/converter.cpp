#include "converter.hpp"

converter::converter(std::string input): double_val_(0), nan_(false), inff_(false), inff_n_(false), inval_arg(false){
	if (input.compare("+inff") == 0 || input.compare("inff") == 0 || input.compare("+inf") == 0 || input.compare("inf") == 0)
		inff_ = true;
	else if (input.compare("-inff") == 0 || input.compare("-inf") == 0)
		inff_n_ = true;
	else if (input.compare("nanf") == 0 || input.compare("nan") == 0)
		nan_ = true;
	else if (is_allnum(input) == false)
	{
		inval_arg = true;
		std::cout << "Invalid Argument!" << std::endl;
	}
	else
		double_val_ = std::stod(input);
}

converter::~converter(){

}



void	converter::print_all( void ) const {
	if (inval_arg)
		return ;
	printChar();
	printInt();
	printFloat();
	printDouble();



	// std::cout << "Char: " << this->getChar() << std::endl;
	// std::cout << "Int: " << this->getInt() << std::endl;
	// std::cout << "Float: " << this->getFloat() << std::endl;
	// std::cout << "Double: " << this->getDouble() << std::endl;
}

void	converter::printChar( void ) const {
	std::cout << "Char:         ";
	if (nan_ || inff_ || inff_n_)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	int	a = (int)getDouble();
	if (a <= 32 || a > 127)
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	std::cout << static_cast<char>(a) << std::endl;
}

void	converter::printInt( void ) const {
	std::cout << "Int:          ";
	if (nan_ || inff_ || inff_n_)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	int	a = (int)getDouble();
	std::cout << a << std::endl;
}

void	converter::printFloat( void ) const {
	std::cout << "Float:        ";
	if (nan_)
	{
		std::cout << "nanf" << std::endl;
		return ;
	}
	else if (inff_)
	{
		std::cout << "inff" << std::endl;
		return ;
	}
	else if (inff_n_)
	{
		std::cout << "-inff" << std::endl;
		return ;
	}
	float a = (float)getDouble();
	std::cout << a << std::endl;
}

void	converter::printDouble( void ) const {
	std::cout << "Double:       ";
	if (nan_)
	{
		std::cout << "nan" << std::endl;
		return ;
	}
	else if (inff_)
	{
		std::cout << "inf" << std::endl;
		return ;
	}
	else if (inff_n_)
	{
		std::cout << "-inf" << std::endl;
		return ;
	}
	double a = getDouble();
	std::cout << a << std::endl;
}

double	converter::getDouble( void ) const {
	return(double_val_);
}

bool	converter::is_allnum(std::string c)
{
	for(int i = 0; c[i]; i++)
		if (c[i] < 47 || c[i] > 58)
			return (false);
	return (true);
}