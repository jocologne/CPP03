CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ScavTrap

SRCS = ClapTrap.cpp ScavTrap.cpp main.cpp
HDRS = ClapTrap.hpp ScavTrap.hpp
OBJ_DIR = obj
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(HDRS) | $(OBJ_DIR)
	@$(CXX) $(FLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re