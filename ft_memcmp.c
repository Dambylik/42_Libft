/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:49:10 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/28 16:41:16 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Compares the first n bytes (each interpreted as unsigned char)
of the memory areas s1 and s2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
    int x;
    int y;

    char *string1 = "korra";
    char *string2 = "koaea";

    x = ft_memcmp(string1, string2, 5); 
    y = memcmp(string1, string2, 5); 

    printf ("My function = %d\n", x);
    printf ("Real function = %d\n", y);
    return 0;
}
*/
