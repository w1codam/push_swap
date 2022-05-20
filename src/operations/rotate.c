/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/18 09:11:30 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/20 12:08:56 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	r(t_node **stack)
{
	t_node	*old_head;
	t_node	*tmp;

	if (!(*stack) || !(*stack)->next)
		return ;

	old_head = *stack;
	(*stack) = old_head->next;
	tmp = old_head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = old_head;
	old_head->next = NULL;
}

void	ra(t_node **stack)
{
	write(1, "ra\n", 3);
	r(stack);
}

void	rb(t_node **stack)
{
	write(1, "rb\n", 3);
	r(stack);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	write(1, "rr\n", 3);
	r(stack_a);
	r(stack_b);
}
