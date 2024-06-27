/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:05:16 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/26 13:46:25 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_pb(t_stack *list)
{
	node	*temp;

	temp = *a;
	*a = temp->next;
	temp->next = *b;
	*b = temp;
	temp->prev = NULL;
	ft_putnstr_fd("pb", 1);
}
