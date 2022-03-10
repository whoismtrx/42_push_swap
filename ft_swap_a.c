/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 05:02:08 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/10 03:12:20 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_swap_a(t_stack stack, int boool)
{
	stack.temp_a = stack.a[stack.head_a];
	stack.a[stack.head_a] = stack.a[stack.head_a + 1];
	stack.a[stack.head_a + 1] = stack.temp_a;
	if (boool)
		write(1, "sa\n", 3);
	return (stack);
}
