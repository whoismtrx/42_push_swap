/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:15:47 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/17 00:31:57 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memcpy(void *dst, const void *src, int n)
{
	int		i;
	long	*ptr1;
	long	*ptr2;

	if (!dst && !src)
		return (0);
	i = 0;
	ptr1 = (long *)dst;
	ptr2 = (long *)src;
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (ptr1);
}
