/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:21:55 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/27 17:20:10 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_nbrcnt(int n)
{
  int i;
  
  i = 1;
  if (n < 0)
    i++;
  while(n /= 10)
    i++;
  return (i);
}

static char  *ft_nbrchr(int n, int lon)
{
  char  *result;
  int   i;
  
  i = 0;
  result = malloc(sizeof(char) * (lon) + 1);
  if (n < 0)
  {
    n = -n;
    result[i] = '-';
  }
  i = lon;
  if (result == NULL)
    return (NULL);
  while (n >= 10)
  {
    i--;
    result[i] = (n % 10) + '0';
    n = n / 10;
  }
  i--;
  result[i] = (n % 10) + '0';
  result[lon] = '\0';
  return (result);
}

char  *ft_itoa(int n)
{
  char  *strl;
  int   i;
  int   len;
  
  len = ft_nbrcnt(n);
  i = 0;
  if (n < 0)
    i++;
  strl = malloc(sizeof(char) * (len + 1 + i));
  if (!strl)
	free(strl);
	return (NULL);
  if (n < 0)
    strl[i] = '-';
	if (n == -2147483648)
		return (strl = "-2147483648");
  strl = ft_nbrchr(n, len);
  return (strl);
}
// int main()
// {
//   printf("%s\n", ft_itoa(-123));
//   return (0);
// }