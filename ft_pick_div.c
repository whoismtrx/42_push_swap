/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pick_div.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 01:54:42 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/15 18:02:31 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pick_div(t_stack stack)
{
	int	div;

	div = 0;
	if (stack.last_a <= 110)
		div = 3;
	else if (stack.last_a <= 190)
		div = 4;
	else if (stack.last_a <= 300)
		div = 5;
	else if (stack.last_a <= 430)
		div = 6;
	return (div);
}
