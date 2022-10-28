FLAGS = -Wall -Wextra -Werror
NAME = CPP08_ex02
SRC = main.cpp
CC = c++

all : $(NAME) $(SRC) 

$(NAME) : $(SRC)	
	@$(CC) $(FLAGS) $(SRC) -o $(NAME) -std=c++98
	@tput setaf 2; echo "CPP08_ex02"

clean :
	@rm -f $(NAME)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean 

re: fclean all