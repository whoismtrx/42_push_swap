/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:36:19 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/10 05:46:55 by orekabe          ###   ########.fr       */
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
	pos = 0;
	j = 1;
	while (i <= stack.last_a)
	{
		if (stack.a[pos] > stack.a[j] && j <= stack.last_a)
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

int	ft_algo_swap_test1(t_stack stack2)
{	
	long	mid;
	long	max;
	long	midl;
	long	lmid = stack2.sorted_tab[0];
	int		pos = 0;
	int		i = 6;
	int		j = 0;
	while (stack2.last_a >= 0)
	{
		stack2.sorted_tab = ft_stacpy(stack2);
		stack2.sorted_tab = ft_sort_tab(stack2, stack2.last_a + 1);
		pos = (stack2.last_a / i) + 1;
		mid = stack2.sorted_tab[pos];
		midl = stack2.sorted_tab[pos / 2];
		while (stack2.last_a >= pos)
		{
			if (stack2.b[stack2.head_b] <= midl && stack2.b[stack2.head_b] >= lmid && stack2.head_b < stack2.last_b - 1 && stack2.a[stack2.head_a] > mid)
			{
				stack2 = ft_rotate_r(stack2, 0);
				j++;
			}
			else if (stack2.b[stack2.head_b] <= midl && stack2.b[stack2.head_b] >= lmid && stack2.head_b < stack2.last_b - 1)
			{
				stack2 = ft_rotate_b(stack2, 0);
				j++;
			}
			if (stack2.a[stack2.head_a] <= mid)
			{
				stack2 = ft_push_b(stack2, 0);
				j++;
			}
			else if (ft_check_less_than_mid(stack2, mid))
				break;
			else
			{
				stack2 = ft_rotate_a(stack2, 0);
				j++;
			}
		}
		if (stack2.last_a <= 110)
			i = 3;
		else if (stack2.last_a <= 190)
			i = 4;
		else if (stack2.last_a <= 300)
			i = 5;
		else if (stack2.last_a <= 430)
			i = 6;
		if (stack2.last_a == 0)
			break;
		lmid = mid;
	}
	while (ft_check_if_not_sorted(stack2) || stack2.head_b < stack2.len)
	{
		pos = ft_get_max(stack2);
		max = stack2.b[pos];
		mid = ((stack2.len - stack2.head_b) / 2) + stack2.head_b;
		while (stack2.b[stack2.head_b] != max)
		{
			if (pos > mid)
			{
				stack2 = ft_rev_rot_b(stack2, 0);
				j++;
			}
			else if (pos <= mid)
			{
				stack2 = ft_rotate_b(stack2, 0);
				j++;
			}
		}
		if (stack2.a[stack2.head_a] > stack2.a[stack2.head_a + 1])
		{
			stack2 = ft_swap_a(stack2, 0);
			j++;
		}
		else
		{
			stack2 = ft_push_a(stack2, 0);
			j++;
		}
	}
	return (j);
}

int	ft_algo_swap_test2(t_stack stack3)
{	
	long	mid;
	long	max;
	long	midl;
	long	lmid = stack3.sorted_tab[0];
	int		pos = 0;
	int		i = 7;
	int		j = 0;
	while (stack3.last_a >= 0)
	{
		stack3.sorted_tab = ft_stacpy(stack3);
		stack3.sorted_tab = ft_sort_tab(stack3, stack3.last_a + 1);
		pos = (stack3.last_a / i) + 1;
		mid = stack3.sorted_tab[pos];
		midl = stack3.sorted_tab[pos / 2];
		while (stack3.last_a >= pos)
		{
			if (stack3.b[stack3.head_b] <= midl && stack3.b[stack3.head_b] >= lmid && stack3.head_b < stack3.last_b - 1 && stack3.a[stack3.head_a] > mid)
			{
				stack3 = ft_rotate_r(stack3, 0);
				j++;
			}
			else if (stack3.b[stack3.head_b] <= midl && stack3.b[stack3.head_b] >= lmid && stack3.head_b < stack3.last_b - 1)
			{
				stack3 = ft_rotate_b(stack3, 0);
				j++;
			}
			if (stack3.a[stack3.head_a] <= mid)
			{
				stack3 = ft_push_b(stack3, 0);
				j++;
			}
			else if (ft_check_less_than_mid(stack3, mid))
				break;
			else
			{
				stack3 = ft_rotate_a(stack3, 0);
				j++;
			}
		}
		if (stack3.last_a <= 110)
			i = 3;
		else if (stack3.last_a <= 190)
			i = 4;
		else if (stack3.last_a <= 300)
			i = 5;
		else if (stack3.last_a <= 430)
			i = 6;
		if (stack3.last_a == 0)
			break;
		lmid = mid;
	}
	while (ft_check_if_not_sorted(stack3) || stack3.head_b < stack3.len)
	{
		pos = ft_get_max(stack3);
		max = stack3.b[pos];
		mid = ((stack3.len - stack3.head_b) / 2) + stack3.head_b;
		while (stack3.b[stack3.head_b] != max)
		{
			if (pos > mid)
			{
				stack3 = ft_rev_rot_b(stack3, 0);
				j++;
			}
			else if (pos <= mid)
			{
				stack3 = ft_rotate_b(stack3, 0);
				j++;
			}
		}
		if (stack3.a[stack3.head_a] > stack3.a[stack3.head_a + 1])
		{
			stack3 = ft_swap_a(stack3, 0);
			j++;
		}
		else
		{
			stack3 = ft_push_a(stack3, 0);
			j++;
		}
	}
	return (j);
}

int	ft_algo_swap_test3(t_stack stack4)
{	
	long	mid;
	long	max;
	long	midl;
	long	lmid = stack4.sorted_tab[0];
	int		pos = 0;
	int		i = 5;
	int		j = 0;
	while (stack4.last_a >= 0)
	{
		stack4.sorted_tab = ft_stacpy(stack4);
		stack4.sorted_tab = ft_sort_tab(stack4, stack4.last_a + 1);
		pos = (stack4.last_a / i) + 1;
		mid = stack4.sorted_tab[pos];
		midl = stack4.sorted_tab[pos / 2];
		while (stack4.last_a >= pos)
		{
			if (stack4.b[stack4.head_b] <= midl && stack4.b[stack4.head_b] >= lmid && stack4.head_b < stack4.last_b - 1 && stack4.a[stack4.head_a] > mid)
			{
				stack4 = ft_rotate_r(stack4, 0);
				j++;
			}
			else if (stack4.b[stack4.head_b] <= midl && stack4.b[stack4.head_b] >= lmid && stack4.head_b < stack4.last_b - 1)
			{
				stack4 = ft_rotate_b(stack4, 0);
				j++;
			}
			if (stack4.a[stack4.head_a] <= mid)
			{
				stack4 = ft_push_b(stack4, 0);
				j++;
			}
			else if (ft_check_less_than_mid(stack4, mid))
				break;
			else
			{
				stack4 = ft_rotate_a(stack4, 0);
				j++;
			}
		}
		if (stack4.last_a <= 110)
			i = 3;
		else if (stack4.last_a <= 190)
			i = 4;
		else if (stack4.last_a <= 300)
			i = 5;
		else if (stack4.last_a <= 430)
			i = 6;
		if (stack4.last_a == 0)
			break;
		lmid = mid;
	}
	while (ft_check_if_not_sorted(stack4) || stack4.head_b < stack4.len)
	{
		pos = ft_get_max(stack4);
		max = stack4.b[pos];
		mid = ((stack4.len - stack4.head_b) / 2) + stack4.head_b;
		while (stack4.b[stack4.head_b] != max)
		{
			if (pos > mid)
			{
				stack4 = ft_rev_rot_b(stack4, 0);
				j++;
			}
			else if (pos <= mid)
			{
				stack4 = ft_rotate_b(stack4, 0);
				j++;
			}
		}
		if (stack4.a[stack4.head_a] > stack4.a[stack4.head_a + 1])
		{
			stack4 = ft_swap_a(stack4, 0);
			j++;
		}
		else
		{
			stack4 = ft_push_a(stack4, 0);
			j++;
		}
	}
	return (j);
}

int	ft_get_div(t_stack stack2, t_stack stack3, t_stack stack4)
{
	int	dev = 0;
	int	test1 = ft_algo_swap_test1(stack2);
	int test2 = ft_algo_swap_test2(stack3);
	int test3 = ft_algo_swap_test3(stack4);
	if (test1 <= test2 && test1 <= test3)
		dev = 6;
	else if (test2 <= test1 && test2 <= test3)
		dev = 7;
	else if (test3 <= test1 && test3 <= test2)
		dev = 5;
	return (dev);
}

t_stack	ft_algo_swap(t_stack stack, t_stack stack2, t_stack stack3, t_stack stack4)
{	
	long	mid;
	long	max;
	long	midl;
	long	lmid = stack.sorted_tab[0];
	int		pos = 0;
	int		i = ft_get_div(stack2, stack3, stack4);
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
				stack = ft_rotate_r(stack, 1);
			else if (stack.b[stack.head_b] <= midl && stack.b[stack.head_b] >= lmid && stack.head_b < stack.last_b - 1)
				stack = ft_rotate_b(stack, 1);
			if (stack.a[stack.head_a] <= mid)
				stack = ft_push_b(stack, 1);
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
				stack = ft_rev_rot_b(stack, 1);
			else if (pos <= mid)
				stack = ft_rotate_b(stack, 1);
		}
		if (stack.a[stack.head_a] > stack.a[stack.head_a + 1])
			stack = ft_swap_a(stack, 1);
		else
			stack = ft_push_a(stack, 1);
	}
	return (stack);
}
