/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 05:37:46 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/16 20:08:08 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_push_b(t_stack stack)
{
	stack.head_b--;
	stack.b[stack.head_b] = stack.a[stack.head_a];
	ft_memmove(stack.a, stack.a + 1, stack.last_a);
	stack.a[stack.last_a] = -2147483649;
	stack.last_a--;
	return (stack);
}
