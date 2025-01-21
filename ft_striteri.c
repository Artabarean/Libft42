#include "libft.h"

void    (f)(unsigned int index, char *c)
{
    if(c[index] >= 'A' && c[index] <= 'Z')
    {
      c[index] = c[index] + 32;
    }
}
void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;
    
    i = 0;
    while(s[i]!= '\0')
    {
        f(i, s);
        i++;
    }
}
// int main()
// {
//     char  str[] = "HELLO";
//     ft_striteri(str, f);
//     return (0);
// }