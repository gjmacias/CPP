
NAME			=	megaphone
CC				= 	clang++
FLAGS			= 	-std=c++98 -Wall -Wextra -Werror

###############################################################################
#									SRC										  #
###############################################################################

SOURCE			=	megaphone.cpp
OBJECT			=	$(SOURCE:.cpp=.o)

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

all: $(NAME)

%.o: %.cpp
	@echo "$(GREY)Compiling $< to $@ $(WHITE)"
	@$(CC) $(FLAGS) -c $< -o $@


#					--------	RULES PROGRAM	--------					  #

$(NAME): $(OBJECT)
	@echo "$(GREEN)Compiling $(NAME) $(WHITE)"
	@$(CC) $(FLAGS) $(OBJECT) -o $(NAME)
	@echo "$(ORANGE)Created $(NAME) executable! $(WHITE)" && echo ""

clean:
	@echo "$(RED)Removing ON $(NAME); objects... $(WHITE)"
	@/bin/rm -f $(OBJECT)
	@echo "$(ORANGE)Done!$(DEF_COLOR)" && echo ""

fclean: clean
	@echo "$(RED)Removing execute $(NAME)... $(WHITE)"
	@/bin/rm -f $(NAME)
	@echo "$(ORANGE)Done!$(DEF_COLOR)" && echo ""

re: fclean all

###############################################################################
#									OTHERS									  #
###############################################################################

.PHONY: all clean fclean re