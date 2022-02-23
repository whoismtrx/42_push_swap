/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:52:35 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/22 04:16:59 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_rotate_r(t_stack stack)
{
	stack = ft_rotate_a(stack);
	stack = ft_rotate_b(stack);
	write(1, "rr\n", 3);
	return (stack);
}
