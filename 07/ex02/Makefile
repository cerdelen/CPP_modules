SRC = main.cpp

HEADERS = iter.hpp

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
