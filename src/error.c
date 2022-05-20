/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/19 14:32:32 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/20 12:07:36 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error(t_node *head)
{
	clear_list(head);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
