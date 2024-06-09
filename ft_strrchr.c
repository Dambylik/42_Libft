/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:15:23 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/30 15:25:22 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns a pointer to the last occurrence of the character  c
in the string s.*/

char	*ft_strrchr(const char *s, int c)
{
	char	to_find;
	int		i;

	to_find = (char) c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == to_find)
			return ((char *)(s + i));
	i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	tweet[] = "abbbbbbbb";
	char *	mention = ft_strrchr(tweet, 'a');
	printf("mention : %s\n", mention);
	return (0);
}
*/