/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:42:13 by lvan-tic          #+#    #+#             */
/*   Updated: 2022/02/01 16:10:14 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

int		check_string(char **argv);
int		check_args(int argc, char **argv);
int		str_is_int(char *str);
int		check_duplicates(int *a, int *b);

int		str_to_int(char *s);
long	str_to_long(char *s);
void	str_to_arr(int args, char **argv, int *a, int *b);
int		argv_to_array(int argc, char **argv, int *a, int *b);

void	ft_swap(int *arr, int i, int j);
int		partition(int *arr, int l, int r);
void	qs(int *arr, int l, int r);
int		find_median(int *a, int n);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

int		check_arrays(int *a, int *b);
int		check_input(int argc, char **argv);

void	push_a(int *a, int *b);
void	push_b(int *a, int *b);

int		*count_chunks(int *a);
int		find_below(int *a, int median);
void	bring_closest(int *a, int median);

void	push_lower(int *a, int *b, int *c, int median);
void	quick_sort_a(int *a, int *b, int *c);
void	quick_sort_b(int *a, int *b, int *c);
void	sort_b(int *a, int *b, int *c);
void	quick_sort(int *a, int *b);

void	reverse_rotate_a(int *a);
void	reverse_rotate_b(int *b);
void	reverse_rotate_both(int *a, int *b);

void	rotate_a(int *a);
void	rotate_b(int *b);
void	rotate_both(int *a, int *b);

void	sort_three(int *a);
int		find_min(int *a);
void	selection_sort(int *a, int *b);
void	sort(int *a, int *b);

void	swap_a(int *a);
void	swap_b(int *b);
void	swap_both(int *a, int *b);

#endif
