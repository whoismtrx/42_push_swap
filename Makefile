# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 16:33:08 by orekabe           #+#    #+#              #
#    Updated: 2022/03/16 19:25:09 by orekabe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME1 = push_swap

NAME2 = checker

HEADER = push_swap.h

SRC = ft_atoi.c ft_a_to_b.c ft_a_to_b_test.c ft_algo_swap.c ft_algo_5.c ft_b_to_a.c ft_b_to_a_test.c ft_check_duplicate.c ft_check_error.c \
		ft_check_if_not_sorted.c ft_check_less_than_pivot.c ft_check_limits.c ft_check_strnbr.c ft_create_stacks.c ft_get_div.c ft_get_len_tab.c \
		ft_get_max.c ft_get_min.c ft_get_stack_a.c ft_initialize_stack.c ft_isdigit.c ft_memcpy.c ft_memmove.c ft_pick_div.c ft_pick_inst_test.c \
		ft_pick_inst.c ft_print_error.c ft_push_a.c ft_push_b.c ft_rev_rot_a.c ft_rev_rot_b.c ft_rev_rot_r.c ft_rotate_a.c ft_rotate_b.c ft_rotate_r.c \
		ft_sort_int_tab.c ft_stacpy.c ft_swap_a.c ft_swap_b.c ft_swap_s.c ft_free_stacks.c

BSRC = ft_checker.c ft_strlen.c ft_strcmp.c get_next_line.c get_next_line_utils.c

OBJ = $(SRC:.c=.o)

BOBJ = $(BSRC:.c=.o)

all: $(NAME1)

$(NAME1): $(OBJ)

$(NAME2): $(BOBJ)

bonus: $(NAME2) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(BOBJ) -o $<

%.o: %.c $(HEADER)
	$(CC) -c $(CFLAGS) $<

clean:
	rm -rf $(OBJ) $(BOBJ)

fclean: clean
	rm -rf $(NAME1) $(NAME2)

re: fclean all