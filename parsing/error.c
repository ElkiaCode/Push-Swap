/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:46:58 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/14 15:34:54 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	error_message(int error)
{
	if (error == 1)
		write(1, "\e[1;31mError:\e[1;97m No Input\n", 30);
	if (error == 2)
		write(1, "\e[1;31mError:\e[1;97m Invalid Input\n", 35);
	if (error == 3)
		write(1, "\e[1;31mError:\e[1;97m Int Overflow\n", 34);
	if (error == 4)
		write(1, "\e[1;31mError:\e[1;97m Duplicates Found\n", 38);
	exit(1);
}
