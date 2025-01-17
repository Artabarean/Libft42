#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    int     i;
    
    i = 0;
    if (s1 == NULL || set == NULL)
        return (NULL);
    str = (char *)malloc(strlen(s1) - strlen(set) * sizeof(char) + 1);
    if (str == NULL)
        return (NULL);
    while(*s1 != '\0')
    {
        if (*s1 == *set)
        {
            set++;
            s1++;
        }
        else if (*s1 != *set)
        {
          str[i] = *s1;
          i++;
          s1++;
        }
    }
    str[i] = '\0';
    return (str);
}
/*#include <stdio.h>

int main()
{
    printf("%s\n", ft_strtrim("Goodbye", "oo"));
    return (0);
}*/