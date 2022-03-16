/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stacks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 01:03:40 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/16 17:01:25 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_create_stacks(t_stack stack, char **argv)
{
	stack.len = ft_get_len_tab(argv);
	stack = ft_initialize_stack(stack, stack.len);
	stack.a = ft_get_stack_a(stack, argv);
	stack.sorted_tab = ft_stacpy(stack);
	stack.sorted_tab = ft_sort_tab(stack, stack.len);
	ft_check_error(stack, argv);
	return (stack);
}
