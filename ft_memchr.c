#include "libft.h"
//#include <stddef.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	int			i;
	const unsigned char	*p;
	unsigned char		cr;

	p = (const unsigned char *)s;
	cr = (unsigned char)c;
	i = 0;
	while (i <= n)
	{
		if (p[i] == cr)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <stddef.h>
int main()
{
	printf("%s\n", (char *) ft_memchr("111111p", 'p', 7));
	return (0);
}*/
