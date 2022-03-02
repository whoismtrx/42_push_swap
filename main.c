/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 23:00:36 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/02 23:18:13 by orekabe          ###   ########.fr       */
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
	ft_print_stack_a(stack);
	ft_print_stack_b(stack);
	// ft_rev_stack("632 483 515 66 723 303 287 748 752 365 834 534 289 712 425 87 209 492 529 31 612 265 731 6 437 663 370 507 787 559");
	// while (i < stack.len)
	// {
	// 	printf("%ld\n", stack.sorted_tab[i]);
	// 	i++;
	// }
}
