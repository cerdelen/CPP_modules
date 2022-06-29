#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	jack("Jack", 80);
	Form		yikes("yikes", 50, 50);

	jack.signForm(yikes);
}