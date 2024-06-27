/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:43:49 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/27 16:07:59 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	insert_value(t_stack *stacks, int argc, char **argv)
{
	int		temp;
	size_t	i;

	i = 0;
	while (i < (size_t)argc)
	{
		temp = ft_atol(argv[i]);
		list_add_back(stacks->a, temp);
		i++;
	}
}

t_stack	ft_list(int argc, char **argv)
{
	t_stack	stacks;

	stacks = init_list();
	insert_value(&stacks, argc, argv);
	return (stacks);
}
