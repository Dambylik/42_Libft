/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:02:40 by okapshai          #+#    #+#             */
/*   Updated: 2024/06/03 16:38:34 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void del(void *content)
{
     printf("Content deleted: %d\n", *(int *)content);
}
*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

/*
int	main(void)
{
	t_list *head = NULL;

	int value1 = 56;
	t_list *node1 = ft_lstnew(&value1);
	ft_lstadd_front(&head, node1);

	int value2 = 89;
	t_list *node2 = ft_lstnew(&value2);
	ft_lstadd_front(&head, node2);

	int value3 = 95;
	t_list *node3 = ft_lstnew(&value3);
	ft_lstadd_front(&head, node3);
	
	// The contents of the list to verify the nodes were added correctly
	t_list *current = head;
	while (current != NULL)
	{
		printf("Node content: %d\n", *(int *)current->content);
		current = current->next;
	}
	// Delete the node using ft_lstdelone
	ft_lstdelone(node2, del);

		return(0);
}
*/