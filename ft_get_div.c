/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_div.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 01:49:20 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/11 19:49:02 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	ft_algo_swap_test1(t_stack stack)
{	
	int	div;
	int	boool;

	boool = 0;
	div = 6;
	stack = ft_a_to_b_test(stack, div, boool);
	stack = ft_b_to_a_test(stack, boool);
	return (stack);
}

static t_stack	ft_algo_swap_test2(t_stack stack)
{	
	int	div;
	int	boool;

	boool = 0;
	div = 7;
	stack = ft_a_to_b_test(stack, div, boool);
	stack = ft_b_to_a_test(stack, boool);
	return (stack);
}

static t_stack	ft_algo_swap_test3(t_stack stack)
{	
	int	div;
	int	boool;

	boool = 0;
	div = 5;
	stack = ft_a_to_b_test(stack, div, boool);
	stack = ft_b_to_a_test(stack, boool);
	return (stack);
}

int	ft_get_div(t_stack stack2, t_stack stack3, t_stack stack4)
{
	int	div;

	div = 0;
	stack2 = ft_algo_swap_test1(stack2);
	stack3 = ft_algo_swap_test2(stack3);
	stack4 = ft_algo_swap_test3(stack4);
	if (stack2.count <= stack3.count && stack2.count <= stack4.count)
		div = 6;
	else if (stack3.count <= stack2.count && stack3.count <= stack4.count)
		div = 7;
	else if (stack4.count <= stack2.count && stack4.count <= stack3.count)
		div = 5;
	return (div);
}
