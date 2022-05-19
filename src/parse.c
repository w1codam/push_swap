/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/17 12:41:58 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/19 15:04:34 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	is_outofrange(long number)
{
	if (number > (long)INT_MAX)
		return (true);
	else if (number < (long)INT_MIN)
		return (true);
	return (false);
}

static bool	is_duplicate(t_node *stack, int number)
{
	while (stack)
	{
		if (number == stack->number)
			return (true);
		stack = stack->next;
	}
	return (false);
}

static bool	is_notanumber(char *number)
{
	int	index;

	index = 0;
	while (number[index])
	{
		if ((number[index] < '0' && number[index] > '9') && \
		number[index] != '-')
			return (true);
		index++;
	}
	return (false);
}

bool	parse(int argc, char **argv, t_node **head)
{
	int		index;
	t_node	*tmp;

	index = 1;
	while (index < argc)
	{
		if (is_notanumber(argv[index]))
			return (false);
		if (is_outofrange(ft_atol(argv[index])))
			return (false);
		if (is_duplicate(*head, (int)ft_atol(argv[index])))
			return (false);
		tmp = create_node((int)ft_atol(argv[index]));
		if (!tmp)
			return (false);
		add_back(head, tmp);
		index++;
	}
	return (true);
}
