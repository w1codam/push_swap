/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/17 12:18:23 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/20 11:03:25 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		exit(EXIT_SUCCESS);
	if (!parse(argc, argv, &stack_a))
		error(stack_a);
	if (is_sorted(stack_a, (void *)&(stack_a)->number - (void *)(stack_a)))
	{
		clear_list(stack_a);
		exit(EXIT_SUCCESS);
	}
	if (argc <= 6)
		fs(&stack_a, &stack_b, argc - 1);
	else
	{
		perpare(&stack_a);
		radix(&stack_a, &stack_b);
	}
	clear_list(stack_a);
}
