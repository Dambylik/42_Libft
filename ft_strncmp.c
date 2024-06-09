/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:27:39 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/29 18:28:04 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
int main(void)
{
	printf ( "Real function : \n");
	printf ( "1. %d\n", strncmp ("equal", "Equal", 3));
	printf ( "2. %d\n", strncmp ( "Equal", "equal", 3));
	printf ( "2. %d\n", strncmp ( "Equal", "Equal", 3));
	printf("Francinette 1: %d\n", strncmp("t", "", 0));
	printf("Francinette 2: %d\n", strncmp("1234", "1235", 3));
	printf("Francinette 12: %d\n", strncmp("", "1", 0));
	printf("Francinette 13: %d\n", strncmp("1", "", 0));

	printf ( "My function : \n");
	printf ( "1. %d\n", ft_strncmp ("equal", "Equal", 3));
	printf ( "2. %d\n", ft_strncmp ( "Equal", "equal", 3));
	printf ( "2. %d\n", ft_strncmp ( "Equal", "Equal", 3));
	printf("Francinette 1: %d\n", ft_strncmp("t", "", 0));
	printf("Francinette 2: %d\n", ft_strncmp("1234", "1235", 3));
	printf("Francinette 12: %d\n", ft_strncmp("", "1", 0));
	printf("Francinette 13: %d\n", ft_strncmp("1", "", 0));
return ( 0 );
} */