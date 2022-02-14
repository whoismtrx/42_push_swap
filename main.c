/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 23:00:36 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/14 23:21:22 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



int	main(int argc, char **argv)
{
	int	len;
	t_stack stack;
	
	len = ft_get_len_tab(argv);
	stack = ft_instialise_stack(stack, len);
	stack.a = ft_get_stack_a(stack, argv);
	ft_check_error(stack, argv);
	printf("%d", len);
}
