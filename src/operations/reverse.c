/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/18 09:11:27 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/18 10:40:50 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rev(t_node **stack)
{
	t_node	*old_head;
	t_node	*tmp;

	if (!(*stack) || !(*stack)->next)
		return ;

	old_head = (*stack);
	(*stack) = (*stack)->next;
	tmp = (*stack);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = old_head;
	old_head->next = NULL;
}

void	rra(t_node **stack)
{
	write(1, "rra\n", 4);
	rev(stack);
}

void	rrb(t_node **stack)
{
	write(1, "rrb\n", 4);
	rev(stack);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	write(1, "rrr\n", 4);
	rev(stack_a);
	rev(stack_b);
}
