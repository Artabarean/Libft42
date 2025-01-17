#include "libft.h"

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return (i);
}
/* #include <stdio.h>
int main()
{
    printf("%d\n", ft_strlen("pringles"));
    return (0);
} */