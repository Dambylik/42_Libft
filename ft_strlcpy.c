/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:30:56 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/30 15:52:53 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Copy src to dst of size siz. At most siz-1 characters will
be copied. Always NULL terminates (unless siz == 0).
*/
size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (size < 1)
		return (count);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
/*
int main() {
    char src[] = "Hello, world!";
    char dst[20];
    size_t dstsize = sizeof(dst);
    size_t result;

    // Test 1: Regular copy with enough space in destination
    result = ft_strlcpy(dst, src, dstsize);
    printf("Test 1: src=\"%s\", dst=\"%s\", result=%zu\n", src, dst, result);

    // Test 2: Destination size smaller than source
    dstsize = 6; // Less than length of "Hello, world!"
    result = ft_strlcpy(dst, src, dstsize);
    printf("Test 2: src=\"%s\", dst=\"%s\", result=%zu\n", src, dst, result);

    // Test 3: Destination size exactly fits the source
    dstsize = strlen(src) + 1; // Exact size
    result = ft_strlcpy(dst, src, dstsize);
    printf("Test 3: src=\"%s\", dst=\"%s\", result=%zu\n", src, dst, result);

    // Test 4: Destination size is zero
    dstsize = 0;
    result = ft_strlcpy(dst, src, dstsize);
    printf("Test 4: src=\"%s\", dst=\"%s\", result=%zu\n", src, dst, result);

    return 0;
}
*/