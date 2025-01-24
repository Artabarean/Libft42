#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	if (s1[i] != s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	while(i < (n -1) && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
// #include <stdio.h>
// #include <stddef.h>
// int	main()
// {
// 	const char *s1 = "holap";
// 	const char *s2 = "holacp";
// 	size_t n = 4;

// 	printf("%d\n",ft_strncmp(s1, s2, n));
// 	return (0);
// }