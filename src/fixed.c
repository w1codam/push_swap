/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fixed.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/18 11:05:19 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/18 14:31:22 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fs_two(t_node **stack)
{
	t_node	*next;

	next = (*stack)->next;
	if ((*stack)->number > next->number)
		sa(stack);
}

void	fs_three(t_node **stack)
{
	int	one;
	int	two;
	int	three;

	one = (*stack)->number;
	two = ((t_node *)(*stack)->next)->number;
	three = ((t_node *)((t_node *)(*stack)->next)->next)->number;
	if (one > three && two < three)
		ra(stack);
	else if (one > two && two < three)
		sa(stack);
	else if (one > three && one < two)
		rra(stack);
	else if (one < two && two > three)
	{
		sa(stack);
		ra(stack);
	}
	else if (one > two && two > three)
	{
		sa(stack);
		rra(stack);
	}
}

void	fs_four(t_node **stack_a, t_node **stack_b)
{
	if (find_smallest(*stack_a) == 1)
		sa(stack_a);
	else if (find_smallest(*stack_a) == 3)
		rra(stack_a);
	else if (find_smallest(*stack_a) == 2)
	{
		ra(stack_a);
		sa(stack_a);
	}
	if (is_sorted(*stack_a))
		return ;
	pb(stack_a, stack_b);
	fs_three(stack_a);
	pa(stack_a, stack_b);
}

void	fs_five(t_node **stack_a, t_node **stack_b)
{
	if (find_smallest(*stack_a) == 1)
		sa(stack_a);
	else if (find_smallest(*stack_a) == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (find_smallest(*stack_a) == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (find_smallest(*stack_a) == 4)
		rra(stack_a);
	if (is_sorted(*stack_a))
		return ;
	pb(stack_a, stack_b);
	fs_four(stack_a, stack_b);
	pa(stack_a, stack_b);
}
