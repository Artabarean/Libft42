#include "libft.h"
#include <stdio.h>

size_t ft_wrdcnt(char const *s, char c)
{
    size_t  i;
    size_t  count;

    count = 0;
    i = 0;
    while(s[i] == c)
    {
      i++;
    }
    if (s[i] == '\0')
        return (0);
    while(s[i] != '\0')
    {
        if (s[i] != c && s[i + 1] == c)
          count++;
        if (s[i + 1] == '\0' && s[i] != c)
          count++;
      i++;
    }
    return (count);
}
size_t  ft_lttrcnt(char const *s, char c)
{
    size_t  i;

    i = 0;
    if (!s)
        return (0);
    if (s[i] == c)
      i++;
    while(s[i] != '\0' && s[i] != c)
    {
        i++;
    }
    return (i);
}
char    *ft_createstr(char const *s, char c, size_t len)
{
    size_t  i;
    size_t  j;
    char    *aux;

    j = 0;
    i = 0;
    if (s[i] == c)
        i++;
    
    aux = malloc(sizeof(char) * len);
    while(s[i] != '\0' && s[i] != c)
    {
        aux[j] = s[i];
        i++;
        j++;
    }
    aux[j] = '\0';
    return (aux);
}
char    **ft_split2(char c, char **str, char *aux, size_t arrcnt, size_t acnt2, size_t arrcnt3)
{
    if (*aux == c)
        aux++;
    while(arrcnt > 0)
    {
        str[acnt2] = ft_createstr(aux, c, ft_lttrcnt(aux,c));
        if (*aux == c && *aux++ != c)
            aux++;
        while(*aux != c && *aux != '\0')
        {
            aux++;
        }
        acnt2++;
        arrcnt--;
    }
    while(arrcnt < arrcnt3)
    {
    printf("%s\n", str[arrcnt]);
    arrcnt++;
    }
    return (str);
}
char    **ft_split(char const *s, char c)
{
    char    **str;
    char    *aux;
    size_t  arrcnt;
    size_t  acnt2;
    size_t  arrcnt3;
    
    acnt2 = 0;
    arrcnt = ft_wrdcnt(s, c);
    arrcnt3 = arrcnt;
    if (s == NULL)
      return (NULL);
    aux = (char *)s;
    str = (char **)malloc((ft_wrdcnt(s, c)) * sizeof(char *));
    if (str == NULL)
    {
        return (NULL);
    }
    ft_split2(c, str, aux, arrcnt, acnt2, arrcnt3);
}
#include <stdio.h>
int main()
{
    *ft_split(" alex Anuel Brrr ", ' ');
    return (0);
}