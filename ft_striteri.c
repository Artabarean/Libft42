#include "libft.h"
#include <stdio.h>

void    f(unsigned int index, char* c)
{
    if (c[index] != '\0')
    {
        c++;
        return(*c);
    }
}
void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while(s[i] != '\0')
    {
        f(i, s);
        i++;
    }
    printf("%s\n", s);
}
int main()
{
    ft_striteri("Hello", f);
    return (0);
}