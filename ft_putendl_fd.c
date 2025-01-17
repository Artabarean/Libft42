#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    while(*s != '\0')
    {
        ft_putchar_fd(*s, fd);
        s++;
        if (*s == '\0')
        {
            ft_putchar_fd('\n', fd);
        }
    }
    
}
/*int main()
{
    ft_putendl_fd("Hola", 1)= '\0');
    return (0);
}*/