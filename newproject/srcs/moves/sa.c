/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:12:52 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/27 15:59:12 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_sa(t_stack *stack)
{
	t_list	*a;
	int		temp;

	a = stack->a;
	temp = a->first->next->data;
	a->first->next->data = a->first->data;
	a->first->data = temp;
	ft_putnstr_fd("sa", 1);
}
