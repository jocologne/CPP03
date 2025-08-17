CXX = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = FragTrap

OBJ_DIR = obj
SRCS = main.cpp ClapTrap.cpp FragTrap.cpp
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
HDRS = ClapTrap.hpp FragTrap.hpp

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME): $(OBJS)
	@$(CXX) $(FLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.cpp $(HDRS) | $(OBJ_DIR)
	@$(CXX) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re