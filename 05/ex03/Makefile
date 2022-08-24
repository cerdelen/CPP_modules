SRC = AForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp Intern.cpp

name = ex02

flags = -std=c++98 -Wall -Wextra -Werror

all:
	g++ $(flags) $(SRC) -o $(name)

test:
	g++ $(SRC) -o $(name)
	./$(name)

clean:
	rm $(name)

re: clean all
