/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instialise_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:29:24 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/14 04:54:49 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_instialise_stack(t_stack stack, int len)
{
	stack.head = 0;
	stack.last = len - 1;
	stack.a = (long *)malloc(sizeof(long) * len);
	stack.b = (long *)malloc(sizeof(long) * len);
	return (stack);
}
