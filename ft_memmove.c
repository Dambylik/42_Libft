/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:05:45 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/29 18:07:22 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copies n bytes from memory area src to memory area dest. The memory ar‐
eas may overlap: copying takes place as though the bytes in src are first 
copied into  a temporary array  that does not overlap src or dest, and the 
bytes are then copied from the temporary array to dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_src;
	char	*tmp_dst;
	size_t	i;

	tmp_dst = (char *)dest;
	tmp_src = (char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (tmp_dst < tmp_src)
	{
		while (i < n)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			tmp_dst[n] = tmp_src[n];
	}
	return (dest);
}
/*
#include <stdio.h> 
#include <string.h> 
  
int main(void) 
{ 
    char str2[] = "this is overlaping";
    char str1[] = "hello";
  
    puts("str1 before memmove "); 
    puts(str1); 
  
    ft_memmove(str1, str2, 5); 
    //memmove(str1, str2, 5);
  
    puts("\nstr1 after memmove "); 
    puts(str1); 
  
    return 0; 
}
*/
