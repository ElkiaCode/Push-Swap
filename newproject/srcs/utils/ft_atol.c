/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:21:33 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/18 13:34:38 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_atol(const char *nptr)
{
	long	i;
	long	nbsign;
	long	j;

	i = 0;
	nbsign = 1;
	j = 0;
	if (nptr[i] == '-')
	{
		if (nptr[i] == '-')
			nbsign = -nbsign;
		i++;
	}
	while (nptr[i])
	{
		j = (j * 10) + (nptr[i] - '0');
		i++;
	}
	return (nbsign * j);
}
