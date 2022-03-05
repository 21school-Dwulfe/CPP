APP = Megaphone

SRC = Megaphone.cpp
OBJ = Megaphone.o

.PHONY: all clean fclean re

%.o : %.cpp
	g++ -Wall -Wextra -Werror -c $< -o $@

all : ${APP}
	

${APP} : $(OBJ)
	g++ -Wall -Wextra -Werror $(OBJ) -o $(APP)

clean: 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(APP)

re:	fclean all	