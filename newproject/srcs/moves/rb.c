/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:33:43 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/21 16:39:21 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_rb(node **b)
{
	node	*first;
	node	*second;

	first = *b;
	second = *b;
	second = ft_lstlast(second);
	*b = first->next;
	(*b)->prev = NULL;
	second->next = first;
	first->prev = second;
	first->next = NULL;
	ft_putnstr_fd("rb", 1);
}
