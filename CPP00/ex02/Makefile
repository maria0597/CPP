# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mardolin <mardolin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 16:30:30 by mardolin          #+#    #+#              #
#    Updated: 2023/03/31 12:29:59 by mardolin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	tests.cpp \
			Account.cpp \

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

RM		= rm -f

FLAG	= -Wall -Wextra -Werror -I. -std=c++98

NAME	= bestjob

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


run:	$(NAME)
		valgrind --leak-check=full --track-origins=yes ./$(NAME)
		make fclean -C ./

re: fclean all

.PHONY: all clean fclean re test
