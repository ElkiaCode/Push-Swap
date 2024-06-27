/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:36:12 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/24 17:19:00 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_rra(node **a)
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
	ft_putnstr_fd("rra", 1);
}
