/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 23:00:36 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/23 19:36:37 by orekabe          ###   ########.fr       */
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
	stack = ft_algo_swap(stack);
	// ft_print_stack_a(stack);
	// ft_print_stack_b(stack);
	// ft_rev_stack("841 -518 -302 749 -430 378 170 -643 -607 347 36 -943");
}
