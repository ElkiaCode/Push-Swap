/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:10:52 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/27 15:18:10 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

t_stack	*init_stack(int argc, const char **argv)
{
	t_node	*head;
	t_node	*current;
	int		i;

	i = 0;
	head = ft_lstnew(ft_atol(argv[i++]));
	current = head;
	while (i < argc)
	{
		current->next = ft_lstnew(ft_atol(argv[i]));
		current = current->next;
		i++;
	}
	return (head);
}
