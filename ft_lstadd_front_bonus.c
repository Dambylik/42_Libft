/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 11:53:36 by okapshai          #+#    #+#             */
/*   Updated: 2024/06/03 17:33:35 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int main(void)
{
    int value1 = 42;
    t_list *node1 = ft_lstnew(&value1);

    t_list *head = node1;

    printf("First head content: %d\n", *(int *)head->content);

    int value2 = 24;
    t_list *node2 = ft_lstnew(&value2);
    ft_lstadd_front(&head, node2);
    printf("New head content: %d\n", *(int *)head->content);

    if (head->next)
        printf("Second node content: %d\n", *(int *)head->next->content);

    return 0;
}
*/
