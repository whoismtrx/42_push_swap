/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_srtnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 03:37:49 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/14 23:14:39 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_srtnbr(char **argv)
{
	int i;
	int	j;
	int	boool;
	
	i = 1;
	boool = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '\0')
			ft_print_error();
		while (argv[i][j])
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				boool = 0;
			j++;
		}
		if (boool)
			ft_print_error();
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != (' '))
				ft_print_error();
			if (ft_isdigit(argv[i][j]) && ((argv[i][j + 1]) == '-' || argv[i][j + 1] == '+'))
				ft_print_error();
			if (!ft_isdigit(argv[i][j + 1]) && ((argv[i][j]) == '-' || argv[i][j] == '+'))
				ft_print_error();
			
			j++;
		}
		i++;
	}
	return (0);
}
