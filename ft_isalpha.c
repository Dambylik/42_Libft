/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:25:44 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/28 16:31:57 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (2);
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

	printf("var1 = %d\n", ft_isalpha(var1));
	printf("var2 = %d\n", ft_isalpha(var2));
	printf("var3 = %d\n", ft_isalpha(var3));
	printf("var4 = %d\n", ft_isalpha(var4));
	printf("var5 = %d\n", ft_isalpha(var5));

	printf("True function :\n");
	printf("var1 = %d\n", isalpha(var1));
	printf("var2 = %d\n", isalpha(var2));
	printf("var3 = %d\n", isalpha(var3));
	printf("var4 = %d\n", isalpha(var4));
	printf("var5 = %d\n", isalpha(var5));
}
*/