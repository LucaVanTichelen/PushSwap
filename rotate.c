/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:42:21 by lvan-tic          #+#    #+#             */
/*   Updated: 2022/01/26 15:45:02 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(int *a)
{
	int	i;
	int	temp;

	i = 1;
	temp = a[1];
	while (i < a[0])
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = temp;
	ft_putchar_fd('r', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
}

void	rotate_b(int *b)
{
	int	i;
	int	temp;

	i = 1;
	temp = b[1];
	while (i < b[0])
	{
		b[i] = b[i + 1];
		i++;
	}
	b[i] = temp;
	ft_putchar_fd('r', 1);
	ft_putchar_fd('b', 1);
	ft_putchar_fd('\n', 1);
}

void	rotate_both(int *a, int *b)
{
	int	i;
	int	temp;

	i = 1;
	temp = a[1];
	while (i < a[0])
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = temp;
	i = 1;
	temp = b[1];
	while (i < b[0])
	{
		b[i] = b[i + 1];
		i++;
	}
	b[i] = temp;
	ft_putchar_fd('r', 1);
	ft_putchar_fd('r', 1);
	ft_putchar_fd('\n', 1);
}
