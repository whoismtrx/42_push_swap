/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:15:39 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/16 05:29:41 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memmove(void *dst, const void *src, int len)
{
	long	*ptr1;
	long	*ptr2;

	if (!dst && !src)
		return (0);
	ptr1 = (long *)dst;
	ptr2 = (long *)src;
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			ptr1[len] = ptr2[len];
	return (ptr1);
}
