NAME = animal
CC = c++
CC_FLAGS = -std=c++98 #-Wall -Wextra -Werror
SRC = Animal.cpp Dog.cpp Cat.cpp Brain.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CC_FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADERS)
	$(CC) $(CC_FLAGS) -c $< -o $@

fclean : clean
	rm -rf $(NAME)

clean:
	rm -rf $(OBJ)

re : fclean all

.PHONNY: all re clean fclean