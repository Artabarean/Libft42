#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        unsigned char   *ptr;
        unsigned char   *ptr2;

        ptr = (unsigned char *)src;
        ptr2 = (unsigned char *)dest;
        while(n--)
        {
                *ptr2++ = *ptr++;
        }
        return (dest);
}

// #include <stdio.h>
// int	main()
// {
// 	unsigned char	s1[5] = "hola";
// 	unsigned char	s2[5] = "";
	
// 	printf("%s\n", s2);
// 	ft_memcpy(s2, s1, 5);
// 	printf("%s\n", s2);
// 	return (0);
// }