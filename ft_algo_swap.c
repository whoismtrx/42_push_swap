/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:36:19 by orekabe           #+#    #+#             */
/*   Updated: 2022/03/02 02:58:01 by orekabe          ###   ########.fr       */
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

t_stack	ft_algo_swap(t_stack stack)
{
	// int	boool;
	// int	size_b;
	// int	i;
	// long stop;
	// boool = 1;
	// while (ft_check_if_not_sorted(stack) || (stack.head_a == stack.len && size_b == 0))
	// {
	// 	size_b = 0;
	// 	// puts("while1");
	// 	while (ft_check_if_not_sorted(stack))
	// 	{
	// 		if (stack.b[stack.head_b] < stack.b[stack.last_b] && size_b > 1)
	// 			stack = ft_rotate_b(stack);
	// 		else if (stack.b[stack.head_b] < stack.b[stack.head_b + 1] && size_b > 1)
	// 			stack = ft_swap_b(stack);
	// 		else if (stack.a[stack.head_a + 1] < stack.a[stack.head_a] && stack.a[stack.head_a + 1] > stack.a[stack.last_a])
	// 			stack = ft_swap_a(stack);
	// 		else if (stack.a[stack.head_a] > stack.a[stack.last_a])
	// 			stack = ft_rotate_a(stack);
	// 		else if (stack.a[stack.head_a + 1] < stack.a[stack.head_a])
	// 			stack = ft_swap_a(stack);
	// 		else if (size_b < 2)
	// 		{
	// 			stack = ft_push_b(stack);
	// 			size_b++;
	// 		}
	// 		else if (stack.a[stack.head_a] > stack.b[stack.head_b + 1] || stack.a[stack.head_a] < stack.b[stack.last_b])
	// 		{
	// 			stack = ft_push_b(stack);
	// 			size_b++;
	// 		}
	// 		else
	// 			break ;
	// 		// ft_print_stack_a(stack);
	// 		// ft_print_stack_b(stack);
	// 		// printf("\n%d|", stack.head_b);
	// 		// printf("%d\n", stack.len);
	// 		// printf("%ld\n", stack.b[stack.head_b]);
	// 	}
	// 	int i = stack.last_a;
	// 	while (stack.a[i] > stack.a[i - 1] && i > 0)
	// 		i--;
	// 	if (i == 0)
	// 		stop = stack.a[i - 1];
	// 	stop = stack.a[i - 1];
		
	// 	long back = stack.a[stack.last_a];
	// 	while (stack.head_b < stack.len)
	// 	{
	// 		// puts("while2");
	// 		// printf("%ld\n", stop);
	// 		// ft_print_stack_a(stack);
	// 		// ft_print_stack_b(stack);
	// 		if (!ft_check_if_not_sorted(stack) && stack.last_b == stack.len)
	// 			exit (0);
	// 		if (stack.a[stack.last_a] > stack.b[stack.head_b] && stop != stack.a[stack.last_a] && ft_check_if_not_sorted(stack))
	// 		{
	// 			stack = ft_rev_rot_a(stack);
	// 			if (stack.a[stack.last_a])
	// 				boool = 0;
	// 		}
	// 		else if (stack.b[stack.head_b] < stack.b[stack.head_a] && stack.b[stack.head_b] > stack.a[stack.last_a])
	// 			stack = ft_push_a(stack);
	// 		else
	// 			stack = ft_push_a(stack);
	// 		// printf("\n%ld|", stack.a[stack.head_a]);
	// 		// printf("%d\n", stack.len);
	// 		// printf("%ld\n", stack.b[stack.head_b]);
	// 	}
	// 	while (stack.a[stack.last_a] != back)
	// 	{
	// 		// puts("while3");
	// 		stack = ft_rev_rot_a(stack);
	// 		// ft_print_stack_a(stack);
	// 		// ft_print_stack_b(stack);
	// 	}
	// 	// break;
	// }
	
	// while (ft_check_if_not_sorted(stack) || stack.head_b != stack.len)
	// {
	// 	int	size_b = 0;
	// 	while (ft_check_if_not_sorted(stack))
	// 	{
	// 		if (stack.b[stack.head_b] < stack.b[stack.last_b] && size_b > 1)
	// 			stack = ft_rotate_b(stack);
	// 		else if (stack.b[stack.head_b] < stack.b[stack.head_b + 1] && size_b > 1)
	// 			stack = ft_swap_b(stack);
	// 		else if (stack.a[stack.head_a] > stack.a[stack.last_a])
	// 			stack = ft_rotate_a(stack);
	// 		else if ((stack.a[stack.head_a] > stack.b[stack.head_b + 1]) || stack.a[stack.head_a] < stack.b[stack.last_b])
	// 		{
	// 			stack = ft_push_b(stack);
	// 			size_b++;
	// 		}
	// 		else if (size_b < 2)
	// 		{
	// 			stack = ft_push_b(stack);
	// 			size_b++;
	// 		}
	// 		else
	// 			break;
	// 	}
	// 	long stop;
	// 	long back = stack.a[stack.last_a];
	// 	int i = stack.last_a;
	// 		while (stack.a[i] > stack.a[i - 1] && i > 0)
	// 			i--;
	// 		if (i == 0)
	// 			stop = stack.a[i];
	// 		stop = stack.a[i - 1];
	// 	while (stack.head_b < stack.len)
	// 	{
	// 		if (stack.a[stack.last_a] > stack.b[stack.head_b] && stack.a[stack.last_a] != stop)
	// 		{
	// 			stack = ft_rev_rot_a(stack);
	// 		}
	// 		else if (stack.b[stack.head_b] > stack.a[stack.last_a])
	// 			stack = ft_push_a(stack);
	// 		else if (stack.b[stack.head_b] < stack.a[stack.head_a])
	// 			stack = ft_push_a(stack);
	// 	}
	// 	while (stack.a[stack.last_a] != back)
	// 		stack = ft_rev_rot_a(stack);
	// 	// ft_print_stack_a(stack);
	// 	// ft_print_stack_b(stack);
	// }
	
	// long	stop;
	// long	back;
	// while (ft_check_if_not_sorted(stack) || stack.head_b != stack.len)
	// {
	// 	while (ft_check_if_not_sorted(stack) || stack.head_b < stack.len)
	// 	{
	// 		if (stack.b[stack.head_b] < stack.b[stack.head_b + 1] && stack.head_b < stack.last_b)
	// 			stack = ft_swap_b(stack);
	// 		else if (stack.b[stack.head_b] < stack.b[stack.last_b] && stack.head_b < stack.last_b)
	// 			stack = ft_rotate_b(stack);
	// 		else if (stack.a[stack.head_a] < stack.a[stack.last_a] && stack.a[stack.head_a] > stack.b[stack.head_b + 1])
	// 			stack = ft_push_b(stack);
	// 		else if (stack.a[stack.head_a + 1] > stack.a[stack.head_a] && stack.a[stack.head_a + 1] > stack.a[stack.last_a])
	// 			stack = ft_swap_a(stack);
	// 		else if (stack.a[stack.head_a + 1] > stack.a[stack.head_a] && stack.a[stack.head_a + 1] < stack.b[stack.last_b] && stack.head_b < stack.last_b)
	// 			stack = ft_swap_a(stack);
	// 		else if (stack.a[stack.head_a + 1] > stack.a[stack.head_a] && stack.a[stack.head_a + 1] > stack.b[stack.head_b + 1] && stack.head_b < stack.last_b)
	// 			stack = ft_swap_a(stack);
	// 		else if (stack.a[stack.head_a] > stack.a[stack.last_a])
	// 			stack = ft_rotate_a(stack);
	// 		else if (stack.a[stack.head_a] < stack.a[stack.last_a] && stack.head_b == stack.len)
	// 			stack = ft_push_b(stack);
	// 		else if (stack.a[stack.head_a] < stack.a[stack.last_a] && stack.a[stack.head_a] > stack.b[stack.head_b])
	// 			stack = ft_push_b(stack);
	// 		else
	// 			break;
	// 	}
	// 	int i = stack.last_a;
	// 	while (stack.a[i] > stack.a[i - 1] && i > 0)
	// 		i--;
	// 	if (i == 0)
	// 		stop = stack.a[i];
	// 	else
	// 		stop = stack.a[i - 1];
	// 	back = stack.a[stack.last_a];
	// 	if (!ft_check_if_not_sorted(stack) && stack.head_b == stack.len)
	// 		break;
	// 	while (stack.a[stack.last_a] != stop || stack.head_b < stack.len)
	// 	{
	// 		if (stack.b[stack.head_b] > stack.a[stack.last_a])
	// 			stack = ft_push_a(stack);
	// 		else if (stack.a[stack.last_a] == stop)
	// 			stack = ft_push_a(stack);
	// 		else
	// 			stack = ft_rev_rot_a(stack);
	// 		if (stack.head_b == stack.len && stack.a[stack.last_a] < stack.a[stack.head_a])
	// 		{
	// 			stack = ft_rev_rot_a(stack);
	// 			break;
	// 		}
	// 		// ft_print_stack_a(stack);
	// 		// ft_print_stack_b(stack);
	// 	}
	// 	if (!ft_check_if_not_sorted(stack) && stack.head_b == stack.len)
	// 		break;
	// 	// while (stack.a[stack.last_a] != back || stack.a[stack.head_a] > stack.a[stack.head_a + 1])
	// 	// {
	// 	// 	if (stack.b[stack.head_b] > stack.b[stack.last_b] && stack.head_b < stack.last_b)
	// 	// 		stack = ft_rotate_b(stack);
	// 	// 	else if (stack.b[stack.head_b] > stack.b[stack.head_b + 1] && stack.head_b < stack.last_b)
	// 	// 		stack = ft_swap_b(stack);
	// 	// 	else if (stack.a[stack.last_a] == back && stack.a[stack.head_a] > stack.a[stack.head_a + 1])
	// 	// 		stack = ft_push_b(stack);
	// 	// 	else if (stack.a[stack.last_a] > stack.a[stack.head_a] && stack.a[stack.last_a] > stack.a[stack.last_a - 1])
	// 	// 		stack = ft_rev_rot_a(stack);
	// 	// 	else if (stack.a[stack.last_a] > stack.a[stack.head_a])
	// 	// 		stack = ft_rev_rot_a(stack);
	// 	// 	else if (stack.a[stack.head_a] > stack.a[stack.head_a + 1])
	// 	// 		stack = ft_push_b(stack);
	// 	// 	else
	// 	// 		break;
	// 	// }
	// 	// if (!ft_check_if_not_sorted(stack) && stack.head_b == stack.len)
	// 	// 	break;
	// 	// long last = stack.a[stack.last_a];
	// 	// while (stack.last_a + 1 < stack.len)
	// 	// {
	// 	// 	if (stack.a[stack.head_a] < stack.b[stack.head_b] && stack.a[stack.head_a] != last)
	// 	// 		stack = ft_rotate_a(stack);
	// 	// 	else if (stack.b[stack.head_b] < stack.a[stack.head_a])
	// 	// 		stack = ft_push_a(stack);
	// 	// 	else break;
	// 	// }
	// 	// if (!ft_check_if_not_sorted(stack) && stack.head_b == stack.len)
	// 	// 	break;
	// 	// while (stack.head_b < stack.len)
	// 	// {
	// 	// 	if (stack.a[stack.head_a] > stack.a[stack.last_a])
	// 	// 		stack = ft_rotate_a(stack);
	// 	// 	else if (stack.a[stack.head_a] < stack.b[stack.head_b])
	// 	// 		stack = ft_push_a(stack);
	// 	// }
	// 	if (!ft_check_if_not_sorted(stack) && stack.head_b == stack.len)
	// 		break;
	// }
	
	
	long	mid;
	long	max;
	int		pos = 0;
	while (ft_check_if_not_sorted(stack))
	{
		stack.sorted_tab = ft_stacpy(stack);
		stack.sorted_tab = ft_sort_tab(stack, stack.last_a + 1);
		pos = (stack.last_a / 2) + 1;
		mid = stack.sorted_tab[pos];
		while (stack.last_a >= pos && ft_check_if_not_sorted(stack))
		{
			if (stack.a[stack.head_a] < mid)
				stack = ft_push_b(stack);
			else if (ft_check_less_than_mid(stack, mid))
				break;
			else
				stack = ft_rotate_a(stack);
		}
		// break;
		if (stack.last_a == 2)
			break;
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
				stack = ft_rotate_b(stack);
		}
		if (stack.a[stack.head_a] > stack.a[stack.head_a + 1])
			stack = ft_swap_a(stack);
		else if (stack.b[stack.head_b] < stack.a[stack.head_a])
			stack = ft_push_a(stack);
		else if (stack.a[stack.head_a] < stack.b[stack.head_b])
			stack = ft_push_a(stack);
		else break;
	}
	return (stack);
}
