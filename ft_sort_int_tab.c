/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:11:09 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/28 03:55:23 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*ft_sort_tab(t_stack stack, int len)
{
	long	first;
	long	second;
	long	temp;

	first = 0;
	while (first <= len - 1)
	{
		second = first + 1;
		while (second <= len - 1)
		{
			if (stack.sorted_tab[first] > stack.sorted_tab[second])
			{
				temp = stack.sorted_tab[first];
				stack.sorted_tab[first] = stack.sorted_tab[second];
				stack.sorted_tab[second] = temp;
			}
			second++;
		}
		first++;
	}
	return (stack.sorted_tab);
}