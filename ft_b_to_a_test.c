/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_to_a_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 02:09:32 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/11 19:46:25 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	ft_pick_inst_2(t_stack stack, int boool)
{
	while (stack.b[stack.head_b] != stack.max)
	{
		if (stack.pos > stack.mid)
		{
			stack = ft_rev_rot_b(stack, boool);
			stack.count++;
		}
		else if (stack.pos <= stack.mid)
		{
			stack = ft_rotate_b(stack, boool);
			stack.count++;
		}
	}
	return (stack);
}

t_stack	ft_b_to_a_test(t_stack stack, int boool)
{
	while (stack.head_b < stack.len)
	{
		stack.pos = ft_get_max(stack);
		stack.max = stack.b[stack.pos];
		stack.mid = ((stack.len - stack.head_b) / 2) + stack.head_b;
		stack = ft_pick_inst_2(stack, boool);
		if (stack.a[stack.head_a] > stack.a[stack.head_a + 1])
		{
			stack = ft_swap_a(stack, boool);
			stack.count++;
		}
		else
		{
			stack = ft_push_a(stack, boool);
			stack.count++;
		}
	}
	return (stack);
}
