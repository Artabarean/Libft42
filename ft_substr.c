#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    i;
    char    *str;
    
    i = 0;
    if (start > strlen(s))
      return (NULL);
    str = malloc(len + 1);
    while(i < len && s[start + i] != '\0')
    {
      str[i] = s[start + i];
      i++;
    }
    str[i] = '\0';
    return (str);
}
/*int main()
{
    printf("%s\n", ft_substr("a", 3, 10));
    return (0);
}*/