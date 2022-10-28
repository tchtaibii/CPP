FLAGS = -Wall -Wextra -Werror
SRC = main.cpp
CC = c++
NAME = TEMPLATE_ex01

all : $(NAME) $(SRC) 

$(NAME) : $(SRC)	
	@$(CC) $(FLAGS) $(SRC) -o $(NAME) -std=c++98
	@tput setaf 2; echo "TEMPLATE"

clean :
	@rm -f $(NAME)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean 

re: fclean all