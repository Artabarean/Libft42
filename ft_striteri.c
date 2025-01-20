#include "libft.h"
#include <stdio.h>

void    *f(unsigned int index, char* c)
{
    if (c[index] != '\0')
    {
        index++;
        return (&c[index]);
    }
}
void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;
    char            *ptr;

    i = 0;
    while(s[i] != '\0')
    {
        ptr = f(i, s);
        i++;
    }
    printf("%s\n", ptr);
}
int main()
{
    ft_striteri("Hello", f);
    return (0);
}