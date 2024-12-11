#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while(i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
		if (i == n)
		{
			return (0);
		}
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*#include <stdio.h>
#include <stddef.h>
int	main()
{
	const char *s1 = "hola";
	const char *s2 = "holaa";
	size_t n = 5;

	printf("%d\n",ft_strncmp(s1, s2, n));
	return (0);
}*/
