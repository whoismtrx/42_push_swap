/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:36:19 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/23 03:02:44 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_algo_swap(t_stack stack)
{
	int	boool;
	int	size_b;
	int	i;
	long stop;
	boool = 1;
	while (ft_check_if_not_sorted(stack) || (stack.head_a == stack.len && size_b == 0))
	{
		size_b = 0;
		// puts("while1");
		while (ft_check_if_not_sorted(stack))
		{
			if (stack.b[stack.head_b] < stack.b[stack.last_b] && size_b > 1)
				stack = ft_rotate_b(stack);
			else if (stack.b[stack.head_b] < stack.b[stack.head_b + 1] && size_b > 1)
				stack = ft_swap_b(stack);
			else if (stack.a[stack.head_a + 1] < stack.a[stack.head_a] && stack.a[stack.head_a + 1] > stack.a[stack.last_a])
				stack = ft_swap_a(stack);
			else if (stack.a[stack.head_a] > stack.a[stack.last_a])
				stack = ft_rotate_a(stack);
			else if (stack.a[stack.head_a + 1] < stack.a[stack.head_a])
				stack = ft_swap_a(stack);
			else if (size_b < 2)
			{
				stack = ft_push_b(stack);
				size_b++;
			}
			else if (stack.a[stack.head_a] > stack.b[stack.head_b + 1] || stack.a[stack.head_a] < stack.b[stack.last_b])
			{
				stack = ft_push_b(stack);
				size_b++;
			}
			else
				break ;
			// ft_print_stack_a(stack);
			// ft_print_stack_b(stack);
			// printf("\n%d|", stack.head_b);
			// printf("%d\n", stack.len);
			// printf("%ld\n", stack.b[stack.head_b]);
		}
		int i = stack.last_a;
		while (stack.a[i] > stack.a[i - 1] && i > 0)
			i--;
		if (i == 0)
			stop = stack.a[i - 1];
		stop = stack.a[i - 1];
		
		long back = stack.a[stack.last_a];
		while (stack.head_b < stack.len)
		{
			// puts("while2");
			// printf("%ld\n", stop);
			// ft_print_stack_a(stack);
			// ft_print_stack_b(stack);
			if (!ft_check_if_not_sorted(stack) && stack.last_b == stack.len)
				exit (0);
			if (stack.a[stack.last_a] > stack.b[stack.head_b] && stop != stack.a[stack.last_a] && ft_check_if_not_sorted(stack))
			{
				stack = ft_rev_rot_a(stack);
				if (stack.a[stack.last_a])
					boool = 0;
			}
			else if (stack.b[stack.head_b] < stack.b[stack.head_a] && stack.b[stack.head_b] > stack.a[stack.last_a])
				stack = ft_push_a(stack);
			else
				stack = ft_push_a(stack);
			// printf("\n%ld|", stack.a[stack.head_a]);
			// printf("%d\n", stack.len);
			// printf("%ld\n", stack.b[stack.head_b]);
		}
		while (stack.a[stack.last_a] != back)
		{
			// puts("while3");
			stack = ft_rev_rot_a(stack);
			// ft_print_stack_a(stack);
			// ft_print_stack_b(stack);
		}
		// break;
	}
	return (stack);
}
