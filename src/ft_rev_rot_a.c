/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rot_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 04:37:24 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/10 03:11:24 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_rev_rot_a(t_stack stack, int boool)
{
	stack.temp_a = stack.a[stack.last_a];
	ft_memmove(stack.a + 1, stack.a, stack.last_a);
	stack.a[stack.head_a] = stack.temp_a;
	if (boool)
		write(1, "rra\n", 4);
	return (stack);
}
