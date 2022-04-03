APP = Harl

SRC = main.cpp \
		Harl.cpp

INCLUDE = Harl.hpp

OBJ = $(SRC:.cpp=.o)

.PHONY : all re fclean clean

all : $(APP)

%.o: %.cpp
	c++ -g -Wall -Wextra -Werror -std=c++98 -c $< -o $@

$(APP) : $(INCLUDE) $(OBJ)
	c++ -Wall -Wextra -Werror -g -fsanitize=address -std=c++98 $(OBJ) -o $@ 

re : fclean all

fclean : clean
	rm -rf $(APP)

clean :
	rm -rf $(OBJ)