/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:17:21 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/29 14:46:26 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/*
int main () 
{
   char str[] = "Hello Olga";
   
   printf("Length of my function is %zu\n", ft_strlen(str));
   printf("Length of my function is %lu\n", strlen(str));
   
   return(0);
}
*/