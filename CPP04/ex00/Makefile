APP = Zoo

SRC = main.cpp \
		Cat.cpp \
		Dog.cpp \
		Animal.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp


OBJ = $(SRC:.cpp=.o)

INCLUDE = Cat.hpp \
		Dog.hpp \
		Animal.hpp \
		WrongAnimal.hpp \
		WrongCat.hpp

DEBUG = -g \
			-Wshadow -Wno-shadow \
			-pedantic-errors \
			-Wpedantic	\
			-Wcast-align \
			-Wcast-qual \
			-Wconversion \
			-Wctor-dtor-privacy \
			-Wduplicated-cond \
			-Wextra-semi \
			-Wfloat-equal \
			-Wlogical-op \
			-Wnon-virtual-dtor \
			-Wold-style-cast \
			-Woverloaded-virtual \
			-Wredundant-decls \
			-Wsign-conversion \
			-Wsign-promo
SANITIZE = -fsanitize=address 


.PHONY : all re fclean clean

all : $(APP)

%.o: %.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

$(APP) : $(OBJ)  $(INCLUDE)
	c++ -Wall -Wextra -Werror $(SANITIZE) -std=c++98 $(OBJ) -o $@ 


re : fclean all

fclean : clean
	rm -rf $(APP)

clean :
	rm -rf $(OBJ)