/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   prepare.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/19 14:21:09 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/19 14:24:41 by jde-groo      ########   odam.nl         */
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
	int		current;
	int		next;
	t_node	*new;

	new = NULL;
	while (*stack)
		add_back(&new, remove_node(stack, find_smallest(*stack, offset)));
	*stack = new;
}

void	perpare(t_node **stack_a, t_node **stack_b)
{
	set_order(*stack_a, (void *)&(*stack_a)->position - (void *)(*stack_a));
	sort(stack_a, (void *)&(*stack_a)->number - (void *)(*stack_a));
	set_order(*stack_a, (void *)&(*stack_a)->index - (void *)(*stack_a));
	sort(stack_a, (void *)&(*stack_a)->position - (void *)(*stack_a));
}
