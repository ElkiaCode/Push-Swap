/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:53:21 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/24 13:59:31 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// pa (push a) : Prend le premier élément au sommet de b et le met sur a.
// Ne fait rien si b est vide.

void	ft_pa(node **a, node **b)
{
	node	*temp;

	temp = *b;
	*b = temp->next;
	temp->next = *a;
	*a = temp;
	temp->prev = NULL;
	ft_putnstr_fd("pa", 1);
}
