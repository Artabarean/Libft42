#include "libft"

int ft_isprint(int c)
{
    if (c >= 00 && c <= 31 || c == 127)
    {
        return (0);
    }
    else
    return (1);
}
/* #include <stdio.h>
int main()
{
    printf("%d\n", ft_isprint('10'));
    return (0);
} */