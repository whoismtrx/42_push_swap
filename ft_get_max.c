/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 22:47:44 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/11 19:50:26 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_max(t_stack stack)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	pos = stack.head_b;
	j = stack.head_b + 1;
	while (i < stack.len)
	{
		if (stack.b[pos] < stack.b[j] && j < stack.len)
		{
			pos = j;
		}
		j++;
		i++;
	}
	return (pos);
}
