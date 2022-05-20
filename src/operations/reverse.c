/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/18 09:11:27 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/20 12:08:52 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	rev(t_node **stack)
{
	t_node	*prv;
	t_node	*tmp;

	if (!(*stack) || !(*stack)->next)
		return ;

	prv = (*stack);
	tmp = (*stack)->next;
	while (tmp->next)
	{
		prv = tmp;
		tmp = tmp->next;
	}
	prv->next = NULL;
	tmp->next = (*stack);
	(*stack) = tmp;
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
