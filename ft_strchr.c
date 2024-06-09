/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:30:51 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/30 12:43:44 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns a pointer to the first occurrence of the character c
in the string s.*/

char	*ft_strchr(const char *s, int c)
{
	char	to_find;
	int		i;

	to_find = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == to_find)
			return ((char *)(s + i));
	i++;
	}
	if (s[i] == to_find)
		return ((char *)(s + i));
	return (NULL);
}

/*
int	main(void)
{
	char	tweet[] = "Hello @Olga";
	char *	mention = ft_strchr(tweet, '@');
	printf("mention : %s\n", mention);

	return (0);
}
*/