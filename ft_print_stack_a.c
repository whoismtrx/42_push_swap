/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:58:55 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/19 02:59:20 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack_a(t_stack stack)
{
	int	i;

	i = -1;
	printf("||| A |||\n");
	while (++i <= stack.last_a)
		printf(" a%d = %ld\n", i, stack.a[i]);
}
