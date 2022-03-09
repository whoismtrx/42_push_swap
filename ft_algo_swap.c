/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:36:19 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/10 00:09:24 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_check_less_than_mid(t_stack stack, long mid)
{
	int	i;

	i = 0;
	while (i <= stack.last_a)
	{
		if (stack.a[i] < mid)
			return (0);
		i++;
	}
	return (1);
}

int		ft_get_max(t_stack stack)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	pos = stack.head_b;
	j = stack.head_b + 1;
	while (i < stack.len)
	{
		if (stack.b[pos] < stack.b[j] && j < stack.len)
		{
			pos = j;
		}
		j++;
		i++;
	}
	return (pos);
}

int		ft_get_min(t_stack stack)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	pos = stack.head_b;
	j = stack.head_b + 1;
	while (i < stack.len)
	{
		if (stack.b[pos] > stack.b[j] && j < stack.len)
		{
			pos = j;
		}
		j++;
		i++;
	}
	return (pos);
}

int	ft_ra_or_rra(t_stack stack, long mid)
{
	int	up = 0;
	int	down = 0;
	int	i = 0;
	
	while (i < (stack.last_a / 2) + 1)
	{
		if (stack.a[i] < mid)
			up++;
		i++;
	}
	i = (stack.last_a / 2) + 1;
	while (i <= stack.last_a)
	{
		if (stack.a[i] < mid)
			down++;
		i++;
	}
	printf("|%d| == |%d|", up, down);
	if (down > up)
		return (1);
	return (0);
}

t_stack	ft_algo_swap(t_stack stack)
{	
	long	mid;
	long	max;
	long	midl;
	long	lmid = stack.sorted_tab[0];
	int		pos = 0;
	int		i = 7;
	while (stack.last_a >= 0)
	{
		stack.sorted_tab = ft_stacpy(stack);
		stack.sorted_tab = ft_sort_tab(stack, stack.last_a + 1);
		pos = (stack.last_a / i) + 1;
		mid = stack.sorted_tab[pos];
		midl = stack.sorted_tab[pos / 2];
		while (stack.last_a >= pos)
		{
			if (stack.b[stack.head_b] <= midl && stack.b[stack.head_b] >= lmid && stack.head_b < stack.last_b - 1 && stack.a[stack.head_a] > mid)
				stack = ft_rotate_r(stack, 0);
			else if (stack.b[stack.head_b] <= midl && stack.b[stack.head_b] >= lmid && stack.head_b < stack.last_b - 1)
				stack = ft_rotate_b(stack, 1);
			if (stack.a[stack.head_a] <= mid)
				stack = ft_push_b(stack);
			else if (ft_check_less_than_mid(stack, mid))
				break;
			else
				stack = ft_rotate_a(stack, 1);
		}
		if (stack.last_a <= 110)
			i = 3;
		else if (stack.last_a <= 190)
			i = 4;
		else if (stack.last_a <= 300)
			i = 5;
		else if (stack.last_a <= 430)
			i = 6;
		if (stack.last_a == 0)
			break;
		lmid = mid;
	}
	while (ft_check_if_not_sorted(stack) || stack.head_b < stack.len)
	{
		pos = ft_get_max(stack);
		max = stack.b[pos];
		mid = ((stack.len - stack.head_b) / 2) + stack.head_b;
		while (stack.b[stack.head_b] != max)
		{
			if (pos > mid)
				stack = ft_rev_rot_b(stack);
			else if (pos <= mid)
				stack = ft_rotate_b(stack, 1);
		}
		if (stack.a[stack.head_a] > stack.a[stack.head_a + 1])
			stack = ft_swap_a(stack);
		else if (stack.b[stack.head_b] < stack.a[stack.head_a])
			stack = ft_push_a(stack);
		else if (stack.a[stack.head_a] < stack.b[stack.head_b])
			stack = ft_push_a(stack);
	}
	return (stack);
}
