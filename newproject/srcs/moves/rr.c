/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:32:55 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/24 10:46:33 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	ra(node **a)
{
	node	*first;
	node	*second;

	first = *a;
	second = *a;
	second = ft_lstlast(second);
	*a = first->next;
	(*a)->prev = NULL;
	second->next = first;
	first->prev = second;
	first->next = NULL;
}

static void	rb(node **b)
{
	node	*first2;
	node	*second2;

	first2 = *b;
	second2 = *b;
	second2 = ft_lstlast(second2);
	*b = first2->next;
	(*b)->prev = NULL;
	second2->next = first2;
	first2->prev = second2;
	first2->next = NULL;
}

void	ft_rr(node **a, node **b)
{
	ra(a);
	rb(b);
	ft_putnstr_fd("rr", 1);
}
