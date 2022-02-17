/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 23:00:36 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/17 04:54:18 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_print_stack_a(t_stack stack)
{
	int	i;

	i = -1;
	printf("||| A |||\n");
	while (++i <= stack.last_a)
		printf(" a%d = %ld\n", i, stack.a[i]);
}

static void	ft_print_stack_b(t_stack stack)
{
	int	n;

	printf("||| B |||\n");
	n = stack.head_b;
	while (n <= stack.last_b)
		printf(" b%d = %ld\n", stack.head_b, stack.b[n++]);
}

int	main(int argc, char **argv)
{
	t_stack	stack;

	stack = ft_create_stacks(stack, argv);
	ft_print_stack_a(stack);
	ft_print_stack_b(stack);
	stack = ft_push_b(stack);
	stack = ft_push_b(stack);
	stack = ft_push_b(stack);
	ft_print_stack_a(stack);
	ft_print_stack_b(stack);
	stack = ft_rev_rot_r(stack);
	ft_print_stack_a(stack);
	ft_print_stack_b(stack);
}
