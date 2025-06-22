# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/21 19:16:00 by aobshatk          #+#    #+#              #
#    Updated: 2025/06/22 19:11:44 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

NAME = harlFilter

$(NAME):
	$(CC) $(CFLAGS) Harl.cpp main.cpp -o $(NAME)

all: $(NAME)
clean:
	rm -f $(NAME)
fclean:
	rm -f $(NAME)
re: fclean $(NAME)
.PHONY: all clean fclean re
