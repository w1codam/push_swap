/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utility.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/18 09:00:52 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/18 09:45:26 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	negative;
	int	index;

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

void	print_stack(t_node *head)
{
	printf("======= printing stack =======\n");
	while (head)
	{
		printf("%d\t: %d \n", head->index, head->number);
		head = head->next;
	}
	printf("==============================\n");
}
