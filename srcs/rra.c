/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-20 15:36:12 by cparodi           #+#    #+#             */
/*   Updated: 2024-06-20 15:36:12 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void ft_rra(node *a)
{
    node *first;
    node *second;

    first = a->tail;
    second = a->tail->prev;
    a->tail = second;
    second->next = NULL;
    a->head->prev = first;
    first->next = a->head;
    first->prev = NULL;
    a->tail = first;
    ft_putnstr("rra", 1);
}