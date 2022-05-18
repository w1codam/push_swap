/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/17 12:18:23 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/18 14:34:32 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	parse(argc, argv, &stack_a);
	print_stack(stack_a);
	fs_five(&stack_a, &stack_b);
	print_stack(stack_a);
}
