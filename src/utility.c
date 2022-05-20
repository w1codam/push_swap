/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utility.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/18 09:00:52 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/20 12:08:02 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long	ft_atol(const char *str)
{
	long	result;
	long	negative;
	long	index;

	negative = 1;
	result = 0;
	index = 0;
	while (str[index] <= ' ' && str[index] != '\e' && str[index] != '\0')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			negative = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	return (result * negative);
}

int	find_smallest(t_node *stack, unsigned int offset)
{
	int		pos;
	int		index;
	int		smallest;

	pos = 0;
	index = 0;
	smallest = *((int *)get_pointer(stack, offset));
	stack = stack->next;
	while (stack)
	{
		index++;
		if (smallest > *((int *)get_pointer(stack, offset)))
		{
			smallest = *((int *)get_pointer(stack, offset));
			pos = index;
		}
		stack = stack->next;
	}
	return (pos);
}

void	*get_pointer(t_node *node, unsigned int offset)
{
	return (&(((char *)node)[offset]));
}

bool	is_sorted(t_node *stack, unsigned int offset)
{
	int	prev;

	prev = *((int *)get_pointer(stack, offset));
	stack = stack->next;
	while (stack)
	{
		if (prev > *((int *)get_pointer(stack, offset)))
			return (false);
		prev = *((int *)get_pointer(stack, offset));
		stack = stack->next;
	}
	return (true);
}
