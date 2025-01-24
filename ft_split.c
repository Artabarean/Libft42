#include "libft.h"
#include <stdio.h>

static size_t ft_wrdcnt(char const *s, char c)
{
	size_t  i;
	size_t  count;

	count = 0;
	i = 0;
	if (!s)
		return (NULL);
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
	return (count);
}
static size_t  ft_lttrcnt(char const *s, char c)
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

static char    *ft_createstr(char const *s, char c, size_t len)
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

static char    **ft_split2(char c, char **str, char *aux, size_t arrcnt, size_t index)
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
// int main()
// {
//     char **result;
//     char str[] = "   Hola  mundo  este es   un  ejemplo   ";
//     size_t i = 0;

//     // Llamada a la función ft_split
//     result = ft_split(str, ' ');

//     if (result)
//     {
//         // Imprimir los resultados
//         while (result[i])
//         {
//             printf("Palabra %zu: '%s'\n", i + 1, result[i]);
//             free(result[i]); // No olvides liberar la memoria de cada palabra
//             i++;
//         }
//         free(result); // Liberar el array de punteros
//     }
//     else
//     {
//         printf("Hubo un error al dividir la cadena.\n");
//     }

//     return 0;
// }