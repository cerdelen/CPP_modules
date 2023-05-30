SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

name = ex03

flags = -std=c++98 -Wall -Wextra -Werror

all:
	g++ $(flags) $(SRC) -o $(name)

test:
	g++ $(SRC) -o $(name)
	./$(name)

clean:
	rm $(name)

re: clean all
