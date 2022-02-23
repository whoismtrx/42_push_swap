/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 05:33:15 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/22 04:17:24 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_swap_s(t_stack stack)
{
	stack = ft_swap_a(stack);
	stack = ft_swap_b(stack);
	write(1, "ss\n", 3);
	return (stack);
}
