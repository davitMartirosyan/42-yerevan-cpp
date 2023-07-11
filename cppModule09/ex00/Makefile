NAME = btc
CC = c++
CC_FLAGS = -std=c++98 #-Wall -Wextra -Werror
SRC = main.cpp BitcoinExchange.cpp ../../cppModule06/ex00/ScalarConverter.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = BitcoinExchange.hpp

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

.PHONNY: re all clean fclean