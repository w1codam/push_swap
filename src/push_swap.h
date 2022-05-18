/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/17 12:21:19 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/18 10:07:09 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h> // development
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_node {
	int		index;
	int		number;
	void	*next;
}			t_node;

// node.c
t_node	*create_node(int _number);
void	add_front(t_node **head, t_node *node);
void	add_back(t_node **head, t_node *node);
void	clear_list(t_node *head);

// utility.c
int		ft_atoi(const char *str);
void	print_stack(t_node *head);

// parse.c
bool	validate(int argc, char **argv);
bool	parse(int argc, char **argv, t_node **head);

// operations.c
void	sa(t_node **stack);
void	sb(t_node **stack);
void	ss(t_node **stack_a, t_node **stack_b);

void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);

void	ra(t_node **stack);
void	rb(t_node **stack);
void	rr(t_node **stack_a, t_node **stack_b);

void	rra(t_node **stack);
void	rrb(t_node **stack);
void	rrr(t_node **stack_a, t_node **stack_b);

#endif