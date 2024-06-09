/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:18:54 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/31 13:01:24 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
/*
int main(void)
{
	int value = 42;
	t_list *node = ft_lstnew(&value);

	if (node == NULL)
	{
		printf("Node creation failed.\n");
		return 1;
	}

	// Typecast content to int* and dereference to get the value
   	printf("Node content: %d\n", *(int *)node->content);

	free(node);

	return 0;
}
*/