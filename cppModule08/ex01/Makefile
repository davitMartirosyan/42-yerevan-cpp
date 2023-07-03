NAME = ex01
CC = c++
CC_FLAGS = -std=c++11 -Wall -Wextra -Werror
SRC = main.cpp Span.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = Span.hpp

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CC_FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(CC_FLAGS) -c $< -o $@

fclean : clean
	rm -rf $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all

.PHONNY: re all fclean clean