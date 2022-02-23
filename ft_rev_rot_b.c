/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rot_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 04:42:14 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/22 04:16:17 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_rev_rot_b(t_stack stack)
{
	stack.temp_b = stack.b[stack.last_b];
	ft_memmove(stack.b + stack.head_b + 1,
		stack.b + stack.head_b, stack.last_b - stack.head_b);
	stack.b[stack.head_b] = stack.temp_b;
	write(1, "rrb\n", 4);
	return (stack);
}
