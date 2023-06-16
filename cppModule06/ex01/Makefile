NAME = encode
CC = c++
CC_FLAGS = -std=c++11 #-Wall -Wextra -Werror
SRC = $(shell find -f . | grep .cpp)
OBJ = $(SRC:.cpp=.o)
HEADERS = $(shell find -f . | grep .hpp)

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