/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pick_inst_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 02:04:14 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/11 20:31:42 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	ft_pick_inst3(t_stack stack, int boool)
{
	if (stack.b[stack.head_b] <= stack.mid
		&& stack.b[stack.head_b] >= stack.p_pivot
		&& stack.head_b < stack.last_b - 1
		&& stack.a[stack.head_a] > stack.pivot)
	{
		stack = ft_rotate_r(stack, boool);
		stack.count++;
	}
	else if (stack.b[stack.head_b] <= stack.mid
		&& stack.b[stack.head_b] >= stack.p_pivot
		&& stack.head_b < stack.last_b - 1)
	{
		stack = ft_rotate_b(stack, boool);
		stack.count++;
	}
	return (stack);
}

t_stack	ft_pick_inst_test(t_stack stack, int boool)
{
	while (stack.last_a)
	{
		if (stack.b[stack.head_b] <= stack.mid)
			stack = ft_pick_inst3(stack, boool);
		if (stack.a[stack.head_a] <= stack.pivot)
		{
			stack = ft_push_b(stack, boool);
			stack.count++;
		}
		else if (ft_check_less_than_pivot(stack, stack.pivot))
			break ;
		else
		{
			stack = ft_rotate_a(stack, boool);
			stack.count++;
		}
	}
	return (stack);
}
