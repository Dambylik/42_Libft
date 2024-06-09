/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:08:45 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/30 15:23:30 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
void	example_function(unsigned int i, char *c) 
{
    *c = *c + i;
}

int	main(void) 
{
    char s[] = "Hello, Olga!";
        
    printf("Original string: %s\n", s);
    
    ft_striteri(s, example_function);

    printf("Modified string: %s\n", s);
    return (0);
}
*/