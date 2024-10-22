# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reeali <reeali@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 10:42:06 by reeali            #+#    #+#              #
#    Updated: 2024/01/26 10:42:07 by reeali           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_memset.c		\
		ft_bzero.c		\
		ft_strlen.c		\
		ft_isalpha.c 	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_strlcpy.c	\
		ft_strnstr.c	\
		ft_atoi.c       \
		ft_memcpy.c     \
		ft_memcmp.c     \
		ft_memchr.c     \
		ft_memmove.c    \
		ft_strlcat.c	\
		ft_strdup.c		\
		ft_strnstr.c 	\
		ft_calloc.c		\
		ft_substr.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_split.c		\
		ft_itoa.c		\
		ft_strmapi.c	\
		ft_split.c		\
		ft_putchar_fd.c	\
		ft_striteri.c	\
		ft_putstr_fd.c	\
		ft_putchar_fd.c	\
		ft_putendl_fd.c \
		ft_putnbr_fd.c 	\
		ft_putchar.c	\
		ft_putnbr.c		\
		ft_putstr.c		\
		ft_hexa.c		\
		ft_putunsnbr.c	\
		ft_pointer.c	\
		ft_printf.c


SRCBON =	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c	\
			ft_lstadd_back.c	\
			ft_lstclear.c	\
			ft_lstdelone.c 	\
			ft_lstiter.c

		

OBJ = $(SRC:.c=.o)
OBJB= $(SRCBON:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: $(OBJB) $(OBJ)
	ar -rcs $(NAME) $(OBJB) $(OBJ)

clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all