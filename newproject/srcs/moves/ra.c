/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:07:16 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/21 16:39:25 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// a (rotate a) : Décale d’une position vers le haut tous les élements de la pile a.
// Le premier élément devient le dernier.

void	ft_ra(node **a)
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
	ft_putnstr_fd("ra", 1);
}
