#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    while(*s != '\0')
    {
        ft_putchar_fd(*s, fd);
        s++;
    }
}
/*int main()
{
    ft_putstr_fd("Hello", 1);
    return (0);
}*/