APP = 	Zombie

SRC = 	newZombie.cpp \
		Zombie.cpp	\
		randomChump.cpp \
		main.cpp \
		
		

OBJ = 	${SRC:.cpp=.o}

.PHONY: all clean fclean re

%.o : %.cpp
	c++ -g -Wall -Wextra -Werror -std=c++98 -c $< -o $@

all : ${APP}

${APP} : $(OBJ)
	c++ -Wall -Wextra -Werror $(OBJ) -o $(APP)

clean: 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(APP)

re:	fclean all	