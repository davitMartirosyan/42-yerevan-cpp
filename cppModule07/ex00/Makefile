NAME = template
CC = c++
CC_FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = whatever.hpp

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CC_FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADERS)
	$(CC) $(CC_FLAGS) -c $< -o $@

fclean : clean
	rm -rf $(NAME)

clean : 
	rm -rf $(OBJ)

re : fclean all

.PHONNY: all re fclean clean