#include "libft"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t	i;

    i = 0;
    while(i < (size - 1) && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    i = 0;
    while(src[i] != '\0')
    {
        i++;
    }
    return(i);
}
/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char *dst = strdup("hola");
   const char *src = strdup("holap");
    size_t size = 3;
    printf("%s\n", dst);
    printf("%li\n", ft_strlcpy(dst, src, size));
    printf("%s\n", dst);
    free(dst);
    return (0);
}*/
