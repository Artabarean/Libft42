#include "libft.h"
//#include <stddef.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	while (i < n && ptr1[i] != '\0' && ptr2[i] != '\0')
	{
		if(ptr1[i] < ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		else if(ptr1[i] > ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	printf("el resultado de la comparativa es = %d\n", ft_memcmp("Holapapope", "HolaPapope", 10));
		       return (0);
}
*/
