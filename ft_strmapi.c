#include "libft.h"

void    *f(unsigned int index, char* c)
{
    if (c[index] != '\0')
    {
        index++;
        return (&c[index]);
    }
}
char    *ft_strmapi(char const *s, void (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *ptr;

    i = 0;
    ptr = malloc(ft_strlen(s)) + sizeof(char) + 1;
    while(s[i] != '\0')
    {
        f(i, s);
        i++;
    }
}