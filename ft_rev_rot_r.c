/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rot_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 04:48:27 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/22 04:16:30 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_rev_rot_r(t_stack stack)
{
	stack = ft_rev_rot_a(stack);
	stack = ft_rev_rot_b(stack);
	write(1, "rrr\n", 4);
	return (stack);
}
