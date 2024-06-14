/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:21:38 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/14 16:56:35 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

// srcs

typedef struct s_list
{
	int				*content;
	struct s_list	*next;
}					t_list;
t_list				create_list(int words, char **list);

// utils

int					ft_atol(const char *nptr);
char				**ft_split(char const *s, char c);
int					ft_countwords(char const *s, char c);

#endif
