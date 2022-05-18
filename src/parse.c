/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/17 12:41:58 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/18 09:38:59 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	validate(int argc, char **argv)
{
	return (true);
}

bool	parse(int argc, char **argv, t_node **head)
{
	int		index;
	t_node	*tmp;

	if (!validate(argc, argv))
		return (false);
	index = 1;
	while (index < argc)
	{
		tmp = create_node(ft_atoi(argv[index]));
		add_back(head, tmp);
		index++;
	}
}
