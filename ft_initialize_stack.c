/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inistialize_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:29:24 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/16 16:45:05 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_initialize_stack(t_stack stack, int len)
{
	stack.count = 0;
	stack.head_a = 0;
	stack.head_b = len;
	stack.last_a = len - 1;
	stack.last_b = len - 1;
	stack.a = (long *)malloc(sizeof(long) * len);
	stack.b = (long *)malloc(sizeof(long) * len);
	stack.sorted_tab = (long *)malloc(sizeof(long) * len);
	return (stack);
}
