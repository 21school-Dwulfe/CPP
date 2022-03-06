APP = 	Account

SRC = 	Account.cpp \
		tests.cpp
		

OBJ = 	${SRC:.cpp=.o}

.PHONY: all clean fclean re

%.o : %.cpp
	g++ -g -Wall -Wextra -Werror -c $< -o $@

all : ${APP}

${APP} : $(OBJ)
	g++ -Wall -Wextra -Werror $(OBJ) -o $(APP)

clean: 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(APP)

re:	fclean all	