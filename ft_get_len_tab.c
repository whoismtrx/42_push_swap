/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_len_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:46:29 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/14 23:22:59 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_len_tab(char **argv)
{
	int	i;
	int	j;
	int	len;
	int	boool;

	i = 1;
	len = 0;
	while (argv[i])
	{
		boool = 0;
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				boool = 1;
			if (argv[i][j] == ' ' && ft_isdigit(argv[i][j + 1]))
				len++;
			j++;
		}
		if (boool)
			len++;
		i++;
	}
	return (len);
}
