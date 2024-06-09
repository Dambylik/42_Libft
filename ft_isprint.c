/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:10:17 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/28 16:33:50 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
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

	printf("var1 = %d\n", ft_isprint(var1));
	printf("var2 = %d\n", ft_isprint(var2));
	printf("var3 = %d\n", ft_isprint(var3));
	printf("var4 = %d\n", ft_isprint(var4));
	printf("var5 = %d\n", ft_isprint(var5));

	printf("True function :\n");
	printf("var1 = %d\n", isprint(var1));
	printf("var2 = %d\n", isprint(var2));
	printf("var3 = %d\n", isprint(var3));
	printf("var4 = %d\n", isprint(var4));
	printf("var5 = %d\n", isprint(var5));
}
*/