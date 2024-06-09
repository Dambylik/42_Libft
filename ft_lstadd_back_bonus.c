/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:36:28 by okapshai          #+#    #+#             */
/*   Updated: 2024/06/04 11:31:43 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_element;

	last_element = ft_lstlast(*lst);
	if (!last_element)
		*lst = new;
	else
		last_element->next = new;
}
/*
int main (void)
{
	t_list *begin = NULL;

	char value1[] = "lorem";
	t_list *node1 = ft_lstnew(&value1);
	ft_lstadd_front(&begin, node1);

	char value2[] = "ipsum";
	t_list *node2 = ft_lstnew(&value2);
	ft_lstadd_front(&begin, node2);

	char value3[] = "dolor";
	t_list *node3 = ft_lstnew(&value3);
	ft_lstadd_front(&begin, node3);

	char value4[] = "sit";
	t_list *node4 = ft_lstnew(&value4);
	ft_lstadd_back(&begin, node4);

	// The contents of the list to verify the nodes were added correctly
	t_list *current = begin;
	while (current != NULL)
	{
		printf("Node content: %d\n", *(int *)current->content);
		current = current->next;
	}
	while (begin)
    {
       printf("%s\n", (char *)begin->content);
        begin = begin->next;
    }
	
		return(0);
}
*/