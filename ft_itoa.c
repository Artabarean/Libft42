/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:21:55 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/28 10:53:11 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrcnt(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n /= 10)
		i++;
	return (i);
}

static char	*ft_nbrchr(int n, int lon)
{
	char	*result;
	int		i;

	i = (lon - 1);
	result = malloc(sizeof(char) * (lon + 1));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		result[0] = '-';
	}
	while (n >= 10)
	{
		result[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	result[i] = (n % 10) + '0';
	result[lon] = '\0';
	return (result);
}

char	*ft_itoa_int_min(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 12);
	if (!str)
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*strl;
	int		len;

	if (n == -2147483648)
		return (ft_itoa_int_min(n));
	len = ft_nbrcnt(n);
	strl = malloc(sizeof(char) * (len + 1));
	if (!strl)
		return (NULL);
	if (n < 0)
		strl[0] = '-';
	strl = ft_nbrchr(n, len);
	return (strl);
}
// #include <stdio.h>
// int main()
// {
//   printf("%s\n", ft_itoa(-123));
//   return (0);
// }