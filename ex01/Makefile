# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/21 19:16:00 by aobshatk          #+#    #+#              #
#    Updated: 2025/06/21 20:36:58 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

NAME = test

$(NAME):
	$(CC) $(CFLAGS) Zombie.cpp zombieHorde.cpp -o $(NAME)

all: $(NAME)
clean:
	rm -f test
fclean:
	rm -f test
re: fclean $(NAME)
.PHONY: all clean fclean re
