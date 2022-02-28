/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 23:00:36 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/28 17:19:11 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;
	int	i;

	i = 0;
	stack = ft_create_stacks(stack, argv);
	// ft_print_stack_a(stack);
	// ft_print_stack_b(stack);
	// stack = ft_algo_swap(stack);
	// ft_print_stack_a(stack);
	// ft_print_stack_b(stack);
	// ft_rev_stack("71 14 309 45 104 52 86 107 804 61 34 42 55 21 41 23 87 12 33 0");
	while (i < stack.len)
	{
		printf("%ld\n", stack.sorted_tab[i]);
		i++;
	}
	
}
