/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-20 15:45:24 by cparodi           #+#    #+#             */
/*   Updated: 2024-06-20 15:45:24 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void ft_rrb(node *b)
{
    node *first;
    node *second;

    first = b->tail;
    second = b->tail->prev;
    b->tail = second;
    second->next = NULL;
    b->head->prev = first;
    first->next = b->head;
    first->prev = NULL;
    b->tail = first;
    ft_putnstr("rrb", 1);
}