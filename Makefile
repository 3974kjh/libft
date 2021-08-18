# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jukim <jukim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 19:54:13 by jukim             #+#    #+#              #
#    Updated: 2021/05/20 19:54:16 by jukim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

NAME = libft.a
SOURCE = ./ft_atoi.c \
		 ./ft_strchr.c \
		 ./ft_strlcat.c \
		 ./ft_strlcpy.c \
		 ./ft_strlen.c \
		 ./ft_strncmp.c \
		 ./ft_bzero.c \
		 ./ft_memset.c \
		 ./ft_memcpy.c \
		 ./ft_memccpy.c \
		 ./ft_memmove.c \
		 ./ft_memchr.c \
		 ./ft_memcmp.c \
		 ./ft_isalpha.c \
		 ./ft_isdigit.c \
		 ./ft_isalnum.c \
		 ./ft_isascii.c \
		 ./ft_isprint.c \
		 ./ft_strrchr.c \
		 ./ft_toupper.c \
		 ./ft_tolower.c \
		 ./ft_strnstr.c \
		 ./ft_strdup.c \
		 ./ft_calloc.c \
		 ./ft_substr.c \
		 ./ft_strjoin.c \
		 ./ft_strtrim.c \
		 ./ft_split.c \
		 ./ft_itoa.c \
		 ./ft_strmapi.c \
		 ./ft_putchar_fd.c \
		 ./ft_putstr_fd.c \
		 ./ft_putendl_fd.c \
		 ./ft_putnbr_fd.c
SOURCE_B = ./ft_lstnew.c \
		   ./ft_lstsize.c \
		   ./ft_lstadd_front.c \
		   ./ft_lstlast.c \
		   ./ft_lstadd_back.c \
		   ./ft_lstdelone.c \
		   ./ft_lstiter.c \
		   ./ft_lstmap.c \
		   ./ft_lstclear.c
OBJECTS_C = $(SOURCE:.c=.o)
OBJECTS_B = $(SOURCE_B:.c=.o)
OBJECTS_ALL = $(OBJECTS_C)

ifdef BONUS_TEST
	OBJECTS_ALL = $(OBJECTS_B)
endif

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

$(NAME) : $(OBJECTS_ALL)
	ar cr $@ $(OBJECTS_ALL)

clean:
	rm -f $(OBJECTS_C) $(OBJECTS_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:
	$(MAKE) BONUS_TEST=1 $(NAME)
