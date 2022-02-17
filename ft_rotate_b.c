/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 02:33:57 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/17 04:57:06 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_rotate_b(t_stack stack)
{
	stack.temp_b = stack.b[stack.head_b];
	ft_memmove(stack.b + stack.head_b,
		stack.b + stack.head_b + 1, stack.last_b - stack.head_b);
	stack.b[stack.last_b] = stack.temp_b;
	return (stack);
}
