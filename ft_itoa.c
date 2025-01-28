/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:21:55 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/28 15:08:28 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrcnt(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n > 10)
	{
		n /= 10;
		i++;
	}
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

	str = ft_strdup("-2147483648");
	if (!str)
		return (NULL);
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