/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:14:43 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/24 12:25:54 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *upstr, const char *substr, size_t len)
{
    char *str;

    str = (char*)upstr;
    if (*substr == '\0')
        return (str);
    while(len > 0 && *upstr != '\0')
    {
        while(len > 0 && *upstr != '\0')
        {
          if (*substr == *upstr && *substr + 1 != '\0')
        	{
				substr++;
				if (*substr == *upstr)
					str = (char*)upstr;
			}
          upstr++;
          len--;
        }
        if (*upstr == '\0' || len == 0)
            return (str);
        if (*upstr != *substr && len > 0)
        {
            upstr++;
            str++;
            len--;
        }
    }
    return (NULL);
}
/*int main()
{
	printf("%s\n", ft_strnstr("Hello World", "World", 11));
	return (0);
}*/