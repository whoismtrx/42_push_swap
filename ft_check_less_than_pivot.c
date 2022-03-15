/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_less_than_pivot.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 22:44:44 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/11 19:46:37 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_less_than_pivot(t_stack stack, long mid)
{
	int	i;

	i = 0;
	while (i <= stack.last_a)
	{
		if (stack.a[i] < mid)
			return (0);
		i++;
	}
	return (1);
}
