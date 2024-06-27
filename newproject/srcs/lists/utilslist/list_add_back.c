/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:32:28 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/27 16:01:14 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

void	list_add_back(t_list *list, int content)
{
	t_node	*head;
	t_node	*node;

	node = create_node(content);
	head = list->first;
	if (!head)
		list->first = node;
	else
	{
		if (list->last == NULL)
			list->last = head;
		list->last->next = node;
		list->last = node;
		node->prev = list->last;
	}
	list->size++;
}
