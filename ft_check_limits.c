/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_limits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 05:04:05 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/15 01:04:18 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_limits(t_stack stack)
{
	int	i;

	i = 0;
	while (i <= stack.last)
	{
		if (stack.a[i] > INT_MAX || stack.a[i] < INT_MIN)
			ft_print_error();
		i++;
	}
	return (0);
}
