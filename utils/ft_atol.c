/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:21:33 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/14 15:35:23 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	white_space(char *nptr, int i)
{
	if (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\r'
		|| nptr[i] == '\v' || nptr[i] == '\f')
	{
		return (1);
	}
	else
		return (0);
}

int	ft_atol(const char *nptr)
{
	int	i;
	int	nbsign;
	int	j;

	i = 0;
	nbsign = 1;
	j = 0;
	while (white_space(nptr, i))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			nbsign = -nbsign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		j = (j * 10) + (nptr[i] - '0');
		i++;
	}
	return (nbsign * j);
}
