NAME = Mutantstack

SRC = main.cpp

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) Mutantstack.hpp
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all