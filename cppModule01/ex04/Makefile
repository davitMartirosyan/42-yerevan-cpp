NAME = main
CC = c++
CC_FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = $(wildcard *cpp)
OBJ = $(SRC:.cpp=.o)
HEADERS = $(wildcard *.hpp)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CC_FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADERS)
	$(CC) $(CC_FLAGS) -c $< -o $@

fclean : clean
	rm -rf $(OBJ)

clean : 
	rm -rf $(NAME)

re : fclean all

build :
	./main file.txt Lorem "Nissan Patfinder"

.PHONNY: all re fclean clean build