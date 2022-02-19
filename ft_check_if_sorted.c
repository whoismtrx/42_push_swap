/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:53:46 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/18 23:57:33 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_if_not_sorted(t_stack stack)
{
	int	i;
	
	i = 0;
	while (i < stack.last_a)
	{
		if (stack.a[i] > stack.a[i + 1])
			return (1);
		i++;
	}
	return (0);
}