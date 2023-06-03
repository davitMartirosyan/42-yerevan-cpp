NAME = execute
CC = c++
CC_FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = AForm.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = AForm.hpp Bureaucrat.hpp PresidentialPardonForm.hpp RobotomyReuqestForm.hpp ShrubberyCreationForm.hpp

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

.PHONNY: all fclean re clean