#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade): name_(name){
	std::cout << "Default Bureaucrat constructor!" << std::endl;
	setGrade(grade);
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Default Bureaucrat deconstructor!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name_(copy.name_){
	std::cout << "Bureaucrat copy constructor!" << std::endl;
	*this = copy;
}

Bureaucrat&		Bureaucrat::operator=(const Bureaucrat &copy){
	std::cout << "Bureaucrat copy operator!" << std::endl;
	setGrade(copy.grade_);
	return (*this);
}


std::string	Bureaucrat::getName( void ) const{
	return (name_);
}

int			Bureaucrat::getGrade( void ) const{
	return (grade_);
}

const char	*Bureaucrat::GradeTooHighException::what( void ) const throw(){
	return ("Grade is too damn high!");
}

const char	*Bureaucrat::GradeTooLowException::what( void ) const throw(){
	return ("Grade is too damn low!");
}

void	Bureaucrat::incrementGrade( void ){
	setGrade(grade_ - 1);
}

void	Bureaucrat::decrementGrade( void ){
	setGrade(grade_ + 1);
}

void		Bureaucrat::setGrade( int grade ){
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	grade_ = grade;
}