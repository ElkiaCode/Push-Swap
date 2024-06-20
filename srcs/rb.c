/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-20 15:33:43 by cparodi           #+#    #+#             */
/*   Updated: 2024-06-20 15:33:43 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void ft_rb(node *b)
{
    node *first;
    node *second;

    first = b->head;
    second = b->head->next;
    b->head = second;
    second->prev = NULL;
    b->tail->next = first;
    first->prev = b->tail;
    first->next = NULL;
    b->tail = first;
    ft_putnstr("rb", 1);
}