#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 00 && c <= 127)
    return (1);
    else
    return(0);
}
// #include <stdio.h>
// int main()
// {
// 	int i = 128;
// 	while(i <= 138)
//     {
// 		printf("%d\n", ft_isascii(i));
// 		i++;
// 	}
//     return (0);
// }