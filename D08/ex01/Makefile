FLAGS = -Wall -Wextra -Werror
NAME = CPP08_01
SRC = main.cpp Span.cpp
CC = c++

all : $(NAME) $(SRC) 

$(NAME) : $(SRC)	
	@$(CC) $(FLAGS) $(SRC) -o $(NAME) -std=c++98
	@tput setaf 2; echo "CPP08_01"

clean :
	@rm -f $(NAME)
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean 

re: fclean all