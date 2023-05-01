NAME = megaphone
CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(NAME)

fclean : clean
	rm -rf $(OBJ)

re: fclean all
.PHONNY: re all clean fclean