# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swoman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/19 20:30:37 by swoman            #+#    #+#              #
#    Updated: 2019/04/19 20:30:39 by swoman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

OUT = ft_display_file.o

FLAGS = -Werror -Wextra -Wall

$(NAME): $(OUT)
	gcc $(FLAGS) $(OUT) -o $(NAME)

ft_display_file.o: ft_display_file.c
	gcc $(FLAGS) -c ft_display_file.c

all: $(NAME)

clean:
	/bin/rm -rf $(OUT)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all