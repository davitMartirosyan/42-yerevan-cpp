NAME = main
CC = c++
CC_FLAGS = -I includes/  -std=c++98 #-Wall -Wextra -Werror
SRC = src/main.cpp \
	src/AMateria.cpp \
	src/Ice.cpp \
	src/Cure.cpp \
	src/Character.cpp \
	src/MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS = includes/AMateria.hpp \
	includes/ICharacter.hpp \
	includes/IMateriaSource.hpp \
	includes/MateriaSource.hpp \
	includes/Character.hpp \
	includes/Ice.hpp \
	includes/Cure.hpp

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