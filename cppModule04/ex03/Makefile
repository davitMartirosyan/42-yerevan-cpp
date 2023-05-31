NAME = main
CC = c++
CC_FLAGS = -std=c++98 #-Wall -Wextra -Werror
SRC = main.cpp \
	AMateria.cpp \
	Ice.cpp \
	Cure.cpp \
	Character.cpp \
	MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS = AMateria.hpp \
	ICharacter.hpp \
	IMateriaSource.hpp \
	MateriaSource.hpp \
	Character.hpp \
	Ice.hpp \
	Cure.hpp

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