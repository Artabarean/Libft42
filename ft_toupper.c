#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}
/*#include <stdio.h>
int	main()
{
	int	c;

	c = 'a';
	printf("%d\n", ft_toupper(c));
	printf("%c\n", ft_toupper(c));
	return (0);
}*/
