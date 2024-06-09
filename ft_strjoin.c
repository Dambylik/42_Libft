/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:14:11 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/30 15:23:57 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		len_prefix;
	int		len_suffix;
	int		i;
	int		j;

	i = -1;
	j = -1;
	len_prefix = ft_strlen(s1);
	len_suffix = ft_strlen(s2);
	new_string = (char *)malloc((sizeof(char) * (len_prefix + len_suffix)) + 1);
	if (!(new_string))
		return (NULL);
	while (i++ < len_prefix - 1)
		new_string[i] = s1[i];
	while (j++ < len_suffix - 1)
	{
		new_string[i] = s2[j];
		i++;
	}
	new_string[i] = '\0';
	return ((char *)new_string);
}

/*
int main (void)
{
	char prefix[] = "Hello agsfjshFJ SHDjksglJG ;SJgd";
	char suffix[] = ";slfmgda;l            Olga";
	char *new_string;

	new_string = ft_strjoin(prefix, suffix);
	printf("%s\n", new_string);
	printf("Prefix = %d\nSuffix = %d\nTogether: %d\n", ft_strlen(prefix),\ 
	, ft_strlen(prefix) + ft_strlen(suffix));
	printf("New string size : %d\n", ft_strlen(new_string));
	free(new_string);
	return (0);
}
*/