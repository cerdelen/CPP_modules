#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery Creation", 145, 137), _target(target){
	std::cout << "Shrubbery Creation Form constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): AForm(copy){
	*this = copy;
	std::cout << "Shrubbery Creation Form copy constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "Shrubbery Creation Form deconstructor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
	this->setSign(other.getSign());
	return (*this);
}

void	ShrubberyCreationForm::execution( const Bureaucrat& bur ){
	std::ofstream	out_f(this->_target + "_shrubbery");

	if (out_f.is_open())
	{
		out_f << "         &&& &&  & &&                          &&& &&  & &&" << std::endl <<
		"	    && &\\/&\\|& ()|/ @, &&               && &\\/&\\|& ()|/ @, &&" << std::endl <<
		"      &\\/(/&/&||/& /_/)_&/_&               &\\/(/&/&||/& /_/)_&/_&" << std::endl <<
		"   &() \\/&|()|/&\\/ '%\" & ()            &() \\/&|()|/&\\/ '%\" & ()" << std::endl <<
		"  &_\\_&&_\\ |& |&&/&__%_/_& &&         &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl <<
		"&&   && & &| &| /& & % ()& /&&        &&   && & &| &| /& & % ()& /&&" << std::endl <<
		" ()&_---()&\\&\\|&&-&&--%---()~        ()&_---()&\\&\\|&&-&&--%---()~" << std::endl <<
		"     &&     \\|||                          &&     \\|||" << std::endl <<
		"             |||                                  |||" << std::endl <<
		"             |||                                  |||" << std::endl <<
		"             |||                                  |||" << std::endl <<
		"       , -=-~  .-^- _                       , -=-~  .-^- _" << std::endl;
		out_f.close();
		std::cout << bur.getName() << " executed " << this->getName() << " on "<< this->_target + "_shrubbery" << "!" << std::endl;
	}
	else
	{
		std::cerr << this->_target + "_shrubbery" << " could not be opened!" << std::endl;
	}


}
