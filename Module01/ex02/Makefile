NAME = brain

# Sources
SRC = $(shell ls *.cpp)

# Objects
OBJ_DIR = ./objects/
OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

# Utils
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

# COLORS
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_DIR) Makefile
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "$(NAME): $(GREEN)object files were created$(RESET)"
	@echo "$(NAME): $(GREEN)$(NAME) was created$(RESET)"

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(GREEN).$(RESET)"

clean:
	@$(RM) $(OBJ_DIR)
	@echo "$(NAME): $(RED)object files were deleted$(RESET)"
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

fclean: clean
	@$(RM) $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all
