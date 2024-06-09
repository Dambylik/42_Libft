/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:51:01 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/29 11:33:32 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*char_s;
	char			char_c;
	size_t			i;

	char_s = (const char *)s;
	char_c = (char)c;
	i = 0;
	while (i < n)
	{
		if (char_s[i] == char_c)
		{
			return ((void *)(char_s + i));
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    char str[17] = "This is a string";
    char *ptr;
    
    ptr = (char *)ft_memchr(str, 'a', strlen(str));
    if (ptr)
       printf("The character 'a' is at position: %lu\n", ptr - str + 1);
    else
       printf("The character was not found\n");
    return 0;
}
*/
