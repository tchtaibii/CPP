FLAGS = -Wall -Wextra -Werror
NAME = Animal
SRC = Animal.cpp main.cpp Dog.cpp Cat.cpp
CC = c++

all : $(NAME) $(SRC) 

$(NAME) : $(SRC)	
	@$(CC) $(FLAGS) $(SRC) -o $(NAME) -std=c++98
	@tput setaf 2; echo "ANIMAL"

clean :
	@rm -f $(NAME)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean 

re: fclean all