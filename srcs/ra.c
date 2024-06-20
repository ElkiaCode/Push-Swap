/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-20 15:07:16 by cparodi           #+#    #+#             */
/*   Updated: 2024-06-20 15:07:16 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

//a (rotate a) : Décale d’une position vers le haut tous les élements de la pile a.
//Le premier élément devient le dernier.

void ft_ra(node *a)
{
    node *first;
    node *second;

    first = a->head;
    second = a->head->next;
    a->head = second;
    second->prev = NULL;
    a->tail->next = first;
    first->prev = a->tail;
    first->next = NULL;
    a->tail = first;
    ft_putnstr("ra", 1);
}