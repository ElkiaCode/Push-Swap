/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:44:37 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/24 16:21:35 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	ft_rra(node **a)
{
	node	*last;
	node	*second;

	if (!a || !*a || !(*a)->next)
		return ;
	last = ft_lstlast(*a);
	second = last->prev;
	last->next = *a;
	*a = last;
	second->next = NULL;
}

static void	ft_rrb(node **b)
{
}

void	ft_rrr(node **a, node **b)
{
	ft_rra(a);
	ft_rrb(b);
	ft_putnstr_fd("rrr", 1);
}
