/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 23:00:36 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/16 16:17:25 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;
	t_stack	stack2;
	t_stack	stack3;
	t_stack	stack4;

	stack = ft_create_stacks(stack, argv);
	stack2 = ft_create_stacks(stack2, argv);
	stack3 = ft_create_stacks(stack3, argv);
	stack4 = ft_create_stacks(stack4, argv);
	if (!ft_check_if_not_sorted(stack))
	{
		ft_free_stacks(stack);
		ft_free_stacks(stack2);
		ft_free_stacks(stack3);
		ft_free_stacks(stack4);
		exit (0);
	}
	stack = ft_algo_swap(stack, stack2, stack3, stack4);
	ft_free_stacks(stack);
	ft_free_stacks(stack2);
	ft_free_stacks(stack3);
	ft_free_stacks(stack4);
	exit (0);
}
