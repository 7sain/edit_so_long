# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hualhash <hualhash@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 22:50:03 by hualhash          #+#    #+#              #
#    Updated: 2023/02/02 00:02:17 by hualhash         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM		= rm -f

SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
		ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_strtrim.c\
		ft_split.c ft_substr.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c\

SRCSB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\

OBJSB = $(SRCSB:c=o)
OBJS = $(SRCS:c=o)

$(NAME): $(OBJS)
		@ar -rcs $(NAME) $(OBJS)

%.o : %.c
	${CC} ${CFLAGS} -c $^

all:	${NAME}

clean:
		@$(RM) $(OBJS) $(OBJSB)

fclean:	clean
		@$(RM) $(NAME)

re:		fclean all

bonus:	$(OBJSB)
	@ar -rcs $(NAME) $(OBJSB)