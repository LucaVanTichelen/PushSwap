/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:52:56 by lvan-tic          #+#    #+#             */
/*   Updated: 2022/02/01 15:15:35 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*count_chunks(int *a)
{
	int	*chunks;
	int	i;
	int	count;

	i = a[0];
	count = 0;
	while (i > 2)
	{
		i = i - i / 2;
		count++;
	}
	chunks = malloc(sizeof(int) * a[0]);
	if (!chunks)
		return (NULL);
	i = a[0];
	chunks[0] = count;
	count = 1;
	while (i > 2)
	{
		chunks[count] = i / 2;
		i = i - i / 2;
		count++;
	}
	return (chunks);
}

int	find_below(int *a, int median)
{
	int	x;
	int	y;
	int	i;

	x = 1;
	y = a[0];
	i = 0;
	while (x <= y)
	{
		if (a[x] < median)
			return (x - 1);
		else if (a[y] < median)
			return (y - a[0] - 1);
		x++;
		y--;
		i++;
	}
	return (0);
}

void	bring_closest(int *a, int median)
{
	int	i;

	i = find_below(a, median);
	while (i > 0)
	{
		rotate_a(a);
		i--;
	}
	while (i < 0)
	{
		reverse_rotate_a(a);
		i++;
	}
}
