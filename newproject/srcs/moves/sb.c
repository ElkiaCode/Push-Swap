/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:12:52 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/27 15:59:19 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_sb(t_stack *stack)
{
	t_list	*b;
	int		temp;

	b = stack->b;
	temp = b->first->next->data;
	b->first->next->data = b->first->data;
	b->first->data = temp;
	ft_putnstr_fd("sb", 1);
}
