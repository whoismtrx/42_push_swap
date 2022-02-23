/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:48:00 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/22 04:15:41 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_push_a(t_stack stack)
{
	stack.last_a++;
	ft_memmove(stack.a + 1, stack.a, stack.last_a);
	stack.a[stack.head_a] = stack.b[stack.head_b];
	stack.head_b++;
	write(1, "pa\n", 3);
	return (stack);
}
