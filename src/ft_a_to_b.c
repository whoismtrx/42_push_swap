/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 01:51:49 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/11 19:45:10 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_a_to_b(t_stack stack, int div, int boool)
{
	stack.p_pivot = stack.sorted_tab[0];
	while (stack.last_a > 0)
	{
		stack.sorted_tab = ft_stacpy(stack);
		stack.sorted_tab = ft_sort_tab(stack, stack.last_a + 1);
		stack.pos = (stack.last_a / div) + 1;
		stack.pivot = stack.sorted_tab[stack.pos];
		stack.mid = stack.sorted_tab[stack.pos / 2];
		while (stack.last_a >= stack.pos)
		{
			if (ft_check_less_than_pivot(stack, stack.pivot))
				break ;
			else
				stack = ft_pick_inst(stack, boool);
		}
		div = ft_pick_div(stack);
		stack.p_pivot = stack.mid;
	}
	return (stack);
}
