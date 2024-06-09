/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:43:30 by Olly              #+#    #+#             */
/*   Updated: 2024/05/29 11:06:02 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The  calloc()  function  allocates  memory  for  an array of nmemb \
elements of size bytes each and returns a pointer to the allocated memory. \
The memory is set to zero.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
/*
int main(void)
{
    size_t nmemb = 5;
    size_t i = 0;
    size_t size = sizeof(int);
    int *array = (int *)ft_calloc(nmemb, size);
    

    while (i < nmemb)
    {
        printf("array[%zu] = %d\n", i, array[i]);
        i++;
    }

    free(array);
    return (0);
}
*/
