/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:21:16 by atabarea          #+#    #+#             */
/*   Updated: 2025/01/27 10:21:16 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
    {
        return (1);
    }
    else if (c >= 48 && c <= 57)
    {
        return (1);
    }
    else
        return (0);
}
/* #include <stdio.h>
int main()
{
    int c;

    c = 48;
    printf("%d\n", ft_isalnum(c));
    return (0); 
} */