/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rot_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 04:42:14 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/16 15:55:32 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_rev_rot_b(t_stack stack, int boool)
{
	if (stack.head_b < stack.len)
	{
		stack.temp_b = stack.b[stack.last_b];
		ft_memmove(stack.b + stack.head_b + 1,
			stack.b + stack.head_b, stack.last_b - stack.head_b);
		stack.b[stack.head_b] = stack.temp_b;
		if (boool)
			write(1, "rrb\n", 4);
	}
	return (stack);
}
