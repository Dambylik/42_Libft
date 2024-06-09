/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:52:55 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/28 16:33:10 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (2);
	else if (c >= '0' && c <= '9')
		return (3);
	else
		return (0);
}
/*
int main(void)
{
	int var1 = 'd';
   	int var2 = '2';
   	int var3 = '\t';
   	int var4 = ' ';
	int var5 = 'Z';

	printf("var1 = %d\n", ft_isalnum(var1));
	printf("var2 = %d\n", ft_isalnum(var2));
	printf("var3 = %d\n", ft_isalnum(var3));
	printf("var4 = %d\n", ft_isalnum(var4));
	printf("var5 = %d\n", ft_isalnum(var5));

	printf("True function :\n");
	printf("var1 = %d\n", isalnum(var1));
	printf("var2 = %d\n", isalnum(var2));
	printf("var3 = %d\n", isalnum(var3));
	printf("var4 = %d\n", isalnum(var4));
	printf("var5 = %d\n", isalnum(var5));
}
*/