NAME = span

SRC = main.cpp Span.cpp

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) Span.hpp
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all