# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpillay <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/22 09:25:36 by cpillay           #+#    #+#              #
#    Updated: 2018/06/11 16:19:58 by cpillay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra -I.

SRCS = ft_isdigit.c	ft_putendl_fd.c	ft_strcpy.c \
   	   ft_atoi.c ft_isprint.c ft_putnbr.c \
	   ft_strdup.c	my_whitespace.c ft_bzero.c	\
	   ft_memset.c	ft_putnbr_fd.c	ft_strlen.c \
	   ft_isalnum.c	ft_putchar.c ft_putstr.c \
	   ft_tolower.c ft_isalpha.c ft_putchar_fd.c \
	   ft_putstr_fd.c ft_toupper.c ft_isascii.c \
	   ft_putendl.c	ft_strcmp.c ft_strchr.c \
	   ft_strrchr.c	ft_memcpy.c ft_strncmp.c \
	   ft_memccpy.c ft_memchr.c ft_memcmp.c \
	   ft_memmove.c ft_strncpy.c ft_strclr.c \
       ft_strequ.c ft_strnequ.c	ft_strcat.c \
       ft_strncat.c ft_strlcat.c ft_strstr.c \
	   ft_strnstr.c ft_memalloc.c ft_strnew.c \
	   ft_memdel.c ft_strdel.c ft_striter.c \
	   ft_striteri.c ft_strmap.c ft_strmapi.c \
	   ft_strjoin.c ft_strsub.c ft_strtrim.c \
	   ft_itoa.c ft_strsplit.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS): $(SRCS)
	gcc -c $(CFLAGS) $(SRCS)

clean:
	/bin/rm -rf *.o$(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: clean
