/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:59:38 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/19 03:00:13 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack_b(t_stack stack)
{
	int	n;

	printf("||| B |||\n");
	n = stack.head_b;
	while (n <= stack.last_b)
		printf(" b%d = %ld\n", stack.head_b++ - 1, stack.b[n++]);
}
