APP = 	Zombie

SRC = 	newZombie.cpp \
		Zombie.cpp	\
		randomChump.cpp \
		zombieHorde.cpp \
		main.cpp \
		
INCLUDE = 		Zombie.hpp

OBJ = 	${SRC:.cpp=.o}

.PHONY: all clean fclean re

%.o : %.cpp
	c++ -g -Wall -Wextra -Werror -std=c++98 -c $< -o $@

all : ${APP}

${APP} : $(INCLUDE) $(OBJ)
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(APP)

clean: 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(APP)

re:	fclean all	