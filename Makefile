# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matthieul <marvin@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/10 08:54:32 by matthieu          #+#    #+#              #
#    Updated: 2020/09/30 23:46:31 by matthieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = part1/ft_memset.c part1/ft_bzero.c part1/ft_memcpy.c part1/ft_memccpy.c part1/ft_memmove.c part1/ft_memchr.c part1/ft_memcmp.c part1/ft_strlen.c part1/ft_isalpha.c part1/ft_isdigit.c part1/ft_isalnum.c part1/ft_isascii.c part1/ft_isprint.c part1/ft_toupper.c part1/ft_tolower.c part1/ft_strchr.c part1/ft_strrchr.c part1/ft_strncmp.c part1/ft_strlcpy.c part1/ft_strlcat.c part1/ft_strnstr.c part1/ft_atoi.c part1/ft_calloc.c part1/ft_strdup.c part2/ft_substr.c part2/ft_strjoin.c part2/ft_strtrim.c part2/ft_split.c part2/ft_itoa.c part2/ft_strmapi.c part2/ft_putchar_fd.c part2/ft_putstr_fd.c part2/ft_putendl_fd.c part2/ft_putnbr_fd.c bonus/ft_lstnew.c bonus/ft_lstadd_front.c bonus/ft_lstsize.c bonus/ft_lstlast.c bonus/ft_lstadd_back.c bonus/ft_lstdelone.c bonus/ft_lstclear.c bonus/ft_lstiter.c bonus/ft_lstmap.c

OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
RM	= rm -rf



all:		${NAME}

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
