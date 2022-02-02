/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:42:04 by lvan-tic          #+#    #+#             */
/*   Updated: 2022/01/26 15:44:46 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(int *a, int *b)
{
	int	i;

	i = a[0];
	while (i > 0)
	{
		a[i + 1] = a[i];
		i--;
	}
	a[1] = b[1];
	a[0] += 1;
	i = 1;
	while (i < b[0])
	{
		b[i] = b[i + 1];
		i++;
	}
	b[0] -= 1;
	ft_putchar_fd('p', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
}

void	push_b(int *a, int *b)
{
	int	i;

	i = b[0];
	while (i > 0)
	{
		b[i + 1] = b[i];
		i--;
	}
	b[1] = a[1];
	b[0] += 1;
	i = 1;
	while (i < a[0])
	{
		a[i] = a[i + 1];
		i++;
	}
	a[0] -= 1;
	ft_putchar_fd('p', 1);
	ft_putchar_fd('b', 1);
	ft_putchar_fd('\n', 1);
}
