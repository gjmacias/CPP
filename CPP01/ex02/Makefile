NAME			=	brain
CC				= 	c++
FLAGS			= 	-std=c++98 -Wall -Wextra -Werror -MMD -pedantic -g3

###############################################################################
#									SRC										  #
###############################################################################

SRC		=	main.cpp
OBJ		=	$(SRC:.cpp=.o)
DEPS	=	$(SRC:.cpp=.d)

###############################################################################
#									COLORS									  #
###############################################################################

RESET			= 	\033[0m
GREEN 			= 	\033[38;5;46m
WHITE 			= 	\033[38;5;15m
GREY 			= 	\033[38;5;8m
ORANGE 			= 	\033[38;5;202m
RED 			= 	\033[38;5;160m

###############################################################################
#									RULES									  #
###############################################################################

all:  $(NAME)


$(OBJ)%.o: $(SRC)%.cpp
	@echo "$(GREY)Compiling $< to $@ $(WHITE)"
	@$(CC) $(FLAGS) $(INCS) -c $< -o $@

#					--------	RULES PROGRAM	--------					  #

$(NAME): $(OBJ)
	@echo "$(GREEN)Compiling $(NAME) $(WHITE)"
	@$(CC) $(FLAGS) $(INCS) $(OBJ) -o $(NAME)
	@echo "$(ORANGE)Created $(NAME) executable! $(WHITE)" && echo ""

clean:
	@echo "$(RED)Removing ON $(NAME); OBJs... $(WHITE)"
	@/bin/rm -rf $(OBJ) $(DEPS)
	@echo "$(ORANGE)Done!$(DEF_COLOR)" && echo ""

fclean: clean
	@echo "$(RED)Removing execute $(NAME)... $(WHITE)"
	@/bin/rm -f $(NAME)
	@echo "$(ORANGE)Done!$(DEF_COLOR)" && echo ""

re: fclean all

###############################################################################
#									OTHERS									  #
###############################################################################

-include $(DEPS)
.PHONY: all clean fclean re