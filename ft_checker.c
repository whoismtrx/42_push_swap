/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:20:03 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/16 19:35:21 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_check_inst(t_stack stack, char *str)
{
	if (ft_strcmp(str, "pa\n") == 0)
		stack = ft_push_a(stack, 0);
	else if (ft_strcmp(str, "pb\n") == 0)
		stack = ft_push_b(stack, 0);
	else if (ft_strcmp(str, "ra\n") == 0)
		stack = ft_rotate_a(stack, 0);
	else if (ft_strcmp(str, "rb\n") == 0)
		stack = ft_rotate_b(stack, 0);
	else if (ft_strcmp(str, "rr\n") == 0)
		stack = ft_rotate_r(stack, 0);
	else if (ft_strcmp(str, "rra\n") == 0)
		stack = ft_rev_rot_a(stack, 0);
	else if (ft_strcmp(str, "rrb\n") == 0)
		stack = ft_rev_rot_b(stack, 0);
	else if (ft_strcmp(str, "rrr\n") == 0)
		stack = ft_rev_rot_r(stack, 0);
	else if (ft_strcmp(str, "sa\n") == 0)
		stack = ft_swap_a(stack, 0);
	else if (ft_strcmp(str, "sb\n") == 0)
		stack = ft_swap_b(stack, 0);
	else if (ft_strcmp(str, "ss\n") == 0)
		stack = ft_swap_s(stack, 0);
	return (stack);
}

static void	ft_ok_ko(t_stack stack, char *str)
{
	if (ft_strcmp(str, "OK\n") == 0)
	{
		write (1, "OK\n", 3);
		ft_free_stacks(stack);
		exit (0);
	}
	else
	{
		write (1, "KO\n", 3);
		ft_free_stacks(stack);
		exit (0);
	}
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	char	*str;

	stack.a = NULL;
	stack.b = NULL;
	stack.sorted_tab = NULL;
	if (argc < 2)
		exit (0);
	stack = ft_create_stacks(stack, argv);
	str = get_next_line(0);
	while (str)
	{
		stack = ft_check_inst(stack, str);
		free (str);
		str = get_next_line(0);
	}
	if (!ft_check_if_not_sorted(stack) && stack.head_b == stack.len)
		ft_ok_ko(stack, "OK\n");
	else
		ft_ok_ko(stack, "KO\n");
}
