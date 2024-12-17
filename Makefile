# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pteixeir <pteixeir@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/17 19:22:31 by pteixeir          #+#    #+#              #
#    Updated: 2024/12/17 19:45:10 by pteixeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

C.FILES = ft_printf.c ft_printchar.c ft_printdigits.c ft_printhex.c ft_printptr.c ft_putchar.c ft_printstr.c ft_printunsigned.c

OBJECTS = $(C.FILES:.c=.o)

CC = cc

FlAGS = -Wall -Wextra -Werror

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(C.FILES)
	$(CC) $(FLAGS) -c $(C.FILES)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
