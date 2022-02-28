/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instialise_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:29:24 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/28 03:05:54 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_instialise_stack(t_stack stack, int len)
{
	stack.head_a = 0;
	stack.head_b = len;
	stack.last_a = len - 1;
	stack.last_b = len - 1;
	stack.a = (long *)malloc(sizeof(long) * len);
	stack.b = (long *)malloc(sizeof(long) * len);
	stack.sorted_tab = (long *)malloc(sizeof(long) * len);
	return (stack);
}
