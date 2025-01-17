#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *memrsv;
    
    i = 0;
    memrsv = malloc(ft_strlen(s1) + ft_strlen(s2) * sizeof(char) + 1);
    if(memrsv == NULL)
        return (NULL);
    j = 0;
    while(*s1 != '\0')
    {
        *memrsv = *s1;
        s1++;
        memrsv++;
    }
    while(*s2 != '\0')
    {
      *memrsv = *s2;
      s2++;
      memrsv++;
    }
    *memrsv = '\0';
    return ((char *)memrsv);
}
/*#include <stdio.h>
int main()
{
    printf("%s\n", ft_strjoin("Hola", "adios"));
    return (0);
}*/