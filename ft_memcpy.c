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
// 	printf("%p\n", ft_memcpy(((void*)0), ((void*)0), 5));
// 	return (0);
// }