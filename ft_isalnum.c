#include "libft.h"

int ft_isalnum(int c)
{
    if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
    {
        return (1);
    }
    else if (c >= 48 && c <= 57)
    {
        return (1);
    }
    else
        return (0);
}
/* #include <stdio.h>
int main()
{
    int c;

    c = 48;
    printf("%d\n", ft_isalnum(c));
    return (0); 
} */