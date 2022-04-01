APP = Convert

SRC = main.cpp \
		Convert.cpp

OBJ = $(SRC:.cpp=.o)

INCLUDE = Convert.hpp

DEBUG = 	-Wshadow -Wno-shadow \
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
SANITIZE =  -g -fsanitize=address 


.PHONY : all re fclean clean

all : $(APP)

%.o: %.cpp
	c++ -Wall -Wextra -Werror -g -std=c++98 -c $< -o $@

$(APP) : $(OBJ)  $(INCLUDE)
	c++ -Wall -Wextra -Werror $(SANITIZE) -std=c++98 $(OBJ) -o $@ 


re : fclean all

fclean : clean
	rm -rf $(APP)

clean :
	rm -rf $(OBJ)