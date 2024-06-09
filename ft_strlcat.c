/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:02:50 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/29 14:26:32 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	i = 0;
	dlen = 0;
	slen = 0;
	while (dlen < siz && dst[dlen] != '\0')
	{
		dlen++;
	}
	while (src[slen] != '\0')
	{
		slen++;
	}
	if (siz <= dlen)
		return (siz + slen);
	while ((dlen + i) < (siz - 1) && src[i] != '\0')
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
/*
int main(void) 
{
    char destination[] = "Hello";
    char source[] = ", Olga!";
    int total_length;

    total_length = ft_strlcat(destination, source, 3);

    // Print source, destination, and total length
    printf("Source length: %lu\n", sizeof(source));
    printf("Destination length: %lu\n", sizeof(destination));
    printf("Total length: %d\n", total_length);

      return 0;
}
*/