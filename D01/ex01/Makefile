FLAGS = -Wall -Wextra -Werror
SRC = main.cpp zombie.cpp zombieHorde.cpp
CC = g++
NAME = Zombie

all : $(NAME) $(SRC) 

$(NAME) : $(SRC)	
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@tput setaf 2; echo "ZombieS IS READY"

clean :
	@rm -f phone
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean 

re: fclean all