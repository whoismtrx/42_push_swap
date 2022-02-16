/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:50:34 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/15 05:32:21 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*ft_get_stack_a(t_stack stack, char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 1;
	len = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((ft_isdigit(argv[i][j])) && !(ft_isdigit(argv[i][j - 1])))
			{
				if ((argv[i][j] == '-' || argv[i][j] == '+')
					&& (argv[i][j + 1] == '-' || argv[i][j + 1] == '+'))
					ft_print_error();
				stack.a[len] = ft_atoi(&argv[i][j]);
				len++;
			}
			j++;
		}
		i++;
	}
	return (stack.a);
}
