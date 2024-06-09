/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:40:44 by Olly              #+#    #+#             */
/*   Updated: 2024/05/28 16:41:48 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Locate a substring in a string.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
	{
		return ((char *)big);
	}
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] && i + j < len && \
			big[i + j] == little[j])
		{
			j++;
		}
		if (!little[j])
		{
			return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    const char *big = "Hello, Olga!";
    const char *little = "Olga";
    int len;
    
    len = 5;
    char *result = ft_strnstr(big, little, len);
    printf("My function: %s\n", result);
      
    return 0;
}
*/
