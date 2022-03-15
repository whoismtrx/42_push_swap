/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 00:47:25 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/15 18:02:56 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_min(t_stack stack)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	pos = stack.head_a;
	j = stack.head_a + 1;
	while (i < stack.len)
	{
		if (stack.a[pos] < stack.a[j] && j < stack.len)
		{
			pos = j;
		}
		j++;
		i++;
	}
	return (pos);
}
