# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 12:24:26 by mardolin          #+#    #+#              #
#    Updated: 2023/04/24 12:27:20 by mardolin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= Fixed.cpp main.cpp
OBJS	= $(SRCS:.cpp=.o)
CC		= c++
RM		= rm -f
FLAG	= -Wall -Wextra -Werror -I. -std=c++98
NAME	= fixedpoint

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
				

.PHONY: all clean fclean re
