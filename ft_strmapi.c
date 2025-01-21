#include "libft.h"

// char    tolower(unsigned int index, char c)
// {
//     (void)index;
//     if(c >= 'A' && c <= 'Z')
//     {
//       c = c + 32;
//     }
//     return (c);
// }

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *ptr;
    char            *aux;

    aux = (char *)s;
    i = 0;
    ptr = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (ptr == NULL)
        return (NULL);
    while(aux[i] != '\0')
    {
        aux[i] = f(i, aux[i]);
        i++;
    }
    ptr = aux;
    ptr[i] = '\0';
    return (ptr);
}
// int main()
// {
//     char  const str[] = "HELLO";
//     printf("%s\n", ft_strmapi(str, f));
//     return (0);
// }