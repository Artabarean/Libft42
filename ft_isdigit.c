#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    else
        return (0);
}
/* 
#include <stdio.h>
int main()
{
    int c;

    c = 47;
    printf("%d\n", ft_isdigit(c));
    return (0);
} */