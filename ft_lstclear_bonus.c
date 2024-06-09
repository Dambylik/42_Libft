/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:56:00 by okapshai          #+#    #+#             */
/*   Updated: 2024/06/03 16:41:43 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	free (*lst);
	*lst = NULL;
}
/*
int	main(void)
{
	t_list *head = NULL;
	t_list *current = head;

	int value1 = 45;
	t_list *node1 = ft_lstnew(&value1);
	ft_lstadd_front(&head, node1);
	
	int value2 = 98;
	t_list *node2 = ft_lstnew(&value2);
	ft_lstadd_front(&head, node2);

	int value3 = 3;
	t_list *node3 = ft_lstnew(&value3);
	ft_lstadd_front(&head, node3);

	while (current != NULL)
	{
		printf("Node content : %d\n", *(int *)(current->content));
		current = current->next;
	}

	ft_lstclear(&node2, del);
	return (0);	
}
*/