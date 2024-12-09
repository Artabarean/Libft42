#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 00 && c <= 255)
    return (1);
    else
    return(0);
}
/* #include <stdio.h>
int main()
{
    printf("%d\n", ft_isascii('c'));
    return (0);
} */