/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 05:02:08 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/17 00:32:44 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_swap_a(t_stack stack)
{
	stack.temp_a = stack.a[stack.head_a];
	stack.a[stack.head_a] = stack.a[stack.head_a + 1];
	stack.a[stack.head_a + 1] = stack.temp_a;
	return (stack);
}
