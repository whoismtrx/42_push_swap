/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pick_inst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 01:53:29 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/11 19:56:45 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_pick_inst(t_stack stack, int boool)
{
	while (stack.last_a)
	{
		if (stack.b[stack.head_b] <= stack.mid
			&& stack.b[stack.head_b] >= stack.p_pivot
			&& stack.head_b < stack.last_b - 1
			&& stack.a[stack.head_a] > stack.pivot)
			stack = ft_rotate_r(stack, boool);
		else if (stack.b[stack.head_b] <= stack.mid
			&& stack.b[stack.head_b] >= stack.p_pivot
			&& stack.head_b < stack.last_b - 1)
			stack = ft_rotate_b(stack, boool);
		if (stack.a[stack.head_a] <= stack.pivot)
			stack = ft_push_b(stack, boool);
		else if (ft_check_less_than_pivot(stack, stack.pivot))
			break ;
		else
			stack = ft_rotate_a(stack, boool);
	}
	return (stack);
}
