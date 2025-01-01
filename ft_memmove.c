#include "libft.h"
//#include <stddef.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	unsigned char	*ptr;
	unsigned char	*ptr2;
	
	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	i = 0;
	while(i < n)
	{
		ptr[i] = ptr2[i];
		i++;
	}
	ptr[i] = '\0';
	i = 0;
	while(ptr2[i] != '\0')
	{
		ptr2[i] = '\0';
		i++;
	}
	src = ptr2;
	dest = ptr;
	return(dest);
}
/*
#include <stdio.h>
#include <stddef.h>
int	main(void)
{
	unsigned char s1[5] = "";
	unsigned char s2[5] = "hola";

	printf("%s\n", s1);
	ft_memmove(s1, s2, 4);
	printf("%s\n", s1);
	printf("%s\n", s2);
	return (0);
}*/
