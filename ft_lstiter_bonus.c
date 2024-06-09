/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:29:27 by okapshai          #+#    #+#             */
/*   Updated: 2024/06/03 16:42:44 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	while (temp != NULL)
	{
		(*f)(temp->content);
		temp = temp->next;
	}
}
/*
void print_content(void *content)
{
    printf("Node content: %d\n", *(int *)content);
}


int	main(void)
{
	t_list *head = NULL;

	int value1 = 15;
	t_list *node1 = ft_lstnew(&value1);
	ft_lstadd_front(&head, node1);

	int value2 = 17;
	t_list *node2 = ft_lstnew(&value2);
	ft_lstadd_front(&head, node2);

	ft_lstiter(head, print_content);
	
	return (0);
}
*/