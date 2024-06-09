/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:47:34 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/30 15:26:38 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
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
*/
static int	ft_to_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	while (ft_to_trim(set, s1[i]))
	i++;
	while (ft_to_trim(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j - (i - 1)));
}
/*
int	main(void)
{
char *str = "xxxz  test with x and z and x .  zx  xx z";
char *set = "z x"; 
char *clean_line = ft_strtrim(str, set);
printf("Old string : %s\n", str);
printf("New string : %s\n", clean_line);
return (0);
}
*/
