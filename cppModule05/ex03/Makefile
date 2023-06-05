NAME = execute
CC = c++
CC_FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = Form.cpp Intern.cpp Bureaucrat.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = Form.hpp Intern.hpp Bureaucrat.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp
EXTERNFILES = $(shell find . -type f | grep -E "_shru")

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CC_FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADERS)
	$(CC) $(CC_FLAGS) -c $< -o $@

fclean : clean
	rm -rf $(NAME)
	rm -rf $(EXTERNFILES)
	rm -rf ~/Library/Caches

clean :
	rm -rf $(OBJ)

re : fclean all

.PHONNY: all fclean re clean