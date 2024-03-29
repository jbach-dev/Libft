# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbach <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 22:01:50 by jbach             #+#    #+#              #
#    Updated: 2021/11/23 13:01:56 by jbach            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

SRCS = ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_toupper.c\
ft_tolower.c\
ft_strncmp.c\
ft_memcmp.c\
ft_atoi.c\
ft_strlen.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_memmove.c\
ft_memchr.c\
ft_calloc.c\
ft_striteri.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_strchr.c\
ft_strrchr.c\
ft_strnstr.c\
ft_strdup.c\
ft_strjoin.c\
ft_strtrim.c\
ft_itoa.c\
ft_strmapi.c\
ft_split.c\
ft_substr.c

FILES = $(SRCS:.c=.o)

BONUS = ft_lstadd_front.c\
ft_lstadd_back.c\
ft_lstdelone.c\
ft_lstclear.c\
ft_lstiter.c\
ft_lstnew.c\
ft_lstlast.c\
ft_lstmap.c\
ft_lstsize.c

FILES_BONUS = $(BONUS:.c=.o)

INC = ./inc/

$(NAME): $(FILES)
	ar rc $(NAME) $(FILES)

%.o: %.c
	$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

bonus: $(FILES) $(FILES_BONUS)
	ar rc $(NAME) $(FILES) $(FILES_BONUS)

clean: 
	$(RM) $(FILES) $(FILES_BONUS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all
	
.PHONY: all clean fclean re

