/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:21:38 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/27 16:01:38 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_node
{
	int				data;
	unsigned int	index;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

typedef struct s_list
{
	struct s_node	*first;
	struct s_node	*last;
	unsigned int	size;
}					t_list;

typedef struct s_stack
{
	t_list			*a;
	t_list			*b;
}					t_stack;

// srcs

void				ft_sa(t_stack *stack);
void				ft_sb(t_stack *stack);
// void				ft_ss(node *a, node *b);
// void				ft_pa(node **a, node **b);
// void				ft_pb(node **a, node **b);
// void				ft_ra(node **a);
// void				ft_rb(node **b);
// void				ft_rr(node **a, node **b);
// void				ft_rra(node **a);
// void				ft_rrb(node **b);
// void				ft_rrr(node **a, node **b);

// parsing

void				error_message(int error);
void				parsing(int argc, char **argv);

// list/struct

t_list				*create_list(void);
t_stack				ft_list(int argc, char **argv);
t_stack				init_list(void);
t_list				*create_list(void);
t_node				*create_node(int data);
void				list_add_back(t_list *list, int content);
void				list_add_front(t_list *list, int content);

// utils

int					ft_atol(const char *nptr);
char				**ft_split(char const *s, char c);
int					ft_countwords(char const *s, char c);
int					ft_strcmp(const char *s1, const char *s2);
size_t				ft_strlen(const char *s);
void				ft_putnstr_fd(char *s, int fd);
t_stack				*ft_lstnew(void *content);
// node				*ft_lstlast(node *lst);
// int					ft_lstsize(node *lst);
// void				ft_lstfree(node *lst);

#endif
