# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swoman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/14 14:11:23 by swoman            #+#    #+#              #
#    Updated: 2019/04/26 18:43:17 by swoman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

SRC_O = *.o

INC = *.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc -c $(FLAGS) $(SRC) -I$(INC)
	@ar rc $(NAME) $(SRC_O)

clean:
	@rm $(SRC_O)

fclean: clean
	@rm $(NAME)

re: fclean all
