/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:36:19 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/19 22:30:00 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_algo_swap(t_stack stack)
{
	int	boool;

	boool = 1;
	while (boool)
	{
		if (!ft_check_if_not_sorted(stack))
			boool = 0;
		else if (stack.a[stack.head_a] > stack.a[stack.head_a + 1] && stack.a[stack.head_a + 1] > stack.a[stack.last_a])
		{
			stack = ft_swap_a(stack);
			stack = ft_rotate_a(stack);
		}
		else if (stack.a[stack.head_a] > stack.a[stack.head_a + 1] && stack.a[stack.head_a] < stack.a[stack.last_a])
			stack = ft_swap_a(stack);
		else if (stack.a[stack.head_a] > stack.a[stack.head_a + 1] && stack.a[stack.head_a] > stack.a[stack.last_a])
			stack = ft_rotate_a(stack);
		else if (stack.a[stack.head_a] < stack.a[stack.head_a + 1] && stack.a[stack.head_a] > stack.a[stack.last_a])
			stack = ft_rotate_a(stack);
		else if (stack.a[stack.head_a] < stack.a[stack.head_a + 1] && stack.a[stack.head_a] < stack.a[stack.last_a]
			&& (stack.head_b == stack.len || stack.a[stack.head_a] > stack.b[stack.head_b]))
			stack = ft_push_b(stack);
		else if (stack.a[stack.head_a] < stack.b[stack.head_b] && (stack.head_b + 1 == stack.len || stack.a[stack.head_a] > stack.b[stack.head_b + 1]))
		{
			stack = ft_push_b(stack);
			stack = ft_swap_b(stack);
		}
		else if (stack.a[stack.head_a + 1] > stack.b[stack.head_b])
		{
			stack = ft_swap_a(stack);
			stack = ft_push_b(stack);
		}
		else if (stack.a[stack.head_a + 1] > stack.b[stack.head_b + 1])
		{
			stack = ft_swap_a(stack);
			stack = ft_push_b(stack);
			stack = ft_swap_b(stack);
		}
		else
			boool = 0;
		if (boool)
		{
			ft_print_stack_a(stack);
			ft_print_stack_b(stack);
		}
	}
	boool = 1;
	while (boool)
	{
		int	temp = stack.a[stack.last_a];
		if (stack.a[stack.last_a] > stack.b[stack.head_b])
			stack = ft_rev_rot_a(stack);
		else if (stack.b[stack.head_b] > stack.a[stack.last_a])
			stack = ft_push_a(stack);
		else																				
			boool = 0;
		if (boool)
		{
			ft_print_stack_a(stack);
			ft_print_stack_b(stack);
		}
	}
	return (stack);
}
