
SRCS =  main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		WrongCat.cpp \
		WrongAnimal.cpp\

NAME = animals

FLAGS = -g -Wall -Wextra -Werror -std=c++98

OBJ_DIR = obj

OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)


all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: all make clean fclean re