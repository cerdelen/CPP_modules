SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

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