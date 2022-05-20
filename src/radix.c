/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/19 09:42:47 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/20 12:07:57 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	stack_size(t_node *head)
{
	int	index;

	index = 0;
	while (head)
	{
		index++;
		head = head->next;
	}
	return (index);
}

static t_node	*get_index(t_node *head, int index)
{
	while (index)
	{
		index--;
		head = head->next;
	}
	return (head);
}

void	radix(t_node **stack_a, t_node **stack_b)
{
	int		bits;
	int		size;
	int		cur_bit;
	int		cur_size;

	bits = 0;
	size = stack_size(*stack_a);
	while ((get_index(*stack_a, size - 1)->position >> bits) != 0)
		bits++;
	cur_bit = 0;
	while (cur_bit < bits)
	{
		cur_size = 0;
		while (cur_size < size)
		{
			if ((((*stack_a)->index >> cur_bit) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			cur_size++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		cur_bit++;
	}
}
