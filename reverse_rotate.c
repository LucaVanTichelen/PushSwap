/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:42:24 by lvan-tic          #+#    #+#             */
/*   Updated: 2022/01/26 15:44:55 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(int *a)
{
	int	i;
	int	temp;

	i = a[0];
	temp = a[i];
	while (i > 1)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[i] = temp;
	ft_putchar_fd('r', 1);
	ft_putchar_fd('r', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
}

void	reverse_rotate_b(int *b)
{
	int	i;
	int	temp;

	i = b[0];
	temp = b[i];
	while (i > 1)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[i] = temp;
	ft_putchar_fd('r', 1);
	ft_putchar_fd('r', 1);
	ft_putchar_fd('b', 1);
	ft_putchar_fd('\n', 1);
}

void	reverse_rotate_both(int *a, int *b)
{
	int	i;
	int	temp;

	i = a[0];
	temp = a[i];
	while (i > 1)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[i] = temp;
	i = b[0];
	temp = b[i];
	while (i > 1)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[i] = temp;
	ft_putchar_fd('r', 1);
	ft_putchar_fd('r', 1);
	ft_putchar_fd('r', 1);
	ft_putchar_fd('\n', 1);
}
