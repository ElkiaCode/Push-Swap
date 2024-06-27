/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:33:35 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/27 15:59:52 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	printlist(t_list *list)
{
	t_node	*current;

	current = list->first;
	while (current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	stacks;
	int		i;

	i = 0;
	if (argc < 2)
	{
		stacks.a = NULL;
		error_message(1);
	}
	else if (argc == 2)
	{
		parsing(ft_countwords(argv[1], ' '), ft_split(argv[1], ' '));
		stacks = ft_list(ft_countwords(argv[1], ' '), ft_split(argv[1], ' '));
	}
	else
	{
		parsing(argc - 1, argv + 1);
		stacks = ft_list(argc - 1, argv + 1);
	}
	ft_sa(&stacks);
	printlist(stacks.a);
	exit(0);
}
