#include "libft.h"

char    *array_creation(char *s)
{
    int     i;
    char    *aux;

    while(*s != '\0')
    {
        
    }

}
size_t ft_wrdcnt(char const *s, char c)
{
    size_t  i;

    i = 0;
    while(s != c && s != '\0')
    {
        i++;
    }
    return (i);
}
char    **ft_split(char const *s, char c)
{
    char    *str;
    int     i;
    
    if (s == NULL || c == NULL)
        return (NULL);
    while(s != '\0')
    {
        if (*s == (char *)c)
        {
            
        }
    }
}
int main()
{
    printf("%d\n", ft_wrdcnt("helloci", 'c'));
    return (0);
}