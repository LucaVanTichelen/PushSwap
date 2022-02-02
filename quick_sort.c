/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:59:15 by lvan-tic          #+#    #+#             */
/*   Updated: 2022/02/01 15:29:25 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_lower(int *a, int *b, int *c, int median)
{
	int	i;
	int	rb;

	i = 0;
	rb = 0;
	while (i < c[c[0] - 1])
	{
		while (a[1] < median)
		{
			push_b(a, b);
			i++;
		}
		if (i < c[c[0] - 1])
		{
			rotate_a(a);
			rb++;
		}
	}
	while (rb--)
		reverse_rotate_a(a);
}

void	quick_sort_a(int *a, int *b, int *c)
{
	int	median;

	if (c[c[0]] == 1)
		c[0]--;
	else if (c[c[0]] == 2)
	{
		if (a[1] > a[2])
			swap_a(a);
		c[0]--;
	}
	else
	{
		while (c[c[0]] > 2)
		{
			median = find_median(a, c[c[0]]);
			c[c[0] + 1] = (c[c[0]] + 1) / 2;
			c[c[0]] = c[c[0]] / 2;
			c[0]++;
			push_lower(a, b, c, median);
		}
		if (a[1] > a[2])
			swap_a(a);
		c[0]--;
	}
}

void	quick_sort_b(int *a, int *b, int *c)
{
	int	median;
	int	i;
	int	rb;

	i = 0;
	rb = 0;
	median = find_median(b, c[c[0]]);
	c[c[0] + 1] = (c[c[0]] + 1) / 2;
	c[c[0]] = c[c[0]] / 2;
	c[0]++;
	while (i < c[c[0]])
	{
		while (b[1] >= median)
		{
			push_a(a, b);
			i++;
		}
		if (i < c[c[0]])
		{
			rotate_b(b);
			rb++;
		}
	}
	while (rb--)
		reverse_rotate_b(b);
}

void	sort_b(int *a, int *b, int *c)
{
	while (b[0] > 0)
	{
		if (c[c[0]] == 1)
		{
			push_a(a, b);
			c[0]--;
		}
		else if (c[c[0]] == 2)
		{
			if (b[1] < b[2])
				swap_b(b);
			push_a(a, b);
			push_a(a, b);
			c[0]--;
		}
		else
		{
			quick_sort_b(a, b, c);
			quick_sort_a(a, b, c);
		}
	}
	free(c);
}

void	quick_sort(int *a, int *b)
{
	int	*c;
	int	median;
	int	chunk;
	int	i;

	c = count_chunks(a);
	chunk = 1;
	while (a[0] > 2)
	{
		i = 0;
		median = find_median(a, a[0]);
		while (i < c[chunk])
		{
			while (a[1] < median)
			{
				push_b(a, b);
				i++;
			}
			bring_closest(a, median);
		}
		chunk++;
	}
	if (a[1] > a[2])
		swap_a(a);
	sort_b(a, b, c);
}
