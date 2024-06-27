/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:03:34 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/26 13:48:39 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/push_swap.h"

t_stack	init_list(void)
{
	t_stack	stack;

	stack.a = create_list();
	stack.b = create_list();
	return (stack);
}
