/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:32:12 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/15 01:19:07 by orekabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define INT_MIN -2147483648
# define INT_MAX 2147483647

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	long	*a;
	long	*b;
	int		head;
	int		last;
}				t_stack;

long	ft_atoi(char *str);
int		ft_isdigit(int c);
int		ft_strlen(char *s);
void	ft_print_error(void);
void	ft_rev_stack(char *str);
int		ft_get_len_tab(char **argv);
long	*ft_get_stack_a(t_stack stack, char **argv);
t_stack	ft_create_stacks(t_stack stack, char **argv);
t_stack	ft_instialise_stack(t_stack stack, int len);
int		ft_check_srtnbr(char **argv);
int		ft_check_limits(t_stack stack);
int		ft_check_duplicate(t_stack stack);
void	ft_check_error(t_stack stack, char **argv);

#endif