/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/17 12:21:19 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/19 14:22:05 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h> // development
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_node {
	int		position;
	int		index;
	int		number;
	void	*next;
}			t_node;

// node.c
t_node	*create_node(int _number);
void	add_front(t_node **head, t_node *node);
void	add_back(t_node **head, t_node *node);
t_node	*remove_node(t_node **head, int index);
void	clear_list(t_node *head);

// utility.c
int		ft_atoi(const char *str);
void	print_stack(t_node *head);
int		find_smallest(t_node *stack, unsigned int offset);
void	*get_pointer(t_node *node, unsigned int offset);
bool	is_sorted(t_node *stack, unsigned int offset);

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

// fixed.c
void	fs_two(t_node **stack);
void	fs_three(t_node **stack);
void	fs_four(t_node **stack_a, t_node **stack_b);
void	fs_five(t_node **stack_a, t_node **stack_b);
void	fs(t_node **stack_a, t_node **stack_b, int size);

// prepare.c
void	perpare(t_node **stack_a, t_node **stack_b);

// radix.c
void	radix(t_node **stack_a, t_node **stack_b);

#endif