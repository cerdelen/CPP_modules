#include "converter.hpp"

converter::converter(std::string input): double_val_(0), nan_(false), inff_(false), inff_p_(false), inff_n_(false){
	
	if (input == "+inff")
		inff_p_ = true;
	else if (input == "-inff")
		inff_n_ = true;
	else if (input == "inff")
		inff_ = true;
	else if (input == "nanf" || input == "nan")
		nan_ = true;
	else
		double_val_ = std::stod(input);
}

converter::~converter(){

}



void	converter::print_all( void ) const {
	getChar();
	std::cout << "Int: " << this->getInt() << std::endl;
	std::cout << "Float: " << this->getFloat() << std::endl;
	std::cout << "Double: " << this->getDouble() << std::endl;
}

void	converter::getChar( void ) const {
	int	a = (int)getDouble();
	if (a <= 32 || a > 127)
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	std::cout << static_cast<char>(a) << std::endl;
	// write();
	return ;
}

int		converter::getInt( void ) const {
	return((int)double_val_);
}

float	converter::getFloat( void ) const {
	return((float)double_val_);
}

double	converter::getDouble( void ) const {
	return(double_val_);
}
