/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:31:24 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/28 16:35:56 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Writes n bytes of value c (converted to an unsigned char) to the string s
RETURN VALUE
Returns a pointer to the memory area s.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n)
	{
		*p = c;
		p++;
		n--;
	}
	return (s);
}
/*
int main() 
{ 
    char str[50] = "This is my function"; 
    printf("\nBefore : %s\n", str); 
  
    ft_memset(str + 3, '$', 5*sizeof(char));
    printf("After:  %s\n", str); 
    
    char str2[50] = "This is library function";
    memset(str2 + 3, '$', 5*sizeof(char));
    printf("After:  %s\n", str2);
    
    return 0; 
}
*/
