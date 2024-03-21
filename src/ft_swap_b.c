/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 05:12:50 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/10 03:12:30 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_swap_b(t_stack stack, int boool)
{
	stack.temp_b = stack.b[stack.head_b];
	stack.b[stack.head_b] = stack.b[stack.head_b + 1];
	stack.b[stack.head_b + 1] = stack.temp_b;
	if (boool)
		write(1, "sb\n", 3);
	return (stack);
}
