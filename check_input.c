/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:40:07 by lvan-tic          #+#    #+#             */
/*   Updated: 2022/02/02 08:22:53 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_string(char **argv)
{
	int		i;
	int		index;
	int		args;
	char	str[12];

	i = 0;
	args = 0;
	while (argv[1][i] != '\0')
	{
		index = 0;
		while (argv[1][i] != ' ' && argv[1][i] != '\0')
		{
			str[index] = argv[1][i++];
			index++;
			if (index == 12)
				return (0);
		}
		str[index] = '\0';
		if (str_is_int(str) == 0)
			return (0);
		args++;
		if (argv[1][i] == ' ')
			i++;
	}
	return (args);
}

int	check_args(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (str_is_int(argv[i]) == 0)
			return (0);
		i++;
	}
	return (argc - 1);
}

int	str_is_int(char *str)
{
	int		i;
	long	nbr;

	i = 0;
	if (str[0] == '-' && (str[1] <= '0' || str[1] > '9'))
		return (0);
	if (str[0] == '-')
		i++;
	if (str[i] == '0' && str[i + 1] >= '0' && str[i + 1] <= '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] != '\0' || i > 11)
		return (0);
	else if (i >= 10)
	{
		nbr = str_to_long(str);
		if (nbr > 2147483647 || nbr < -2147483648)
			return (0);
	}
	return (1);
}

int	check_duplicates(int *a, int *b)
{
	int	x;
	int	y;

	x = 1;
	while (x < a[0])
	{
		y = x + 1;
		while (y <= a[0])
		{
			if (a[x] == a[y])
			{
				ft_putstr_fd("Error\n", 2);
				free(a);
				free(b);
				return (0);
			}
			y++;
		}
		x++;
	}
	return (1);
}
