NAME = awsomephonebook
CC = c++
HEADERS = $(wildcard *.hpp)
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

fclean : clean
	rm -rf $(OBJ)

clean :
	rm -rf $(NAME)

re : fclean all

.PHONNY: re all clean fclean