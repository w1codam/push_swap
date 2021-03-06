/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   node.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-groo <jde-groo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/17 12:46:31 by jde-groo      #+#    #+#                 */
/*   Updated: 2022/05/20 12:07:47 by jde-groo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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

void	add_front(t_node **head, t_node *node)
{
	node->next = *head;
	(*head) = node;
}

void	add_back(t_node **head, t_node *node)
{
	t_node	*tmp;

	if (!(*head))
		*head = node;
	else
	{
		tmp = (*head);
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
	}
}

t_node	*remove_node(t_node **head, int index)
{
	t_node	*tmp;
	t_node	*prev;

	tmp = (*head);
	if (index == 0)
	{
		(*head) = (*head)->next;
		tmp->next = NULL;
		return (tmp);
	}
	while (index)
	{
		index--;
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = tmp->next;
	tmp->next = NULL;
	return (tmp);
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
