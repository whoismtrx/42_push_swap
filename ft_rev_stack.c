/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:46:22 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/14 00:04:52 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rev_stack(char *str)
{
	int i;
	int j;
	
	i = ft_strlen(str);
	while (i >= 0)
	{
		j = i;
		while (j >= 0 && str[j] != ' ')
			j--;
		i = j;
		j += 1;
		while (str[j] && str[j] != ' ')
		{
			write(1, &str[j], 1);
			j++;
		}
		if (i > 0)
			write(1, " ", 1);
		i--;
	}
}
