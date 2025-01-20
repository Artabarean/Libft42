#include "libft.h"

int  ft_nbrcnt(int n)
{
  int i;
  
  i = 1;
  if (n < 0)
    i++;
  while(n /= 10)
    i++;
  return (i);
}

char  *ft_nbrchr(int n, int lon)
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
  if (n == -2147483648)
    result = "-2147483648";
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
  if (n < 0)
    strl[i] = '-';
  strl = ft_nbrchr(n, len);
  return (strl);
}
// int main()
// {
//   printf("%s\n", ft_itoa(-123));
//   return (0);
// }