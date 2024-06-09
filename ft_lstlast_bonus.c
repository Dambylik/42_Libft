/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:47:06 by okapshai          #+#    #+#             */
/*   Updated: 2024/06/03 16:35:36 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	if (!lst)
		return (NULL);
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}
/*
int main(void)
{
	t_list	*head = NULL;
	
	int value1 = 42;
	t_list *node1 = ft_lstnew(&value1);
	ft_lstadd_front(&head, node1);

	int value2 = 36;
	t_list *node2 = ft_lstnew(&value2);
	ft_lstadd_front(&head, node2);

	int value3 = 12;
	t_list *node3 = ft_lstnew(&value3);
	ft_lstadd_front(&head, node3);

	// Get the last node of the list
	t_list *last_node = ft_lstlast(head);
		
	// Print the content of the last node
	printf("Last node content: %d\n", *(int *)last_node->content);
	
	return(0);
}
*/