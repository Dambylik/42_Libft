/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:08:32 by okapshai          #+#    #+#             */
/*   Updated: 2024/06/04 11:51:57 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*current;
	void	*temp;

	current = lst;
	new_list = NULL;
	new_node = NULL;
	while (current)
	{
		temp = f(current->content);
		new_node = ft_lstnew(temp);
		if (!new_node)
		{
			del(temp);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		current = current->next;
	}
	return (new_list);
}

/* 
void *increment(void *content)
{
    int *new_value = (int *)malloc(sizeof(int));
    *new_value = *(int *)content + 1;
    return (void *)new_value;
}
void del(void *content)
{
     printf("Content deleted: %d\n", *(int *)content);
}

int main()
{
    t_list *head = NULL;

    int *value1 = (int *)malloc(sizeof(int));
    *value1 = 42;
    t_list *node1 = ft_lstnew(value1);
    ft_lstadd_back(&head, node1);

    int *value2 = (int *)malloc(sizeof(int));
    *value2 = 24;
    t_list *node2 = ft_lstnew(value2);
    ft_lstadd_back(&head, node2);

    int *value3 = (int *)malloc(sizeof(int));
    *value3 = 15;
    t_list *node3 = ft_lstnew(value3);
    ft_lstadd_back(&head, node3);

    t_list *new_list = ft_lstmap(head, increment, del);

    // Print the contents of the new list to verify the function works correctly
    t_list *current = new_list;
    while (current != NULL)
    {
        printf("New node content: %d\n", *(int *)current->content);
        current = current->next;
    }

   return 0;
} */
