# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reeali <reeali@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/06 18:10:37 by reeali            #+#    #+#              #
#    Updated: 2024/08/12 11:06:23 by reeali           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3d

SRCS = base check colors cub3d draw error ft_init \
		texture keys parsing raycast map

GNLSRCS = ./get_next_line/get_next_line.c\
		./get_next_line/get_next_line_utils.c

OBJDIR = objects

OBJS = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(SRCS)))

CC = cc

MLX_FLAGS = -Lminilibx -lmlx -framework OpenGL -framework AppKit

LIBFT = -Llibft -lft

CFLAGS = -Wall -Wextra -Werror  -g3

$(OBJDIR)/%.o : %.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	make all -sC minilibx
	make all -sC libft
	$(CC) $(CFLAGS) $(OBJS) $(GNLSRCS) $(MLX_FLAGS) $(LIBFT) -o $(NAME)

clean:
	make clean -sC minilibx
	make clean -sC libft
	rm -rf $(OBJDIR)

fclean: clean
	make fclean -sC libft
	rm -f $(NAME)

re: fclean all