/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:45:24 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/26 13:31:48 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_rrb(t_stack *list)
{
	t_node	*temp;

	temp = list->b->last->prev;
	temp->next = NULL;
	list->b->last = temp;
	ft_putnstr_fd("rrb", 1);
}
