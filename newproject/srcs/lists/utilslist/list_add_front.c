/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:38:04 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/27 16:08:56 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	list_add_front(t_list *list, int content)
{
	t_node	*head;
	t_node	*last;
	t_node	*node;

	head = list->first;
	node = create_node(content);
	if (head == NULL)
		list->first = node;
	else
	{
		last = list->last;
		if (last == NULL)
			last = head;
		node->next = head;
		head->prev = node;
		list->first = node;
		list->last = last;
	}
	list->size++;
}
