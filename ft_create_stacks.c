/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stacks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 01:03:40 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/15 02:25:15 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_create_stacks(t_stack stack, char **argv)
{
	int	len;

	len = ft_get_len_tab(argv);
	stack = ft_instialise_stack(stack, len);
	stack.a = ft_get_stack_a(stack, argv);
	ft_check_error(stack, argv);
	return (stack);
}
