#include "libft.h"
#include <stdio.h>

void    *f(unsigned int i, char* s)
{
    if (s[i] != '\0')
    {
        return ((char *)s[i]);
    }
}
void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    i = 0;
    while(*s != '\0')
    {
        f(i, s);
        s++;
        i++;
    }
    printf("%s\n", s);
}
int main()
{
    ft_striteri("Hello", "a");
    return (0);
}