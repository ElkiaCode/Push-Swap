/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:52:10 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/24 10:44:03 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_ss(node *a, node *b)
{
	node	*swap;
	node	*swap2;
	int		temp;

	swap = a->next;
	temp = a->data;
	a->data = swap->data;
	swap->data = temp;
	swap2 = b->next;
	temp = b->data;
	b->data = swap2->data;
	swap2->data = temp;
	ft_putnstr_fd("ss", 1);
}
