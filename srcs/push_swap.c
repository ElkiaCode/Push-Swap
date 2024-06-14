/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:33:35 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/14 16:58:48 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;

	if (argc < 2)
	{
		a = NULL;
		error_message(1);
	}
	else if (argc == 2)
	{
		parsing(ft_countwords(argv[1], ' '), ft_split(argv[1], ' '));
		a = create_list(ft_countwords(argv[1], ' '), ft_split(argv[1], ' '))
	}
	else
	{
		parsing(argc - 1, argv + 1);
		a = create_list(argc - 1, argv + 1);
	}
	return (0);
}
