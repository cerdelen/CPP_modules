#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Pardon", 25, 5), _target(target){
	std::cout << "Presidential Pardon Form constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): AForm(copy){
	*this = copy;
	std::cout << "Presidential Pardon Form copy constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "Presidential Pardon Form deconstructor" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
	this->setSign(other.getSign());
	return (*this);
}

void	PresidentialPardonForm::execution( const Bureaucrat& bur ){
	std::cout << this->_target << " has been pardoned by " << bur.getName() << std::endl;
}
