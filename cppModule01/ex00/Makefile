NAME = zombie
CCX = c++
CCXFLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
all : $(NAME)

$(NAME) : $(OBJ)
	$(CCX) $(CCXFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp Zombie.hpp
	$(CCX) $(CCXFLAGS) -c $< -o $@

fclean : clean
	rm -rf $(NAME)

clean :
	rm -rf $(OBJ)

re: fclean all

.PHONNY: all re fclean clean