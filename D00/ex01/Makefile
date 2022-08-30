FLAGS = -Wall -Wextra -Werror
NAME = phone
SRC = contact.cpp main.cpp phonebook.cpp
CC = c++

all : $(NAME) $(SRC) 

$(NAME) : $(SRC)	
	@$(CC) $(FLAGS) $(SRC) -o $(NAME) -std=c++98
	@tput setaf 2; echo "PHONEBOOK IS READY"

clean :
	@rm -f phone
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean 

re: fclean all
