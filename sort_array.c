/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:00:57 by lvan-tic          #+#    #+#             */
/*   Updated: 2022/02/01 16:11:19 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	sort_three(int *a)
{
	if (a[1] < a[2] && a[2] < a[3] && a[1] < a[3])
		return ;
	else if (a[1] < a[2] && a[2] > a[3] && a[1] < a[3])
	{
		reverse_rotate_a(a);
		swap_a(a);
	}
	else if (a[1] > a[2] && a[2] < a[3] && a[1] < a[3])
		swap_a(a);
	else if (a[1] < a[2] && a[2] > a[3] && a[1] > a[3])
		reverse_rotate_a(a);
	else if (a[1] > a[2] && a[2] < a[3] && a[1] > a[3])
		rotate_a(a);
	else
	{
		rotate_a(a);
		swap_a(a);
	}
}

int	find_min(int *a)
{
	int	min;
	int	index;
	int	i;

	min = a[1];
	index = 1;
	i = 2;
	while (i <= a[0])
	{
		if (a[i] < min)
		{
			min = a[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void	selection_sort(int *a, int *b)
{
	int	index;

	while (a[0] > 3)
	{
		index = find_min(a);
		if (index <= (a[0] / 2) + 1)
		{
			while (index-- > 1)
				rotate_a(a);
			push_b(a, b);
		}
		else
		{
			while (index++ <= a[0])
				reverse_rotate_a(a);
			push_b(a, b);
		}
	}
	sort_three(a);
	while (b[0] > 0)
		push_a(a, b);
}

void	sort(int *a, int *b)
{
	if (a[0] == 2)
		swap_a(a);
	else if (a[0] == 3)
		sort_three(a);
	else if (a[0] <= 20)
		selection_sort(a, b);
	else
		quick_sort(a, b);
}
