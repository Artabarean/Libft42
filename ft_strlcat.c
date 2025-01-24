#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	dst_len;
    size_t	src_len;
    size_t	i;

    if (!dst || !src)
        return (0);
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (size <= dst_len)
        return (size + src_len);
    i = dst_len;
    while (i < size - 1 && *src)
	{
        dst[i] = *src;
        i++;
        src++;
	}
	dst[i] = '\0';
    return (dst_len + src_len);
}
// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>
// int	main()
// {
// 	char	*dest;
// 	memset(dest, 'r', 15);
//     printf("%li\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
//     write(1, "\n", 1);
//     write(1, dest, 15);
// }