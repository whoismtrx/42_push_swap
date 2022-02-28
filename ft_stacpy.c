/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:11:03 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/28 16:13:26 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*ft_stacpy(t_stack stack)
{
	int	i;

	i = 0;
	while (i < stack.len)
	{
		stack.sorted_tab[i] = stack.a[i];
		i++;
	}
	return (stack.sorted_tab);
}