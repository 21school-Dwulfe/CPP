APP = DiamondTrap

SRC = main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

INCLUDE = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

.PHONY : all re fclean clean

all : $(APP)

%.o: %.cpp
	c++ -g -Wall -Wextra -Werror -std=c++98 -c $< -o $@

$(APP) : $(OBJ)  $(INCLUDE)
	c++ -Wall -Wextra -Werror -g -fsanitize=address -std=c++98 $(OBJ) -o $@ 


re : fclean all

fclean : clean
	rm -rf $(APP)

clean :
	rm -rf $(OBJ)