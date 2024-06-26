/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:41:26 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/15 05:30:52 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicate(t_stack stack)
{
	int		i;
	int		j;

	i = 0;
	while (i < stack.last_a)
	{
		j = i + 1;
		while (j <= stack.last_a)
		{
			if (stack.a[i] == stack.a[j])
				ft_print_error();
			j++;
		}
		i++;
	}
	return (0);
}
