/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/18 09:11:32 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/18 10:04:07 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	s(t_node **stack)
{
	t_node	*new_head;

	new_head = (*stack)->next;
	(*stack)->next = new_head->next;
	new_head->next = (*stack);
	(*stack) = new_head;
}

void	sa(t_node **stack)
{
	write(1, "sa\n", 3);
	s(stack);
}

void	sb(t_node **stack)
{
	write(1, "sb\n", 3);
	s(stack);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	write(1, "ss\n", 3);
	s(stack_a);
	s(stack_b);
}
