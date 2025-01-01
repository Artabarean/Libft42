//#include "libft.h"
#include <stddef.h>
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        size_t          i;
        unsigned char   *ptr;
        unsigned char   *ptr2;

        ptr = (unsigned char *)src;
        ptr2 = (unsigned char *)dest;
        i = 0;
        while(i < n)
        {
                ptr2[i] = ptr[i];
                i++;
        }
        return (dest);
}
/*
#include <stdio.h>
#include <stddef.h>
int	main()
{
	unsigned char	s1[5] = "hola";
	unsigned char	s2[5] = "o";
	
	printf("%s\n", s2);
	ft_memcpy(s2, s1, 4);
	printf("%s\n", s2);
	return (0);
}*/
