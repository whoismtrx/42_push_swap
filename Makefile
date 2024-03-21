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

HEADER = -I./include

SRCD = ./src

OBJD = ./objs

SRC = $(SRCD)/ft_atoi.c $(SRCD)/ft_a_to_b.c $(SRCD)/ft_a_to_b_test.c $(SRCD)/ft_algo_swap.c $(SRCD)/ft_algo_5.c $(SRCD)/ft_b_to_a.c $(SRCD)/ft_b_to_a_test.c $(SRCD)/ft_check_duplicate.c $(SRCD)/ft_check_error.c \
		$(SRCD)/ft_check_if_not_sorted.c $(SRCD)/ft_check_less_than_pivot.c $(SRCD)/ft_check_limits.c $(SRCD)/ft_check_strnbr.c $(SRCD)/ft_create_stacks.c $(SRCD)/ft_get_div.c $(SRCD)/ft_get_len_tab.c \
		$(SRCD)/ft_get_max.c $(SRCD)/ft_get_min.c $(SRCD)/ft_get_stack_a.c $(SRCD)/ft_initialize_stack.c $(SRCD)/ft_isdigit.c $(SRCD)/ft_memcpy.c $(SRCD)/ft_memmove.c $(SRCD)/ft_pick_div.c $(SRCD)/ft_pick_inst_test.c \
		$(SRCD)/ft_pick_inst.c $(SRCD)/ft_print_error.c $(SRCD)/ft_push_a.c $(SRCD)/ft_push_b.c $(SRCD)/ft_rev_rot_a.c $(SRCD)/ft_rev_rot_b.c $(SRCD)/ft_rev_rot_r.c $(SRCD)/ft_rotate_a.c $(SRCD)/ft_rotate_b.c $(SRCD)/ft_rotate_r.c \
		$(SRCD)/ft_sort_int_tab.c $(SRCD)/ft_stacpy.c $(SRCD)/ft_swap_a.c $(SRCD)/ft_swap_b.c $(SRCD)/ft_swap_s.c $(SRCD)/ft_free_stacks.c $(SRCD)/ft_strlen.c $(SRCD)/ft_strcmp.c $(SRCD)/get_next_line.c $(SRCD)/get_next_line_utils.c \

SRCM = $(SRCD)/push_swap.c

SRCB = $(SRCD)/ft_checker.c

OBJ = $(addprefix $(OBJD)/, $(notdir $(SRC:.c=.o)))

OBJM = $(addprefix $(OBJD)/, $(notdir $(SRCM:.c=.o)))

OBJB = $(addprefix $(OBJD)/, $(notdir $(SRCB:.c=.o)))

all: $(NAME1)

$(NAME1): $(OBJ) $(OBJM)
	@echo "██████╗ ██╗   ██╗███████╗██╗  ██╗        ███████╗██╗    ██╗ █████╗ ██████╗ "
	@echo "██╔══██╗██║   ██║██╔════╝██║  ██║        ██╔════╝██║    ██║██╔══██╗██╔══██╗"
	@echo "██████╔╝██║   ██║███████╗███████║        ███████╗██║ █╗ ██║███████║██████╔╝"
	@echo "██╔═══╝ ██║   ██║╚════██║██╔══██║        ╚════██║██║███╗██║██╔══██║██╔═══╝ "
	@echo "██║     ╚██████╔╝███████║██║  ██║███████╗███████║╚███╔███╔╝██║  ██║██║     "
	@echo "╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝     "
	@echo "                   			BY: MTRX"
	@$(CC) $(OBJ) $(OBJM) -o $@

$(NAME2): $(OBJ) $(OBJB)
	@echo " ██████╗██╗  ██╗███████╗ ██████╗██╗  ██╗███████╗██████╗ "
	@echo "██╔════╝██║  ██║██╔════╝██╔════╝██║ ██╔╝██╔════╝██╔══██╗"
	@echo "██║     ███████║█████╗  ██║     █████╔╝ █████╗  ██████╔╝"
	@echo "██║     ██╔══██║██╔══╝  ██║     ██╔═██╗ ██╔══╝  ██╔══██╗"
	@echo "╚██████╗██║  ██║███████╗╚██████╗██║  ██╗███████╗██║  ██║"
	@echo " ╚═════╝╚═╝  ╚═╝╚══════╝ ╚═════╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝"
	@echo "                       BY: MTRX						   "
	@$(CC) $(OBJ) $(OBJB) -o $@

$(OBJD)/%.o: $(SRCD)/%.c
	@mkdir -p $(OBJD)
	@printf "Compiling $<\r"
	@$(CC) -c $(CFLAGS) $(HEADER) $< -o $@

bonus: $(NAME2)

clean:
	rm -rf $(OBJD)

fclean: clean
	rm -rf $(NAME1) $(NAME2)

re: fclean all
                                               