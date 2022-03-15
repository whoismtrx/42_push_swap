/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:36:19 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/15 18:03:35 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_algo_swap(t_stack stack, t_stack stack2,
		t_stack stack3, t_stack stack4)
{	
	int	div;
	int	boool;

	boool = 1;
	if (stack.len > 5)
	{
		if (stack.len < 300)
			div = 3;
		else if (stack.len > 300)
			div = ft_get_div(stack2, stack3, stack4);
		stack = ft_a_to_b(stack, div, boool);
		stack = ft_b_to_a(stack, boool);
	}
	else
		stack = ft_algo_5(stack);
	return (stack);
}
