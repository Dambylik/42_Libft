/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:51:26 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/29 17:39:04 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Copies n bytes from memory area src to memory area dest. The memory areas
must not overlap. */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_source;
	unsigned char		*tmp_dst;

	tmp_dst = (unsigned char *)dest;
	tmp_source = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (dest);
	while (n > 0)
	{
		*(tmp_dst) = *(tmp_source);
		tmp_dst++;
		tmp_source++;
		n--;
	}
	return (dest);
}
/*
int main(void )
{
    char src[] = "Hello";
    char dest[50] = "";

    printf("src before memcpy: %s\n", src);
    printf("dest before memcpy: %s\n", dest);

    ft_memcpy(dest, src, strlen(src));

    printf("src after memcpy: %s\n", src);
    printf("dest after memcpy: %s\n", dest);

   return 0;
} */