/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   prepare.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/19 14:21:09 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/20 10:48:23 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_order(t_node *stack, unsigned int offset)
{
	int	index;

	index = 0;
	while (stack)
	{
		*((int *)get_pointer(stack, offset)) = index;
		index++;
		stack = stack->next;
	}
}

static void	sort(t_node **stack, unsigned int offset)
{
	t_node	*new;

	new = NULL;
	while (*stack)
		add_back(&new, remove_node(stack, find_smallest(*stack, offset)));
	*stack = new;
}

void	perpare(t_node **stack)
{
	set_order(*stack, (void *)&(*stack)->position - (void *)(*stack));
	sort(stack, (void *)&(*stack)->number - (void *)(*stack));
	set_order(*stack, (void *)&(*stack)->index - (void *)(*stack));
	sort(stack, (void *)&(*stack)->position - (void *)(*stack));
}
