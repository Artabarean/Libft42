#include "libft"
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    int 	i;
    size_t	j;

    j = 0;
    i = 0;
    while(dst[i] != '\0')
	{
		i++;
	}
    i--;
    while(j < (size - 1) && src[j] != '\0')
    {
        dst[i] = src[j];
        i++;
	j++;
    }
    dst[i] = '\0';
    j = 0;
    while(src[j] != '\0')
    {
        j++;
    }
    return(j);
}
/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	const char *src = strdup("abc");
	char	*dst = strdup("abcdefghj");
	size_t	size = 2;
	printf("%s\n", dst);
	printf("%li\n", ft_strlcat(dst, src, size));
	printf("%s\n", dst);
	free(dst);
	return (0);
}*/
