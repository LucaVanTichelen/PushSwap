/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-tic <lvan-tic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:30:14 by lvan-tic          #+#    #+#             */
/*   Updated: 2022/01/26 14:41:00 by lvan-tic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	str_to_int(char *s)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	if (s[i] == '-')
	{
		i++;
		while (s[i] != '\0')
		{
			nbr *= 10;
			nbr -= s[i] - '0';
			i++;
		}
		return (nbr);
	}
	while (s[i] != '\0')
	{
		nbr *= 10;
		nbr += s[i] - '0';
		i++;
	}
	return (nbr);
}

long	str_to_long(char *s)
{
	int		i;
	long	nbr;

	i = 0;
	nbr = 0;
	if (s[i] == '-')
	{
		i++;
		while (s[i] != '\0')
		{
			nbr *= 10;
			nbr -= s[i] - '0';
			i++;
		}
		return (nbr);
	}
	while (s[i] != '\0')
	{
		nbr *= 10;
		nbr += s[i] - '0';
		i++;
	}
	return (nbr);
}

void	str_to_arr(int args, char **argv, int *a, int *b)
{
	int		i;
	int		x;
	int		index;
	char	str[12];

	a[0] = args;
	b[0] = 0;
	i = 0;
	x = 1;
	while (x <= args)
	{
		index = 0;
		while (argv[1][i] != ' ' && argv[1][i] != '\0')
		{
			str[index] = argv[1][i];
			index++;
			i++;
		}
		str[index] = '\0';
		a[x] = str_to_int(str);
		x++;
		if (argv[1][i] == ' ')
			i++;
	}
}

int	argv_to_array(int args, char **argv, int *a, int *b)
{
	int	i;

	i = 1;
	a[0] = args;
	b[0] = 0;
	while (i < args + 1)
	{
		a[i] = str_to_int(argv[i]);
		i++;
	}
	return (1);
}
