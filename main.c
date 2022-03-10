/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 23:00:36 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/10 05:45:33 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;
	t_stack stack2;
	t_stack stack3;
	t_stack stack4;

	stack = ft_create_stacks(stack, argv);
	stack2 = ft_create_stacks(stack2, argv);
	stack3 = ft_create_stacks(stack3, argv);
	stack4 = ft_create_stacks(stack4, argv);
	// ft_print_stack_a(stack);
	// ft_print_stack_b(stack);
	stack = ft_algo_swap(stack, stack2, stack3, stack4);
	// ft_print_stack_a(stack);
	// ft_print_stack_b(stack);
	// ft_rev_stack("-993 -982 -977 -969 -962 -947 -910 -897 -876 -873 -866 -841 -836 -817 -803 -795 -792 -777 -713 -698 -695 -661 -633 -629 -625 -572 -505 -491 -488 -465 -440 -417 -412 -385 -360 -348 -329 -325 -262 -245 -216 -212 -205 -198 -168 -159 -109 -105 -54 -45 -42 -34 7 76 108 117 126 141 148 158 159 192 209 267 273 295 345 358 393 407 420 463 469 471 519 524 536 538 659 669 679 685 701 702 712 714 774 803 857 862 863 872 873 881 882 890 898 948 979 994");
	// while (i < stack.len)
	// {
	// 	printf("%ld\n", stack.sorted_tab[i]);
	// 	i++;
	// }
}
