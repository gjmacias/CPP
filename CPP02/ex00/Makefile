NAME			=	fixed
CC				= 	c++
FLAGS			= 	-std=c++98 -Wall -Wextra -Werror -MMD -pedantic -g3

###############################################################################
#									SRC										  #
###############################################################################

SRC		=	main.cpp	Fixed.cpp
OBJ		=	$(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))
DEPS	=	$(addprefix $(DPS_DIR), $(SRC:.cpp=.d))
###############################################################################
#									DIR_PATH								  #
###############################################################################

SRC_DIR	=	src/
OBJ_DIR	=	obj/
DPS_DIR	=	dps/

###############################################################################
#									INLUDES									  #
###############################################################################

INCS	= -I ./includes/

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

all: make_dir $(NAME)

make_dir:
	@mkdir -p $(OBJ_DIR) $(DPS_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp | make_dir
	@echo "$(GREY)Compiling $< to $@ $(WHITE)"
	@$(CC) $(FLAGS) $(INCS) -c $< -o $@
	@mv $(basename $@).d $(DPS_DIR)


#					--------	RULES PROGRAM	--------					  #

$(NAME): $(OBJ)
	@echo "$(GREEN)Compiling $(NAME) $(WHITE)"
	@$(CC) $(FLAGS) $(INCS) $(OBJ) -o $(NAME)
	@echo "$(ORANGE)Created $(NAME) executable! $(WHITE)" && echo ""

clean:
	@echo "$(RED)Removing ON $(NAME); OBJs... $(WHITE)"
	@/bin/rm -rf $(OBJ_DIR) $(DPS_DIR)
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