/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:23:37 by okapshai          #+#    #+#             */
/*   Updated: 2024/05/30 15:28:08 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' || \
		c == '\t' || c == '\v');
}

int	ft_is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *str)
{
	int	i;
	int	negativ;
	int	number;

	i = 0;
	negativ = 1;
	number = 0;
	while (ft_is_space(str[i]))
			i++;
	while (ft_is_sign(str[i]))
	{
		if (str[i] == '-')
			negativ = negativ * (-1);
		if (ft_is_sign(str[i + 1]))
			return (0);
		i++;
	}
	while (ft_is_number(str[i]))
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (negativ * number);
}
/*
int main(void)
{
	char my[] = "+0000000000000000000000000000000000000000000000000000123";
	char real[] = "+0000000000000000000000000000000000000000000000000000123";
	
printf("%d\n", ft_atoi(my));
printf("%d\n", atoi(real));


return 0 ;
}
*/
