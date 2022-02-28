/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orekabe <orekabe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:32:12 by orekabe           #+#    #+#             */
/*   Updated: 2022/02/28 16:13:41 by orekabe          ###   ########.fr       */
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
	long	*sorted_tab;
	int		head_a;
	int		last_a;
	int		head_b;
	int		last_b;
	long	temp_a;
	long	temp_b;
	int		len;
}				t_stack;

long	ft_atoi(char *str);
int		ft_isdigit(int c);
int		ft_strlen(char *s);
void	*ft_memmove(void *dst, const void *src, int len);
void	*ft_memcpy(void *dst, const void *src, int n);
void	ft_print_error(void);
void	ft_rev_stack(char *str);
int		ft_get_len_tab(char **argv);
long	*ft_get_stack_a(t_stack stack, char **argv);
long	*ft_sort_tab(t_stack stack, int len);
long	*ft_stacpy(t_stack stack);
t_stack	ft_create_stacks(t_stack stack, char **argv);
t_stack	ft_instialise_stack(t_stack stack, int len);
int		ft_check_srtnbr(char **argv);
int		ft_check_limits(t_stack stack);
int		ft_check_duplicate(t_stack stack);
void	ft_check_error(t_stack stack, char **argv);
t_stack	ft_swap_a(t_stack stack);
t_stack	ft_swap_b(t_stack stack);
t_stack	ft_swap_s(t_stack stack);
t_stack	ft_push_a(t_stack stack);
t_stack	ft_push_b(t_stack stack);
t_stack	ft_rotate_a(t_stack stack);
t_stack	ft_rotate_b(t_stack stack);
t_stack	ft_rotate_r(t_stack stack);
t_stack	ft_rev_rot_a(t_stack stack);
t_stack	ft_rev_rot_b(t_stack stack);
t_stack	ft_rev_rot_r(t_stack stack);
t_stack	ft_algo_swap(t_stack stack);
int		ft_check_if_not_sorted(t_stack stack);


void	ft_print_stack_a(t_stack stack);
void	ft_print_stack_b(t_stack stack);
#endif