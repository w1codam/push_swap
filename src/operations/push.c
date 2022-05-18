/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/18 09:11:25 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/18 10:13:32 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	p(t_node **from, t_node **to)
{
	t_node	*tmp;

	tmp = (*from)->next;
	add_front(to, (*from));
	*from = tmp;
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	write(1, "pa\n", 3);
	p(stack_b, stack_a);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	write(1, "pb\n", 3);
	p(stack_a, stack_b);
}
