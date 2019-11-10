# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdremora <rdremora@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/09 03:15:51 by rdremora          #+#    #+#              #
#    Updated: 2019/07/14 00:32:47 by rdremora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_strcat.c ft_strcpy.c ft_strdup.c ft_strlen.c ft_strncat.c ft_strncpy.c \
	ft_toupper.c ft_tolower.c ft_isprint.c ft_isascii.c ft_isdigit.c ft_isalnum.c \
	ft_isalpha.c ft_strchr.c ft_strrchr.c ft_strcmp.c ft_strncmp.c  \
	ft_putchar.c ft_putstr.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c \
	ft_strclr.c ft_putendl.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
	ft_strequ.c ft_strnequ.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr.c \
	ft_putnbr_fd.c ft_strstr.c ft_strnstr.c ft_strjoin.c ft_strtrim.c ft_strsub.c \
	ft_itoa.c ft_strsplit.c ft_strlcat.c ft_lstnew.c ft_lstadd.c ft_lstiter.c \
	ft_lstmap.c ft_lstdelone.c ft_lstdel.c ft_atoi.c ft_isspace.c ft_strcpyuntil.c \
	ft_strjoinoptclr.c ft_strjoinch.c ft_lstdelresp.c ft_strsubclr.c
OBJ=$(SRCS:.c=.o)
NAME=libft.a
NAME_S=libft.so
FLAGS=-Wall -Wextra -Werror -I.

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o : %.c
	gcc $(FLAGS) -c $< -o $@

so:
	gcc -fPIC -shared $(OBJ) -o $(NAME_S)

re: fclean all

clean:
	rm -rf $(OBJ) a.out

fclean: clean
	rm -rf $(NAME) $(NAME_S)

test1: re
	make clean
	gcc -g ../test/tests1.c libft.a -o test_output
	./test_output

testput: re
	make clean
	gcc -g ../test/testsput.c libft.a -o test_output
	./test_output > ../test/test2_received
	diff -U 3 ../test/test2_expected ../test/test2_received
	diff -U 3 ../test/test2_expected ../test/test2_received_fd

test2: re
	make clean
	gcc -g ../test/tests2.c libft.a -o test_output
	./test_output
