NAME = Account
CC = c++
CC_FLAGS = -std=c++98 #-Wall -Wextra -Werror
HEADERS = Account.hpp
SRC = $(wildcard Account.cpp tests.cpp)
OBJ = $(SRC:.cpp=.o)

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

.PHONNY: re all fclean clean