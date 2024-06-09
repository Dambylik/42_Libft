/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:07:47 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/28 16:45:27 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 Erases the data in the n bytes of the memory starting at the location \
 pointed to by s, by writing zeros (bytes containing '\0') to that area.
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n)
	{
		*p++ = 0;
		n--;
	}
}

/*
int main() 
{	char buffer[8] = "Bonjour";
	ft_bzero(buffer, 3);
	for (int i = 0; i < 8; i++)
       printf("%c", buffer[i]);
}
*/
