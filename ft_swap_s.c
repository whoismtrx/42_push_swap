/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 05:33:15 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/10 03:12:53 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_swap_s(t_stack stack, int boool)
{
	stack = ft_swap_a(stack, 0);
	stack = ft_swap_b(stack, 0);
	if (boool)
		write(1, "ss\n", 3);
	return (stack);
}
