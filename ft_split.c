/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:15:09 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/28 13:03:59 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_wrdcnt(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static	size_t	ft_lttrcnt(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		count++;
	}
	return (count);
}

static	char	*ft_createstr(char const *s, char c, size_t len)
{
	size_t	i;
	char	*aux;

	i = 0;
	aux = ft_calloc(len + 1, sizeof(char));
	if (!aux)
		return (NULL);
	while (s[i] != '\0' && i < len && s[i] != c)
	{
		aux[i] = s[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

static	char	**ft_split_stuff(char c, char **str, char *aux, size_t arrcnt)
{
	size_t	index;

	index = 0;
	while (arrcnt > 0)
	{
		while (*aux == c)
			aux++;
		if (*aux == '\0')
			break ;
		str[index] = ft_createstr(aux, c, ft_lttrcnt((const char *)aux, c));
		if (!str[index])
		{
			while (index > 0)
				free(str[--index]);
			free(str);
			return (NULL);
		}
		aux += ft_lttrcnt((const char *)aux, c);
		while (*aux == c)
			aux++;
		index++;
		arrcnt--;
	}
	str[index] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*aux;
	size_t	arrcnt;

	if (c == '\0')
	{
		str = ft_calloc(2, sizeof(char *));
		if (!str)
			return (NULL);
		if (s[0] == '\0')
			str[0] = NULL;
		str[0] = ft_strdup(s);
		return (str);
	}
	arrcnt = ft_wrdcnt(s, c);
	if (arrcnt == 0)
	{
		str = ft_calloc(1, sizeof(char *));
		return (str);
	}
	aux = (char *)s;
	str = (char **)ft_calloc((arrcnt + 1), sizeof(char *));
	if (!str)
		return (NULL);
	return (ft_split_stuff(c, str, aux, arrcnt));
}
// #include <stdio.h>
// int main()
// {
//     char **result;
//     char str[] = "  hola esto es   un k ebab ";
//     size_t i = 0;
//     result = ft_split(str, ' ');
//     if (result)
//     {
//         while (result[i])
//         {
//             printf("Word %zu: '%s'\n", i + 1, result[i]);
//             free(result[i]);
//             i++;
//         }
//         free(result);
//     }
//     else
//     {
//         printf("An error has ocurred.\n");
//     }
//     return 0;
//}