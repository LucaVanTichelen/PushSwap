/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_median.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:18:49 by lvan-tic          #+#    #+#             */
/*   Updated: 2022/02/01 15:14:07 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *arr, int i, int j)
{
	int	temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int	partition(int *arr, int l, int r)
{
	int	pivot;
	int	i;
	int	j;

	pivot = arr[r];
	i = l - 1;
	j = l;
	while (j < r)
	{
		if (arr[j] < pivot)
		{
			i++;
			ft_swap(arr, i, j);
		}
		j++;
	}
	ft_swap(arr, i + 1, r);
	return (i + 1);
}

void	qs(int *arr, int l, int r)
{
	int	p;

	if (l >= r)
		return ;
	p = partition(arr, l, r);
	qs(arr, l, p - 1);
	qs(arr, p + 1, r);
}

int	find_median(int *a, int n)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(*arr) * n);
	if (!arr)
		return (0);
	i = 0;
	while (i < n)
	{
		arr[i] = a[i + 1];
		i++;
	}
	qs(arr, 0, n - 1);
	i = arr[n / 2];
	free(arr);
	return (i);
}
