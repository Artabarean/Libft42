/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:12:08 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/24 10:25:40 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char    *s1;

    if (!s)
        return (NULL);
    s1 = (char*)s;
    while (*s != '\0')
    {
        if (*s == (char)c)
        {
          s1 = (char*)s;
          s++;
        }
        if (*s != (char)c)
          s++;
        if (*s == (char)c && (char)c == '\0')
          s1 = (char*)s;
        if (*s == '\0' && *s + 1 != '\0')
          s++;
    }
    if (*s1 == (char)c)
        return (s1);
    return (NULL);
}
// #include <stdio.h>
// int main()
// {
//     int c = 'o';
//     const char s[8] = "saco\0ooo";
//     char *result = ft_strrchr(s, c);
//     if (result != NULL) {
//         printf("Found character '%c' at position: %ld\n", c, result - s);
//     } else {
//         printf("Character '%c' not found\n", c);
//     }
//     return 0;
// }