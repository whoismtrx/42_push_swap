/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 05:33:15 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/17 03:59:23 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_swap_s(t_stack stack)
{
	stack = ft_swap_a(stack);
	stack = ft_swap_b(stack);
	return (stack);
}
