/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:13:18 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/30 15:21:19 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;

	str = malloc((ft_strlen(src) + 1) * sizeof(char));
	p = str;
	if (str == NULL)
	{
		return (0);
	}
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}

/*
#include <stdio.h>

int main()
{
    char source[] = "Hello Olga";
    printf("String size : %d\n",ft_strlen(source));
   
    char* target1 = ft_strdup(source);
    printf("My function : %s\n", target1);

    char* target2 = strdup(source);
    printf("Real function : %s\n", target2);
    
    free(target1);
    free(target2);
    return 0;
}
*/
