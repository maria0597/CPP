SRCS	= 	main.cpp	\
			HumanA.cpp	\
			HumanB.cpp	\
			Weapon.cpp	\

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

RM		= rm -f

FLAG	= -Wall -Wextra -Werror -I. -std=c++98

NAME	= UnnecessaryViolence

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
	@echo "\033[1m\033[35m$(NAME) project compiled successfully.\033[0m"

%.o: %.cpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	@echo "\033[1m\033[35m$(NAME) removing object files $(OBJS).\033[0m"
	$(RM) $(OBJS)
	@echo "\033[0;35mObject files removed!\033[0;37m"

fclean:
	@echo "\033[1m\033[35mRemoving program executable $(NAME).\033[0;37m"
	$(MAKE) clean
	$(RM) $(NAME)
	@echo "\033[1m\033[35mExecutable removed!\033[0;37m"

re: fclean all

run:			$(NAME)
				 valgrind --leak-check=full --track-origins=yes ./$(NAME)
				make fclean -C ./

.PHONY: all clean fclean re run
