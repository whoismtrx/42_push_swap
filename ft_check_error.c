/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:43:32 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/14 19:02:20 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_error(t_stack stack, char **argv)
{
	if (ft_check_srtnbr(argv)
		|| ft_check_limits(stack)
		|| ft_check_duplicate(stack))
		exit (1);
}
