/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 22:42:30 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/15 18:04:43 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	ft_algo_3(t_stack stack)
{
	while (ft_check_if_not_sorted(stack))
	{
		if (stack.a[stack.head_a] > stack.a[stack.last_a])
			stack = ft_rotate_a(stack, 1);
		else if (stack.a[stack.head_a] > stack.a[stack.head_a + 1]
			|| stack.a[stack.head_a] < stack.a[stack.head_a + 1])
			stack = ft_swap_a(stack, 1);
	}
	return (stack);
}

t_stack	ft_algo_5(t_stack stack)
{
	long	min;

	min = stack.a[ft_get_min(stack)];
	while (stack.last_a > 2)
		stack = ft_push_b(stack, 1);
	if (stack.b[stack.head_b] < stack.b[stack.last_b]
		&& stack.head_b < stack.last_b)
		stack = ft_swap_b(stack, 1);
	stack = ft_algo_3(stack);
	while (stack.head_b < stack.len && stack.len > 3)
	{
		if (stack.b[stack.head_b] > stack.a[stack.last_a])
			stack = ft_push_a(stack, 1);
		else if (stack.a[stack.last_a] > stack.a[stack.head_a]
			&& stack.b[stack.head_b] < stack.a[stack.head_a])
			stack = ft_push_a(stack, 1);
		else
			stack = ft_rev_rot_a(stack, 1);
	}
	while (stack.a[stack.last_a] < stack.a[stack.head_a] && stack.len > 3)
		stack = ft_rev_rot_a(stack, 1);
	return (stack);
}
