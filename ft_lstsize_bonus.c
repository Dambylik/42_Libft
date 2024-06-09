/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:09:37 by okapshai          #+#    #+#             */
/*   Updated: 2024/06/03 16:33:24 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		count;

	count = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
/*
int main(void)
{
    t_list *head = NULL;

    int value1 = 42;
    t_list *node1 = ft_lstnew(&value1);
    ft_lstadd_front(&head, node1);

    int value2 = 24;
    t_list *node2 = ft_lstnew(&value2);
    ft_lstadd_front(&head, node2);

    int value3 = 15;
    t_list *node3 = ft_lstnew(&value3);
    ft_lstadd_front(&head, node3);

    int size = ft_lstsize(head);
    printf("List size: %d\n", size);

    return 0;
}
*/
