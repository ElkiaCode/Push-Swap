/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:33:52 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/19 14:10:46 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	ft_isduplicate(char **argv)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	ft_num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	parsing(int argc, char **argv)
{
	size_t	i;

	i = 0;
	if (argc == 0)
		error_message(1);
	if (argc == 1)
		exit(0);
	while (argv[i])
	{
		if (ft_num(argv[i]) == 0)
			error_message(2);
		if (ft_atol(argv[i]) < -2147483648 || ft_atol(argv[i]) > 214783647)
			error_message(3);
		i++;
	}
	if (ft_isduplicate(argv) == 0)
		error_message(4);
}
