# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcorreia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/18 10:58:14 by pcorreia          #+#    #+#              #
#    Updated: 2019/11/22 16:33:06 by pcorreia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		= ./ft_toupper.c\
			  ./ft_tolower.c\
			  ./ft_substr.c\
			  ./ft_strtrim.c\
			  ./ft_atoi.c\
			  ./ft_bzero.c\
			  ./ft_calloc.c\
			  ./ft_isalnum.c\
			  ./ft_isalpha.c\
			  ./ft_isascii.c\
			  ./ft_strrchr.c\
			  ./ft_strnstr.c\
			  ./ft_strncmp.c\
			  ./ft_strmapi.c\
			  ./ft_strlen.c\
			  ./ft_strlcpy.c\
			  ./ft_strlcat.c\
			  ./ft_strjoin.c\
			  ./ft_strdup.c\
			  ./ft_strchr.c\
			  ./ft_putstr_fd.c\
			  ./ft_putnbr_fd.c\
			  ./ft_putendl_fd.c\
			  ./ft_putchar_fd.c\
			  ./ft_memset.c\
			  ./ft_memmove.c\
			  ./ft_memcpy.c\
			  ./ft_memcmp.c\
			  ./ft_memchr.c\
			  ./ft_memccpy.c\
			  ./ft_isprint.c\
			  ./ft_isdigit.c\
			  ./ft_split.c\

OBJS		= $(SRCS:.c=.o)

INCLUDES	= libft.h

CFLAGS		= -Wall -Wextra -Werror

all:		$(NAME)

.o.c:		$(SRCS)
	gcc -c $(CFLAGS) -I $(INCLUDES) $^ -o $(^:.c=.o)

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re :	fclean all

.PHONY: all clean fclean re
