/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:42:32 by lvan-tic          #+#    #+#             */
/*   Updated: 2022/01/26 15:45:07 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(int *a)
{
	int	temp;

	temp = a[1];
	a[1] = a[2];
	a[2] = temp;
	ft_putchar_fd('s', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
}

void	swap_b(int *b)
{
	int	temp;

	temp = b[1];
	b[1] = b[2];
	b[2] = temp;
	ft_putchar_fd('s', 1);
	ft_putchar_fd('b', 1);
	ft_putchar_fd('\n', 1);
}

void	swap_both(int *a, int *b)
{
	int	temp;

	temp = a[1];
	a[1] = a[2];
	a[2] = temp;
	temp = b[1];
	b[1] = b[2];
	b[2] = temp;
	ft_putchar_fd('s', 1);
	ft_putchar_fd('s', 1);
	ft_putchar_fd('\n', 1);
}
