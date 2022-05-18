/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   node.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/17 12:46:31 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/18 09:28:31 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int _number)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->number = _number;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void	add_back(t_node **head, t_node *node)
{
	if (!(*head))
		*head = node;
	else
	{
		while ((*head)->next)
			(*head) = (*head)->next;
		(*head)->next = node;
	}
}

void	clear_list(t_node *head)
{
	t_node	*tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}