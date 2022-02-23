/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 02:22:36 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/22 04:16:40 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_rotate_a(t_stack stack)
{
	stack.temp_a = stack.a[stack.head_a];
	ft_memmove(stack.a, stack.a + 1, stack.last_a);
	stack.a[stack.last_a] = stack.temp_a;
	write(1, "ra\n", 3);
	return (stack);
}
