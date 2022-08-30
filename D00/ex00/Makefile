FLAGS = -Wall -Wextra -Werror
NAME = megaphone
SRC = megaphone.cpp
CC = c++

all : $(NAME) $(SRC) 

$(NAME) : $(SRC)	
	@$(CC) $(FLAGS) $(SRC) -o $(NAME) -std=c++98
	@tput setaf 2; echo "MEGAPHONE IS READY"

clean :
	@rm -f megaphone
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean 

re: fclean all
