/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:46:08 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/28 16:32:45 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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

	printf("var1 = %d\n", ft_isdigit(var1));
	printf("var2 = %d\n", ft_isdigit(var2));
	printf("var3 = %d\n", ft_isdigit(var3));
	printf("var4 = %d\n", ft_isdigit(var4));
	printf("var5 = %d\n", ft_isdigit(var5));

	printf("True function :\n");
	printf("var1 = %d\n", isdigit(var1));
	printf("var2 = %d\n", isdigit(var2));
	printf("var3 = %d\n", isdigit(var3));
	printf("var4 = %d\n", isdigit(var4));
	printf("var5 = %d\n", isdigit(var5));
}
*/