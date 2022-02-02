/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 08:33:27 by lvan-tic          #+#    #+#             */
/*   Updated: 2022/02/02 08:27:43 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arrays(int *a, int *b)
{
	int	i;

	i = 1;
	if (b[0] != 0)
		return (1);
	while (i < a[0])
	{
		if (a[i] > a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	check_input(int argc, char **argv)
{
	int	args;

	if (argc == 1)
		args = 0;
	else if (argc == 2)
		args = check_string(argv);
	else
		args = check_args(argc, argv);
	if (args == 0 && argc > 1)
		ft_putstr_fd("Error\n", 2);
	return (args);
}

int	main(int argc, char **argv)
{
	int	args;
	int	*a;
	int	*b;

	args = check_input(argc, argv);
	if (args == 0)
		return (0);
	a = malloc(sizeof(*a) * (args + 1));
	if (!a)
		return (0);
	b = malloc(sizeof(*b) * (args + 1));
	if (!b)
		return (0);
	if (argc == 2)
		str_to_arr(args, argv, a, b);
	else
		argv_to_array(args, argv, a, b);
	if (check_duplicates(a, b) == 0)
		return (0);
	while (check_arrays(a, b) == 1)
		sort(a, b);
	free(a);
	free(b);
	return (0);
}
