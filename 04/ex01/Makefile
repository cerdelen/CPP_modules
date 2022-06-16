SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp

name = ex01

flags = -std=c++98 -Wall -Wextra -Werror

all:
	g++ $(flags) $(SRC) -o $(name)

test:
	g++ $(SRC) -o $(name)
	./$(name)

clean:
	rm $(name)

re: clean all
