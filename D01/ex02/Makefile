FLAGS = -Wall -Wextra -Werror
SRC = main.cpp
CC = g++
NAME = REFandPTR

all : $(NAME) $(SRC) 

$(NAME) : $(SRC)	
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@tput setaf 2; echo "REF&PTR IS READY"

clean :
	@rm -f phone
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean 

re: fclean all