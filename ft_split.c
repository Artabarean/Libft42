#include "libft.h"
#include <stdio.h>

size_t ft_wrdcnt(char const *s, char c)
{
	size_t  i;
	size_t  count;

	count = 0;
	i = 0;
	while(s[i] == c)
	  i++;
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
	return (printf("word count: %lu\n", count), count);
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
		i++;
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
	aux = malloc(sizeof(char) * (len + 1));
	if (!aux)
		return (NULL);
	while(s[i] != '\0' && s[i] != c)
	{
		aux[j] = s[i];
		i++;
		j++;
	}
	aux[j] = '\0';
	return (aux);
}

char    **ft_split2(char c, char **str, char *aux, size_t arrcnt, size_t index)
{
	while(*aux == c)
		aux++;
	while(arrcnt > 0)
	{
		str[index] = ft_createstr(aux, c, ft_lttrcnt(aux,c));
		if (!str[index])
		{
			while (index > 0)
				free(str[--index]);
			free(str);
			return (NULL);
		}
		while(*aux != c && *aux != '\0')
			aux++;
		while(*aux == c)
			aux++;
		index++;
		arrcnt--;
	}
	return (str);
}

char    **ft_split(char const *s, char c)
{
	char    **str;
	char    *aux;
	size_t  arrcnt;
	size_t  index;
	
	index = 0;
	arrcnt = ft_wrdcnt(s, c);
	if (s == NULL)
	  return (NULL);
	aux = (char *)s;
	str = (char **)ft_calloc((arrcnt + 1), sizeof(char *));
	if (str == NULL)
		return (NULL);
	return (ft_split2(c, str, aux, arrcnt, index));
}

/*int main(int argc, char **argv)
{
	if (argc < 3)
		return(printf("%s\n", "A la verga"), 1);
	char	**spl = ft_split(argv[1], argv[2][0]);
	char	**aux = spl;
	if (!spl)
		return(printf("%s\n", "Retorno nulo"), 1);
	while(spl && *spl)
	{
		printf("%s:\n", *spl);
		free(*spl);
		spl++;
	}
	if (spl && !*spl)
		printf("NULL\n");
	free(aux);
	return (0);
}*/
