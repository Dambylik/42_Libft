/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:10:31 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/30 15:24:53 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc) resulting
from successive applications of ’f’
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	result = (char *)(malloc(sizeof(char) * (ft_strlen(s) + 1)));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
char	example_function(unsigned int i, char c) 
{
    return c + i;
}

int	main(void) 
{
    char *s = "Hello, Olga!";
    char *result;

    result = ft_strmapi(s, example_function);

    if (result) 
    {
        printf("Original string: %s\n", s);
        printf("Modified string: %s\n", result);
        free(result);
    }
    else
    {
        printf("An error occurred.\n");
    }
    return (0);
}
*/