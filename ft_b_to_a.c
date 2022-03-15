/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 01:50:39 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/11 05:42:41 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_b_to_a(t_stack stack, int boool)
{
	while (stack.head_b < stack.len)
	{
		stack.pos = ft_get_max(stack);
		stack.max = stack.b[stack.pos];
		stack.mid = ((stack.len - stack.head_b) / 2) + stack.head_b;
		while (stack.b[stack.head_b] != stack.max)
		{
			if (stack.pos > stack.mid)
				stack = ft_rev_rot_b(stack, boool);
			else if (stack.pos <= stack.mid)
				stack = ft_rotate_b(stack, boool);
		}
		if (stack.a[stack.head_a] > stack.a[stack.head_a + 1])
			stack = ft_swap_a(stack, boool);
		else
			stack = ft_push_a(stack, boool);
	}
	return (stack);
}
